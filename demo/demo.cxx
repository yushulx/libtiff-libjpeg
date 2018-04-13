#include <stdio.h>
#include "tiffio.h"

int main(int argc, const char* argv[])
{
	if (argc < 2) {
		printf("Usage: demo [TIFF file]\n");
        return 0;
	}
	
	const char* pszImageFile = argv[1];

	TIFF* tif = TIFFOpen(pszImageFile, "r");
    if (tif) {
		uint32 imageWidth, imageLength;
		uint16 compression;

		TIFFGetField(tif, TIFFTAG_IMAGEWIDTH, &imageWidth);
		TIFFGetField(tif, TIFFTAG_IMAGELENGTH, &imageLength);
		TIFFGetField(tif, TIFFTAG_COMPRESSION, &compression);
		
		printf("imageWidth %d, imageLength %d \n\n", imageWidth, imageLength);

		switch(compression) {
			case COMPRESSION_LZW:
				printf("COMPRESSION_LZW \n\n");
				break;
			case COMPRESSION_OJPEG:
				printf("COMPRESSION_OJPEG \n\n");
				break;
			case COMPRESSION_JPEG:
				printf("COMPRESSION_JPEG \n\n");
				break;
		}

		TIFFClose(tif);
    }

	return 0;
}
