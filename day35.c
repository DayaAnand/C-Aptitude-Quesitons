#include<stdio.h>
int main()
{
char buf[4]={1,2,3,4};
char p=(buf+1)[2]; //(buf+1)[2] = (buf+1+2) = buf[3] which is 4
printf("%d",p);

return 0;
}