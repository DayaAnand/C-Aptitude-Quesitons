#include<stdio.h>
int main()
{
int a=1,b=2,c=3;
char d=0;
if(a,!b,c,!d){  //does not print anything as the comma operator only evaluates the right of the last comma operator 
//here d is 0 and not of d is 1 so Hello World gets printed
    printf("Hello World");
}
return 0;
}