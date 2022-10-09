#include<stdio.h>
int main()
{
   int n,flag=0,m=0;
   scanf("%d",&n);
   m=n/2;
   for(int i=2;i<=m;i++)
   {
   	if(n%i==0)
   	{
   		printf("Not a prime");
   		flag=1;
   		break;
	   }
	   
   }
if(flag==0)
	   {
	   	printf("Prime");
	   }
}