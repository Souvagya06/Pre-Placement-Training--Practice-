//write a program to enter 5 integers in an array and find the sum and average of the elements.
#include <stdio.h>
int main() {
    int arr[5], i, sum=0; float avg;
    for (i = 0; i<5; i++) {
        printf ("Enter %d element: ", i);
        scanf ("%d", &arr[i]);
    }
    for (i=0; i<5; i++) {
        sum += arr[i];
    }
    avg = sum/5;
    printf ("Sum of all elements: %d\n", sum);
    printf ("Average of all elements: %f", avg);
    return 0;
}