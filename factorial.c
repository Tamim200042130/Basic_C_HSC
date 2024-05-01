#include<stdio.h>
void main(){
long long n,fact=1,i;
printf("Enter the value of n :");
scanf("%d",&n);
for(i=1;i<=n;i++){
    fact=fact*i;
}
printf("The factorial of %d is = %ld",n,fact);

}
