#include<stdio.h>
int main()
{
int a=1;
int b=0;
int c=a||--b; // In logical OR operator if any one of the value is true the whole thing becomes true and the compiler only check for the first value if it is true then return true without checking the second value
int d=a--&&--b;//Logical AND operator, both the values to be true to get true as the output.. 1 and -1 are considered as true output as they are non-zero values
printf("a=%d, b=%d, ",a,b);
printf("c=%d, d=%d",c,d);
return 0;
}