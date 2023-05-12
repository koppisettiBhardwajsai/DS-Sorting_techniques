#include<stdio.h>
void bubble(char *a,int n)
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
	printf("%s\n",a);
}
}
}
int main()
{
	int n;
	scanf("%d",&n);
	char a[n];
	scanf("%s",a);
    bubble(a,n);
  	printf("%s",a);
}
