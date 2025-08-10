#include <stdio.h>
int main() {
    int arr[10] = {1, 2, 3, 4, 5}, n, a, j=5, i;
    printf ("Position: "); scanf ("%d", &n);
    printf ("New element: "); scanf ("%d", &a);
    for (i=j; i>n; i--) {
        arr[i] = arr[i-1];
    }
    arr[n] = a;
    for (i=0; i<=j; i++) {
        printf ("%d, ", arr[i]);
    }
}