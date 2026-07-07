#include<stdio.h>
int partition(int arr[],int low,int high){
	int pivot = arr[low];
	int p= low;
	int q= high;
	

while(p<q){
	while(arr[p]<=pivot){
		p++;
	}
	while(arr[q]>pivot){
		q--;
	}
	if(p<q){
		int temp=arr[p];
		arr[p]=arr[q];
		arr[q]=temp;
	}
}
	int temp=arr[low];
	arr[low]=arr[q];
	arr[q]=temp;
	return q;
}
void quicksort(int arr[],int low,int high){
	if(low<high){
		int loc = partition(arr,low,high);
		quicksort(arr,low,loc-1);
		quicksort(arr,loc+1,high);
	}
}
void printArray(int arr[],int n){
	for(int i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
}
int main()
{
	int n;
	
	scanf("%d",&n);
	int arr[n];
	
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	
	printArray(arr,n);
	quicksort(arr,0,n-1);
	
	printArray(arr,n);
	return 0;
}
