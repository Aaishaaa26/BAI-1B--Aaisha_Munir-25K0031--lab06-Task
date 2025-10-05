#include <stdio.h>
int main(){
	int LastDigit,FirstDigit,Number,Sum;
	printf("Enter A Number: ");
	scanf("%d",&Number);
	LastDigit = Number % 10;
	for(; Number>10; Number=Number/10){
	}
	FirstDigit = Number;
	Sum = FirstDigit+ LastDigit;
	printf("The sum of the first and last digit is %d",Sum);
	return 0;
}