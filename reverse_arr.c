// write a program to reverse an int array
#include <stdio.h>
int main() {
    int n, i;
    printf ("No.of terms: ");
    scanf ("%d", &n);
    if ((n>=1) && (n<=1000)) {
        int arr[n];
        for (i=0; i<n; i++) {
            printf ("Enter %d element of the array: ", i);
            scanf ("%d", &arr[i]);
        }
        printf ("The elements are: "); 
        for (i=0; i<n; i++) {
            printf ("%d, ", arr[i]);
        }
        int m = n; int arr2[m];
        m -= 1;
        for (i=0; i<n; i++) {
            arr2[m] = arr[i];
            m--;
        }
        printf ("\nElements after reversing: ");
        for (i=0; i<n; i++) {
            printf ("%d, ", arr2[i]);
        }
    }else {
        printf ("Invalid");
    }
}