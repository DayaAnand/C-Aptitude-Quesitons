#include<stdio.h>
int main()
{
    char str[]="example"; //str pointer points to the first element of the char array 
    char *s1=str; 
    for(int i=0;i<4;i++){
        printf("%c",*str); //str always points to the first element of the char array and we are incrementing only the s1 pointer
        s1++;
    }
    return 0;
}