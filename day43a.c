#include<stdio.h>
int main()
{
char* str="example";
printf("%c",&**str); //error as str points to the first element in the char array and the **str does not point anywhere so error
//If this is a nested array then it will not throw error
//it references and dereferences. So &* gets cancelled for understanding sake
//* is the reference operator and & is the dereference operator
//prints the first character of the char array which is a string in C
return 0;
}
