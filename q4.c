#include <stdio.h>
int main(){
	int num,result=0,i;
	printf("Enter a number:");
	scanf("%d",&num);
	for(i=2;i<=num/2;i++){
		if(num%i==0){
			printf("Not a prime number");
			break;
		}
		else{
			result=1;
		}
	}
	if(result==1){
		printf("%d is a prime number",num);
	}
	return 0;
}