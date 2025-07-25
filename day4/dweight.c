/* computes the dimensional weight of a 12" x 10" x 8" box */

#include <stdio.h>

int main(void)
{
	int height, length, width, volume, weight;

	height = 8;
	length = 12;
	width = 10;
	volume = height * length * width;
	weight =(volume + 165) / 166;

	printf("Dimensions: %dx%dx%x\n", length, width, height);
	printf("Volume (cubic inches) : %d\n", volume);
	printf("Dimensional weight (punds) : %d\n", weight);

	return 0;
}
