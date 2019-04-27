#include "comparator.h"

int compare_mtime(char * p1, char * p2) {
	struct stat * source_buffer;
	struct stat * dest_buffer;
	
	source_buffer = malloc(sizeof(struct stat));
	dest_buffer = malloc(sizeof(struct stat));
	
	stat(p1, source_buffer);
	stat(p2, dest_buffer);
	
	if(source_buffer->st_mtime > dest_buffer->st_mtime) {
		free(source_buffer);
		free(dest_buffer);

		return 1;
	} else { 
		free(source_buffer);
		free(dest_buffer);

		return 0;
	}  
}

int compare_size(char * p1, int div_size) {
	struct stat * source_buffer;
	source_buffer = malloc(sizeof(struct stat));

	stat(p1, source_buffer);

	if(source_buffer->st_size * 1024 * 1024 > div_size) {
		free(source_buffer);
		return 1;
	} else { 
		free(source_buffer);
		return 0;
	} 
}
