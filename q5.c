#include <stdio.h>
int main(){
	int Limit,N1=0,N2=1,Sum=0;
	printf("Enter a number to generate the Fibonacci series up to a specified number of terms:");
	scanf("%d",&Limit);
	while(Limit>Sum){
		if (Sum==0){
			printf("%d,%d",N1,N2);
		}
		Sum=N1+N2;
		printf(",%d",Sum);
		N1=N2;
		N2=Sum;
	}
	if(Limit==0){
		printf("0");
	}
	return 0;
}
