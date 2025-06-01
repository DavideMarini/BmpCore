#ifndef BMPCORE_H
#define BMPCORE_H

#include <stdint.h>

extern const size_t HEADER_SIZE;
typedef enum{
	BITMAPCOREHEADER = 12;
	BITMAPCOREHEADER2 = 64;
	BITMAPINFOHEADER = 40;
	BITMAPV2INFOHEADER = 52;
	BITMAPV3INFOHEADER = 56;
	BITMAPV4HEADER = 108;
	BITMAPV5HEADER = 124;
	
	
} DIBHEADER_SIZE

#pragma pack(push, 1)

typedef struct{
	uint16_t bmType;
	uint32_t bmFileSize;
	uint16_t bmReserved1;
	uint16_t bmReserved2;
	uint32_t bmPixelOffset;
} BITMAPHEADER;

typedef struct{
	uint32_t bmHeaderSize;
	uint32_t bmWidth;
	uint32_t bmHeight;
	
	
} BITMAPINFOHEADER;

#pragma pack(pop)

BITMAPHEADER* getHeader(char filePath []);








#endif //BMPCORE_H