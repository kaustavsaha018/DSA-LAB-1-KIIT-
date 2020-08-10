#include <stdio.h>
int main (void){
	int n;
	printf("Enter the size of the array: ");
	scanf("%d", &n);
	
	int arr1[n],arr2[n];
	printf("Enter the array elements:\n");
	int i;
	for(i=0;i<n;i++){
		scanf("%d", &arr1[i]);
		arr2[i]=arr1[i];
	}
	printf("The copied elements are: ");
	for(i=0;i<n;i++){
		printf(" %d ",arr2[i]);
	}
	
	
}
