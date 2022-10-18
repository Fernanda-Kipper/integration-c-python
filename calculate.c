#include <stdio.h>
#include <stdlib.h>

int *calculate(int i){
    int *result = (int *)malloc(sizeof(int) * 2);
    // return size of the array on the first position
    result[0] = 2;
    result[1] = i;

    return result;
}