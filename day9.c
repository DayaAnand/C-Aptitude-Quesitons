#include<stdio.h>
#define prod(a,b) a*b
int main()
{
    int x=3,y=4;
    printf("%d",prod(x+2,y-1)); //operator precendance remember
return 0;
}
/*
prod(x+2,y-1);
x+2*y-1;
3+(2*4)-1
3+8-1
10
*/