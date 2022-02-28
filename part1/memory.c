#include <stdint.h>
#include <stdio.h>
#include "memory.h"

int main() {

	uint32_t array1[3][3];
	uint32_t array2[3][3][3];
	
	int value = 0;
	for (int x = 0; x < 3; x++) {
		for (int y = 0; y < 3; y++) {
			array1[x][y] = value++;
		}	
	}
	
	value = 0;
	
	for (int x = 0; x < 3; x++) {
		for (int y = 0; y < 3; y++) {
			for (int z = 0; z < 3; z++) {
				array2[x][y][z] = value++;
			}	
		}	
	}
	
	printf("TWO-D ARRAY\n");
	for (int x = 0; x < 3; x++) {
		for (int y = 0; y < 3; y++) {
			printf("Value @ x:%d, y:%d | %d |", x, y, array1[x][y]);
			printf("\t Memory: ");
			printf("%p", &array1[x][y]);
			printf("\n");
		}	
	}
	
	printf("THREE-D ARRAY\n");
	for (int x = 0; x < 3; x++) {
		for (int y = 0; y < 3; y++) {
			for (int z = 0; z < 3; z++) {
				printf("Value @ x:%d, y:%d, z:%d | %d |", x, y, z, array2[x][y][z]);
				printf("\t Memory: ");
				printf("%p", &array2[x][y][z]);
				printf("\n");
			}	
		}	
	}
	
	return 0;
}
