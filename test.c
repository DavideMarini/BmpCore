#include <stdio.h>
#include <stdlib.h>
#include "bmpcore/bmpcore.h"

int main(){
	
	printf("Programma Iniziato\n");
	
	BITMAPHEADER* header = getHeader("img3.bmp");
	
	printf("Caricamento Terminato\n");
	
	printf("%s\n", (char*)header);
	printf("%d", header->bmFileSize);
	
	free(header);
	
	return 0;
}