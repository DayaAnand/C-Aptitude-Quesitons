#include<stdio.h>
int main()
{
int x=10;
static int y= 10==10; //return 1 (True)
if(x==y)
printf("Yes");
else
printf("No");
return 0;
}