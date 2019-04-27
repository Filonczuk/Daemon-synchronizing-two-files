#include "fopr.h"

char * create_full_path(char* directoryPath, char* fileName) {
	char* full_path; 
	if((full_path = malloc(strlen(directoryPath)+strlen(fileName)+2)) != NULL) {
		full_path[0] = '\0'; 
		strcat(full_path, directoryPath);
		strcat(full_path, "/");
		strcat(full_path, fileName);
	} 

	return full_path; 
}

int is_regular_file(const char *path) {
    struct stat path_stat;
    stat(path, &path_stat);
    return S_ISREG(path_stat.st_mode);
}

int is_directory(const char *path) {
    struct stat path_stat;
    stat(path, &path_stat);
    return S_ISDIR(path_stat.st_mode);
}
