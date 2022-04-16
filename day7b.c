#include<stdio.h>
int main()
{
 int i;
 i =(1,2,3);
 printf("i=%d\n",i); // i stores only 3 by operator precedence like i=(1,2,3) . = has higher precedance than , stores the last element(i.e) 3 
return 0;
} 