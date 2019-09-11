#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,j=1,n;
	printf("enter a number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		j=j*i;
	printf("the factorial of  %d is %d \n",n,j);
	return(0);
}
