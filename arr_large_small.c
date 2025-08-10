//write a program to find the largest and smallest number in an array
#include <stdio.h>
int main() {
    int n; printf ("No. of elements in the array: "); 
    scanf ("%d", &n);
    int arr[n], i;
    for (i=0; i<n; i++) {
        printf ("Enter %d element: ", i);
        scanf ("%d", &arr[i]);
    }
    int largest = arr[0];
    int smallest = arr[0];
    for (i=0; i<n; i++) {
        if (arr[i]>largest) {
            largest = arr[i];
        }
        if (arr[i]<smallest) {
            smallest = arr[i];
        }
    }
    printf ("The Largest no. in the array is : %d\n", largest);
    printf ("The Smallest no. in the array is : %d", smallest);
    return 0;
}