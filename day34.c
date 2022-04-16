#include<stdio.h>
void main()
{
int m,i=0,j=1,k=2;
m= i++ || j++ || k++;//Incase of OR(||) operator if the value is one(1) or True it does not check for the remainning expression and return true or one(1)
//If it is AND(&&) operator then every expression is validated
//m= 0 || 1 || k++(does not get validated)
//m = 1
printf("%d %d %d %d ",m,i,j,k);
return 0;
}