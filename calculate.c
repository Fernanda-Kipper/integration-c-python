#include <stdio.h>
#include <stdlib.h>

int *calculate(int i){
    int *result = (int *)malloc(sizeof(int) * 3);
    // return size of the array on the first position
    result[0] = 2;
    result[1] = i;
    result[2] = i + 4;

    return result;
}