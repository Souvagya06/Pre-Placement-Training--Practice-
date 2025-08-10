#include <stdio.h>
int main() {
    int arr[] = {1, 1, 2, 3, 4, 4, 5, 6, 6, 7, 8, 8, 9};
    int size = sizeof(arr)/sizeof(arr[0]);
    int arr2[size], ind = 0, i, j;
    printf ("Before: ");
    for (i=0; i<size; i++) {
        printf ("%d, ", arr[i]);
    }
    for (i=0; i<size; i++) {
        int found = 0;
        for (j=0; j<ind; j++) {
            if (arr[i] == arr2[j]) {
                found = 1;
                break;
            }
        }
        if (found == 0) {
            arr2[ind] = arr[i];
            ind++;
        }
    }
    printf ("\nAfter removing: ");
    for (i=0; i<ind; i++) {
        printf ("%d, ", arr2[i]);
    }
}