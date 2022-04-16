#include<stdio.h>
int main()
{
int a=1;
int b=0;
b= ++a + ++a; //unary operator has got the highest precedence. First a gets incremented and the added with itself to return the result (3+3=6)
printf("%d %d",a,b);
return 0;
}
