#include<stdio.h>
void merge(int *a,int m,int *b,int n)
{
	int res[m+n];
	int k=0,i=0,j=0,z;
	while(i<m && j<n)   
	{
		if(a[i]<=b[j])
		{
          res[k++]=a[i++];
        }
		else{
		 res[k++]=b[j++];
	       }
	}
	while(i<m)
	{
		res[k++]=a[i++];
	}
	while(j<n)
	{
		res[k++]=b[j++];
	}
	for(z=0;z<m+n;z++)
	{
		printf("%d ",res[z]);
	}
}
int main()
{
	int n,m;
	scanf("%d %d",&m,&n);
	int a[m],b[n],i;
	for(i=0;i<m;i++)
	{ 
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		scanf("%d",&b[i]);
	}
	merge(a,m,b,n);
}
