/*
    4. Write an algorithm to search an element in the array using iterative Binary Search.
*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int binarySearch(int n, int *A, int data) {
    int lb = 0 , ub = n-1;
    while(lb<ub) {
        int mid = floor((lb + ub )/2);
        if (data == A[mid]) return mid;
        else if(data < A[mid]) ub = mid-1;
        else lb = mid+1;
    }

    return -1;
}

void main() {
    int n, data, i, loc;
    int *A;
    printf("Enter size of array : ");
    scanf("%d", &n);
    // int A[n];
    A = (int *)malloc(n*sizeof(int));
    printf("Enter array : ");
    for (i = 0; i < n; i++) scanf("%d", &A[i]);
    printf("Entered array : ");
    for (i = 0; i < n; i++) printf("%d ", A[i]);
    printf("\nEnter element to search : ");
    scanf("%d", &data);
    loc = binarySearch(n, A, data);
    if(loc == -1) printf("Element not found !!");
    else printf("Element found at position : %d", loc+1);
}