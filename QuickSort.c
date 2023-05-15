#include<stdio.h>
void swap(int *a,int *b){
    int t=*a;
	*a=*b;
	*b=t;
	}
int lomuto_partition(int *a,int l,int r){
	int pivot=a[r];
	int i=l-1,j=l;
		for(;j<r;j++){
			if(a[j]<pivot){
				i++;
				swap(&a[i],&a[j]);
			}
		}
		swap(&a[i+1],&a[r]);
		return i+1;
}
void Quick_sort(int *a,int l,int r){
	if(r>l){
		int p=lomuto_partition(a,l,r);
		Quick_sort(a,l,p-1);
		Quick_sort(a,p+1,r);
	}
}
int main()
{
	int n,i;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	Quick_sort(a,0,n-1);
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
}
