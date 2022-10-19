#include <stdio.h>
#include <stdlib.h>

int *calculate(int i){
    int *result;
    int fim = 0;

    if((result = (int *)malloc(2 * sizeof(int))) == NULL){
        printf("\nERROR: an error ocurred while alocating memory for the result's array\n");
        exit (-1);
    }
    result[0] = 1;
    result[1] = i;

    while (fim < 3){
        if ((result = (int *)realloc(result, (result[0] + 2) * sizeof(int))) == NULL){
            printf("\nERROR: an error ocurred while realocating memory to expand the result's array\n");
            exit (-1);
        }
        result[0]++;
        if (i%2 == 0){
            i /= 2;
        } else {
            i = i*3 + 1;
        }

    result[result[0]] = i;
    
    if (i == 1)
        fim++;
    }

    return result;
}

void liberaArray(int* pointer){
    free(pointer);
}