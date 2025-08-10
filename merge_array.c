#include <stdio.h>

int main() {
    int arr[] = {4, 2, 1, 5, 6}, arr2[] = {9, 0, 2, 8, 5};
    int a = sizeof(arr) / sizeof(arr[0]);
    int b = sizeof(arr2) / sizeof(arr2[0]);
    int i, j;

    // Sort arr using bubble sort
    for (i = 0; i < a; i++) {
        for (j = 0; j <a-1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // Sort arr2 using bubble sort
    for (i = 0; i < b; i++) {
        for (j = 0; j < b-1; j++) {
            if (arr2[j] > arr2[j + 1]) {
                int temp = arr2[j];
                arr2[j] = arr2[j + 1];
                arr2[j + 1] = temp;
            }
        }
    }

    // Merge arr2 into arr (but arr isn't large enough — create new array)
    int merged[a + b];
    for (i = 0; i < a; i++)
        merged[i] = arr[i];
    for (j = 0; j < b; j++)
        merged[i++] = arr2[j];

    // Print the merged list (not globally sorted)
    printf("Merged List: ");
    for (i = 0; i < a + b; i++) {
        printf("%d, ", merged[i]);
    }
    printf("\n");
    return 0;
}