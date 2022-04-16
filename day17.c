#include<stdio.h>
int main()
{
char arr[]="example"; //the char array get initialized until '\0' null character so every string result is added with one with the output
printf("%d",sizeof(arr));
return 0;
}