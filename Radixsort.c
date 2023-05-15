#include<stdio.h>
void printarray(int *a,int n){
	int i;
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
}
int get_Max(int *a,int n){
	int max=0,i;
	for(i=0;i<n;i++){
		if(max<a[i]){
			max=a[i];
		}
	}
	return max;
}
void Radix_sort(int *a,int n){
	int max=get_Max(a,n);
	int e=1;
	while(max>0){
	int counts[10]={0};
	int buckets[10][n],i,j;
	for(i=0;i<n;i++){
		int place=(a[i]/e)%10;
		buckets[place][counts[place]++]=a[i];
	}
	int k=0;
	for(i=0;i<10;i++){
		for(j=0;j<counts[i];j++){
			a[k++]=buckets[i][j];
		}
	}
	e*=10;
	max/=10;
   }
   printarray(a,n);	
}
int main()
{
	int n;
	scanf("%d",&n);
	int a[n],i;
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	Radix_sort(a,n);
}
