#include <stdio.h>
int main (void){
	int n;
	printf("Enter the size of the array: ");
	scanf("%d", &n);
	
	int arr[n];
	printf("Enter the array elements:\n");
	int i,largest,smallest;
	for(i=0;i<n;i++){
		scanf("%d", &arr[i]);
	}
	largest=arr[0];
	for(i=1;i<n;i++){
		if(largest<arr[i])
			largest=arr[i];
	}
	smallest=arr[0];
	for(i=1;i<n;i++){
		if(smallest>arr[i])
			smallest=arr[i];
	}
	printf("\nThe largest element in the array is: %d",largest);
	printf("\nThe smallest element in the array is: %d",smallest);
}
