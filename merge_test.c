// C++ program to merge two sorted arrays/
#include <stdio.h>
#define SIZE 4
 
// Merge arr1[0..n1-1] and arr2[0..n2-1] into
// arr3[0..n1+n2-1]
void mergeArrays(int arr1[], int arr2[], int arr3[])
{
    int i = 0, j = 0, k = 0;
 
    // Traverse both array
    while (i<SIZE && j <SIZE)
    {
        // Check if current element of first
        // array is smaller than current element
        // of second array. If yes, store first
        // array element and increment first array
        // index. Otherwise do same with second array
        if (arr1[i] < arr2[j])
            arr3[k++] = arr1[i++];
        else
            arr3[k++] = arr2[j++];
    }
 
    // Store remaining elements of first array
    while (i < SIZE)
        arr3[k++] = arr1[i++];
 
    // Store remaining elements of second array
    while (j < SIZE)
        arr3[k++] = arr2[j++];
}
 
// Driver code
int main()
{
    int arr1[] = {1, 3, 5, 7};
 
    int arr2[] = {2, 4, 6, 8};
 
    int arr3[SIZE+SIZE];
    mergeArrays(arr1, arr2, arr3);
    
    int i;
    
    for (i=0; i < SIZE+SIZE; i++)
    	printf("%d ", arr3[i]);
    
 	getch();
    return 0;
}
