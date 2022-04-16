#include<stdio.h>
int main()
{
char* str="example";
printf("%c",*&*str);  //it references and dereferences. So &* gets cancelled for understanding sake
//* is the reference operator and & is the dereference operator
//prints the first character of the char array which is a string in C
return 0;
}