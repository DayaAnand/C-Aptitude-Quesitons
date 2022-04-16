#include<stdio.h>
void main()
{
int a,b=1;
int x[5]={1,2,3,4,5};
a=5*4+x[b++]-(9/b); // [] has got the highest precedence
//5*4+2-(9/b)   as x[b++]=2
//5*4+2-(9/b)   (9/2) is 4 
//20+2-4
//22-4
//18
printf("%d",a);
return 0; 
} 