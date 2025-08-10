#include <Stdio.h>
int main() {
    int arr[] = {10, 20, 30, 40, 50, 60}, i, n;
    int j = sizeof(arr)/sizeof(arr[0]);
    printf ("Enter index: ");
    scanf ("%d", &n);
    for (i=n; i<j-1; i++) {
        arr[i] = arr[i+1];
    }
    for (i=0; i<j-1; i++) {
        printf ("%d, ", arr[i]);
    }    
}