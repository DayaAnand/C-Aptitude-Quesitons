#include<stdio.h> 
char* getString(){ //no string arr in c so we are using char array
    char* str="nice test for strings";
}
int main()
{
printf("%s",getString());
return 0;
}