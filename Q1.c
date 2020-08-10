#include <stdio.h>
int main (void){
	int n;
	printf("Enter the size of the array: ");
	scanf("%d", &n);
	
	int arr[n];
	printf("Enter the array elements:\n");
	int i;
	for(i=0;i<n;i++){
		scanf("%d", &arr[i]);
	}
	printf("\nThe array elements in reverse oder is:\n");
	for(i=n-1;i>=0;i--){
		printf(" %d ", arr[i]);
	}
}
