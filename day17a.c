#include<stdio.h>
int main()
{
char arr[]="\texample"; //the char array get initialized until '\0' null character so every string result is added with one with the output
printf("%d",sizeof(arr)); // '\t' is an escape character and the size of the escape character is one
return 0;
}