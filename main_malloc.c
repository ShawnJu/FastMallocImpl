

#include <stdio.h>
#include <stdlib.h>

#include "mm.h"

int main() {
	struct timeval time_s, time_e;
	void* chunks[NUM_CHUNKS];
	
	gettimeofday(&time_s, NULL);
	
	int i;
	for (i = 0; i < NUM_CHUNKS; i++) {
		chunks[i] = malloc(CHUNK_SIZE);
	}
	for (i = 0; i < NUM_CHUNKS; i++) {
		free(chunks[i]);
	}
	
	gettimeofday(&time_e, NULL);
	
	fprintf(stderr, "Time taken = %f msec\n", comp_time(time_s, time_e) / 1000.0);
	
	return 0;
}
	
	
