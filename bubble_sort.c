#include <stdio.h>
int main() {
    int arr[5] = {1, 2, 3, 4, 5}, i, j;
    int len = sizeof(arr)/sizeof(arr[0]);
    for (i=0; i<len; i++) {
        for (j=0; j<len-1; j++) {
            if (arr[j]<arr[j+1]) {
                int k= arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = k;
            }
        }
    }
    for (i=0; i<len; i++) {
        printf ("%d, ", arr[i]);
    }
}