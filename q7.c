#include <stdio.h>
int main(){
	int num,factorial=1,i;
	printf("Enter a number to evaluate n!:");
	scanf("%d", &num);
	for(i=1;i<=num;i++){
		factorial=factorial*i;
	}
	printf("Your result is: %d",factorial);
    return 0;  
}