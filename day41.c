#include<stdio.h>
void main()
{
int x=10,*y,**z;
y=&x;
z=&y;
printf("%d ",*y); //y points to the memory address of x and prints the value of x
printf("%d ",**z); //z points to the memory address of y and the value of y stored is memory address of x and y in turn has the memory address of x and prints the value of x
printf("%d ",*(*z)); //the previous and this print statements are the same
//All print statements prints 10 as the output
return 0;
}