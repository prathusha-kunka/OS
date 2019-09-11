 
#include<stdio.h>

int main()
{
	int i,j,n;
	printf("enter the number");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
		j=j*i;
	printf("Factorial of number %d is %d",n,j);
	return(0);
}
