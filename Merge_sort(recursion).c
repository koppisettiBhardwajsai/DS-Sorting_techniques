#include<stdio.h>
#define min(a,b) a < b ? a:b
void merge(int *arr,int L,int M,int R){
	int res[R-L+1];
	int i=L,j=M+1,k=0;
	while(i<=M && j<=R){
		if(arr[i]<=arr[j]){
			res[k++]=arr[i++];
		}
		else{
			res[k++]=arr[j++];
		}
	}
	while(i<=M) {
    res[k++]=arr[i++];
    }
    while(j<=R){
	 res[k++]=arr[j++];
	 }
    k=0;
    for(i=L;i<=R;i++){
    	arr[i]=res[k++];
	}
}
void merge_sort_rec(int *arr,int l,int r){
     if(l<r){
     	int m=(l+r)/2;
     	merge_sort_rec(arr,l,m);
     	merge_sort_rec(arr,m+1,r);
     	merge(arr,l,m,r);
	 }
}
int main()
{
	int n,i;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	merge_sort_rec(arr,0,n-1);
	for(i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
}
