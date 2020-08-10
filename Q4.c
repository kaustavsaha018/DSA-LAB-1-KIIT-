#include <stdio.h>
int main (void){
	int n;
	printf("Enter the size of the array: ");
	scanf("%d",&n);
	int arr[n];
	int i,j,count,temp;
	printf("Enter the array elements:\n");
	for(i=0;i<n;i++){
		scanf("%d", &arr[i]);
	}
	
	for(i=0;i<n;i++){
		count=0;
		
		temp=0;
		for(j=i;j<n;j++){
			if(arr[i]==arr[j]){
			count++;	
			}	
		}
		
	
		for(j=i-1;j>=0;j--){
		
			if(arr[i]==arr[j] && i>0){
				temp++;
				
			}
		
		}

		if(temp==0){
			printf("\n%d occurred %d times", arr[i],count);
		}
				
	}
		
}
	
