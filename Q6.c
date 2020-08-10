#include <stdio.h>
int main (void){
	int n;
	printf("Enter the size of the array: ");
	scanf("%d", &n);
	
	int arr1[n],arr2[n],arr3[2*n];
	printf("Enter the array elements of array 1:\n");
	int i;
	for(i=0;i<n;i++){
		scanf("%d", &arr1[i]);
		arr3[i]=arr1[i];
	}
	printf("Enter the array elements of array 2:\n");
	for(i=0;i<n;i++){
		scanf("%d", &arr2[i]);
		arr3[i+n]=arr2[i];
	}
	printf("The elements of array 3 are:\n");
	quickSort(arr3, 0, 2*n-1); 
	for(i=0;i<2*n;i++){
		printf(" %d ", arr3[i]);
		
	}
}


void swap(int* a, int* b) 
{ 
    int t = *a; 
    *a = *b; 
    *b = t; 
} 
  

int partition (int arr[], int low, int high) 
{ 
    int pivot = arr[high];   
    int i = (low - 1);  
  	int j;
    for (j = low; j <= high- 1; j++) 
    { 
       
        if (arr[j] < pivot) 
        { 
            i++;    
            swap(&arr[i], &arr[j]); 
        } 
    } 
    swap(&arr[i + 1], &arr[high]); 
    return (i + 1); 
} 
  

int quickSort(int arr[], int low, int high) 
{ 
    if (low < high) 
    { 
        
        int pi = partition(arr, low, high); 
  
       
        quickSort(arr, low, pi - 1); 
        quickSort(arr, pi + 1, high); 
    } 
} 
  

 
