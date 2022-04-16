#include<stdio.h>
int main()
{
int a=1;
int b=0;
b= --a + ++a; //unary operator has got the highest precedence. First increment and decrement is done the result is returned (1+1=2)
printf("%d %d",a,b);
return 0;
}

 