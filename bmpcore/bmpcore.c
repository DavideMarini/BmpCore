#include "bmpcore.h"
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

const size_t HEADER_SIZE = 14;

BITMAPHEADER* getHeader(char filePath []){
	// creiamo il file stream con l'header
	FILE* fstream = fopen(filePath, "rb");
	if (fstream == NULL) return NULL;
	
	// allochiamo lo spazio per l'header
	BITMAPHEADER* header = (BITMAPHEADER*) malloc(HEADER_SIZE);
	if(header == NULL) return NULL;
	
	// copiamo dal file alla struct l'header
	size_t result = fread(header, 1, HEADER_SIZE, fstream);
	if (result != HEADER_SIZE) return NULL;
	
	fclose(fstream);
	
	return header;
} 