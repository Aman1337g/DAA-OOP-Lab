/*
    1. Write an algorithm to search an element in the array using linear search.
*/

#include<stdio.h>
#include<stdlib.h>

int linearSearch(int size, int ARR[], int element) {
    int i;
    for (i = 0; i < size; i++) {
        if(ARR[i] == element) return i+1; 
    }
    
    return -999;
}

void main() {
    int n, data, i, loc;
    printf("Enter size of array : ");
    scanf("%d", &n);
    int A[n];
    printf("Enter array : ");
    for (i = 0; i < n; i++) scanf("%d", &A[i]);
    
    printf("Entered array : ");
    for (i = 0; i < n; i++) printf("%d ", A[i]);
    
    printf("\nEnter element to search : ");
    scanf("%d", &data);    
    loc = linearSearch(n, A, data);
    if(loc == -999) printf("Element not found !!");
    else printf("Element found at location : %d", loc);
}