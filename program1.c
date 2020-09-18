#include <stdio.h>

#define SIZE 5

int main() {
    int array[SIZE];
    int index;

    for (index=0;index<SIZE;index++){
        scanf("%d",&array[index]);
    }

    for (index=0;index<SIZE;index++){
        printf("%d ",array[index]);
    }
    printf("\n");

}
