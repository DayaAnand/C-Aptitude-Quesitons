#include<stdio.h>
void main()
{
int x=1,*y,**z;
y=&x;
z=&y;
printf("%d ",*y); //prints q as y has the memeory address of x
printf("%d ",*z); //z has stored the memory address of y and prints the memory address of x
return 0;
}