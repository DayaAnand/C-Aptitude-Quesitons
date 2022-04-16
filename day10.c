#include<stdio.h>
int main()
{
    short int i=65000;
    while(i++ != 0); //no infinite loop as i starts from 65000 and gets incremented by 1 until it reaches the short int threshold and then becomes 0. 
    //From there 0 gets increments and i value is 1 here which is printed 
    printf("%d",i);
return 0;
}