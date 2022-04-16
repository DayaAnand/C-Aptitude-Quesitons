#include<stdio.h>
int main()
{
    unsigned int i=65000;
    while(i++ != 65000); //65000 != 65000 which is equal to false(0)
    printf("%d",i); //65001 gets printed
return 0;
}