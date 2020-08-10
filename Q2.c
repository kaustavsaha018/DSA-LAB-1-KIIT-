#include <stdio.h>
int main (void){
	int n;
	printf("Enter the size of the array: ");
	scanf("%d", &n);
	
	int arr[n];
	printf("Enter the array elements:\n");
	int i;
	int sum=0;
	for(i=0;i<n;i++){
		scanf("%d", &arr[i]);
		sum=sum+arr[i];
	}

	printf("\nThe sum of the array elements is: %d",sum);
}
