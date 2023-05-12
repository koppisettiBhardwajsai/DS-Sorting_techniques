#include<stdio.h>
void printarray(int *a,int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
}
int bubble(int *a,int n)
{
		int i,j;
	for(i=0;i<n;i++)
	{
	printf("Pass:%d\n",i+1);
	for(j=0;j<n-1;j++)
	{
		if(a[j]>a[j+1])
		{
		int t=a[j];
			a[j]=a[j+1];
			a[j+1]=t;
		}
		printarray(a,n);
}
}
}
int main()
{
	int n;
	scanf("%d",&n);
	int a[n];
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
     bubble(a,n);
  for(i=0;i<n;i++)
  {
  	printf("%d ",a[i]);
  }
}
