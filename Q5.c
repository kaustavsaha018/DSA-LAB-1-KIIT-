#include <stdio.h>
int main (void){
	int n;
	printf("Enter the size of the array: ");
	scanf("%d",&n);
	int arr[n];
	int i,j,temp;
	printf("Enter the array elements:\n");
	for(i=0;i<n;i++){
		scanf("%d", &arr[i]);
	}
	printf("\nAll the unique elements are:");
	for(i=0;i<n;i++){
	
		
		temp=0;
		
		for(j=i-1;j>=0;j--){
		
			if(arr[i]==arr[j] && i>0){
				temp++;
				
			}
		
		}
		
		if(temp==0){
			printf("\n%d", arr[i]);
		}
				
	}
		
}
	
