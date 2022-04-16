#include<stdio.h>
void main()
{
int m=5,i=0,j=5,k=1;
m= i++ || j++ && k++;//Incase of OR(||) operator if the value is one(1) or True it does not check for the remainning expression and return true or one(1)
//If it is AND(&&) operator then every expression is validated
//m= 0 || 5 && 1(does not get validated)
//m = 1
printf("%d %d %d %d ",m,i,j,k);
return 0;
}