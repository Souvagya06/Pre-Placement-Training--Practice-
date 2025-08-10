#include <stdio.h>

int main() {
    int arr[] = {3, 5, 3, 7, 5, 3, 9, 5};
    int i, j, found, previous;
    printf ("Frequency of each element: \n");
    for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
        previous = 0;
        for (j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                previous = 1;
                break;
            }
        }
        if (previous == 0) {
            found = 1;
            for (j = i + 1; j < sizeof(arr) / sizeof(arr[0]); j++) {
                if (arr[i] == arr[j]) {
                    found++;
                }
            }
            printf("%d : %d\n", arr[i], found);
        }
    }
}