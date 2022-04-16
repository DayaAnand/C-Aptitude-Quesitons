#include<stdio.h>
void main()
{
int a=5,b=10;
{
    int a=2;  //variables gets initialized and destroyed within this scope 
    a++; //if print statements are available the scope variables are printed 
    b++; // In this scope, first the compiler checks if the variables are available within this scope or else it tries to identify from the global scope 
}
printf("%d %d",a,b);
return 0;
}