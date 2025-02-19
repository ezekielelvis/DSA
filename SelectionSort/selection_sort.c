#include <stdio.h>
#include <string.h> 
#include <stdlib.h>
#include <limits.h>
#define SIZE 5

int findtheleast(int *arr){
    int smallest = arr[0];
    int index = 0;
    for(int i = 1; i < SIZE; i++){
        if(arr[i] < smallest){
            smallest = arr[i];
            index = i;
        }      
    }
    return index;
}

int *sorted_list(int *arr){
    int *sorted = (int *)malloc(SIZE * sizeof(int));
    for (int i = 0; i < SIZE; i++){
        int smallest = findtheleast(arr);
        sorted[i] = arr[smallest];
        arr[smallest] = INT_MAX;
    }
    return sorted;
}

int main(){
    int arr[SIZE] = {4, 2, 9, 7, 1};
    int *sorted = sorted_list(arr);
    printf("Sorted list: ");
    for(int i = 0; i < SIZE; i++){
        printf("%d ", sorted[i]);
    }
    printf("\n");
    return 0;
}