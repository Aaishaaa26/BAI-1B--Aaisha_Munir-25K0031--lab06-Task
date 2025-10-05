#include <stdio.h>
int main(){
	int num,i,j,k;
	printf("Enter a number:");
	scanf("%d",&num);
	int a=num;
	for(i=1;i<=num;i++)
	{
		for(j=a;j>1;j--)
		{
			printf(" ");
		}
		a--;
		for(k=1;k<=2*i-1;k++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
