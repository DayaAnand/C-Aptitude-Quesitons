#include<stdio.h>
int main()
{
char buf[4]={1,2,3,4};
char p=(buf+0)[0]; //(buf+0)[0] = (buf+0+0) = buf[0] which is 1
printf("%d",p);

return 0;
}