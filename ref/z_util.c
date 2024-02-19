
#include "z_util.h"
#include <stdlib.h>
#include <time.h>


void printArray(uint8_t* arr, uint32_t len, char* name)
{
    printf("%s[%d]={ ", name, len);

    for (uint8_t i = 0 ; i < len; i++)
    {
        printf( "0x%X, ", arr[i]);
    }

    printf("end } \n");
}

void genRandomBytes(uint8_t* buff, uint32_t len)
{
    srand(time(NULL));
    for (size_t i = 0; i < len; ++i) {
        buff[i] = rand() % 256;
    }
    printf("genRandomBytes: ");
    printArray(buff, len, "buff");
}