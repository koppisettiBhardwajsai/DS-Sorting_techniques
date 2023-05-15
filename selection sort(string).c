#include<stdio.h>
int selection(char *a,int n)
{
	int i,j;
	for(i=0;i<n-1;i++)
	{
		int min=i;
		for(j=i+1;j<n;j++)
		{
			if(a[j]<a[min])
			{
				min=j;
			}
		}
		int t=a[i];
		a[i]=a[min];
		a[min]=t;
	}
}
int main()
{
	int n,i;
	scanf("%d",&n);
	char a[n];
		scanf("%s",a);
	selection(a,n);
		printf("%s",a);
}
