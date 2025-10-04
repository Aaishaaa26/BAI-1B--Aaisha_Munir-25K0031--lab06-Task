#include <stdio.h>
int main() {
int n;
printf("Enter a number\n");
scanf("%d",&n);
printf("Natural Numbers In Reverse Order:\n");
for(n;n>=1;n--){
printf("%d\n",n);
}
    return 0;
}
