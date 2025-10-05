#include <stdio.h>
int main(){
	int num,result=0,i;
	printf("Enter a number:");
	scanf("%d",&num);
	if (num>0){
	for(i=1;i<=num/2;i++){
		if(num%i==0){
		result=result+i;	
		}
	}
	if(result==num){
		printf("%d is a perfect number",num);
	}
	else{
		printf("%d is not a perfect number",num);
	}
}
	return 0;
}