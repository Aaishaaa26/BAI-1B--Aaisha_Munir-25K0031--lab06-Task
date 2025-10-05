#include <stdio.h>
int main() {
int n1,n2,resultM=0,resultD=0,remain;
char opt;
printf("Enter a number\n");
scanf("%d",&n1);
fflush(stdin);
printf("Enter a number\n");
scanf("%d",&n2);
fflush(stdin);
printf("Enter a (M) for multiplication or (D) for division\n");
scanf("%c",&opt);
if (opt =='M'){
    for(n2;n2>=1;n2--){
        resultM=resultM+n1;
    } 
    printf("The Product is %d",resultM);
}
else if(opt=='D'){
	remain=n1;
    while(remain>=n2){
    	remain=remain-n2;
    	resultD=resultD+1;
	}
    printf("The Quotient is %d and remainder is %d",resultD,remain);
}
    return 0;
}