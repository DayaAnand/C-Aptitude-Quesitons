#include<stdio.h>
void main()
{
int a,b=1;
int x[5]={1,2,3,4,5};
a=5*4+x[--b]-(9/b); // [] has got the highest precedence
//5*4+1-(9/b)   as x[--b]=1
//5*4+1-(9/b)   (9/b) is 9/0 is zerodivision error or floating point exception check with online websites like www.programiz.com
printf("%d",a);
return 0; 
}