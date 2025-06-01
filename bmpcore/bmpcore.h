#ifndef BMPCORE_H
#define BMPCORE_H

#include <stdint.h>

extern const size_t HEADER_SIZE;

typedef enum{
	BITMAPCOREHEADER_SIZE = 12,
	BITMAPCOREHEADER2_SIZE = 64,
	BITMAPINFOHEADER_SIZE = 40,
	BITMAPV2INFOHEADER_SIZE = 52,
	BITMAPV3INFOHEADER_SIZE = 56,
	BITMAPV4HEADER_SIZE = 108,
	BITMAPV5HEADER_SIZE = 124	
} DIBHEADER_SIZE;

#pragma pack(push, 1)

typedef struct{
	uint16_t bmType;
	uint32_t bmFileSize;
	uint16_t bmReserved1;
	uint16_t bmReserved2;
	uint32_t bmPixelOffset;
} BITMAPHEADER;

typedef struct{
	uint32_t bmInfoHeaderSize;
	int32_t bmWidth;
	int32_t bmHeight;
	uint16_t bmPlanes;
	uint16_t bmBitCount;
	uint32_t bmCompression;
	uint32_t bmImageSize;
	int32_t bmXPixelPerMeter;
	int32_t bmYPixelPerMeter;
	uint32_t bmColorUsed;
	uint32_t bmImportantColor;
} BITMAPINFOHEADER;

#pragma pack(pop)

BITMAPHEADER* getHeader(char filePath []);








#endif //BMPCORE_H