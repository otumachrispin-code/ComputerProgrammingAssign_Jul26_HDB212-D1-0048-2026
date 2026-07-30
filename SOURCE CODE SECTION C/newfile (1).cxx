#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr;
    int sum = 0;
    float avg;
    
    arr = (int*)malloc(15 * sizeof(int));
    
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }
    
    printf("Enter 15 numbers:\n");
    for (int i = 0; i < 15; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    
    for (int i = 0; i < 15; i++) {
        sum = sum + arr[i];
    }
    
    avg = sum / 15.0;
    
    printf("\nSum = %d\n", sum);
    printf("Average = %.2f\n", avg);
    
    free(arr);
    
    return 0;
}