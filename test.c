#include <stdio.h>
#include <stdlib.h>
#include "bmpcore/bmpcore.h"

int main(){

	
	printf("Programma Iniziato\n");
	
	BITMAPHEADER* header = getHeader("img3.bmp");
	
	printf("Caricamento Terminato\n");
	
	printf("%d\n", header->bmFileSize);
	printf("%d\n", header->bmReserved1);
	printf("%d\n", header->bmReserved2);
	printf("%d\n", header->bmPixelOffset);
	
	free(header);
	
	return 0;
}