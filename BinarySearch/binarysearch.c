#include <stdio.h>
#include <stdlib.h>

int BinarySearch (int arr[], int item, int len){
    int low = 0;
    int high= len -1;

    while (low <= high){
        int mid = (low + high) / 2;
        int guess = arr[mid];

        if (guess == item){
            return mid;
        }
        else if (guess < item){
            low = mid + 1;
        }
        else {
            high = mid -1;
        }
    }
    return -1;
}

int BinarySearch (int[], int, int);

int main(){
    int arr[] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
    int len = sizeof(arr) / sizeof(arr[0]);
    int item;

    printf("Enter the number to search: ");
    scanf("%d", &item);

    int result = BinarySearch(arr, item, len);

    if (result == -1){
        printf("%d is not present in the array.\n", item);
    }
    else {
        printf("%d is present at index %d.\n", item, result);
    }

    return 0;
}