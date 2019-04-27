#include "copy.h"

#define COPY_SUCCESS 0
#define COPY_FAILURE -1

int copy_normal(int argc, char **argv) {
	char *endptr; 
	long bufferSize = strtol(argv[3], &endptr, 10);

	int source, destination; 
	source = open(argv[1], O_RDONLY);
	if(source < 0) {
		printf("Error: Could not open source file\n");
		return COPY_FAILURE; 
	}	

	destination = open(argv[2], O_RDWR | O_CREAT, 0666); 
	if(destination < 0) {
		printf("Error: Could not open destination file\n");
		close(source); 
		return COPY_FAILURE; 
	}

	char buffer[bufferSize];
	int counter = 0; 
	while((counter = read(source, buffer, sizeof buffer)) > 0) {
		write(destination, buffer, counter);
	}	
	
	close(source);
	close(destination);

	return COPY_SUCCESS;
}

int copy_with_mapping(int argc, char **argv) {
	char *endptr; 
	long bufferSize = strtol(argv[3], &endptr, 10);

	int source, destination; 
	source = open(argv[1], O_RDONLY);
	if(source < 0) {
		printf("Error: Could not open source file\n");
		return COPY_FAILURE; 
	}	

	destination = open(argv[2], O_RDWR | O_CREAT, 0666); 
	if(destination < 0) {
		printf("Error: Could not open destination file\n");
		close(source); 
		return COPY_FAILURE; 
	}

	char * src, *dest; 
	size_t filesize; 

	filesize = lseek(source, 0, SEEK_END);
	src = mmap(NULL, filesize, PROT_READ, MAP_PRIVATE, source, 0); 
	ftruncate(destination, filesize);
	
	dest = mmap(NULL, filesize, PROT_READ | PROT_WRITE, MAP_SHARED, destination, 0); 

	memcpy(dest, src, filesize);
	munmap(src, filesize);
	munmap(dest, filesize);
	
	close(source);
	close(destination);

	return COPY_SUCCESS;
}

