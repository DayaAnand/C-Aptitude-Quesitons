#include<stdio.h>
int main()
{
    char str[]="hello"; //str pointer points to the first element of the char array 
    char *s1=str; 
    for(int i=0;i<4;i++){
        printf("%c",*s1);  
        s1++;
    }
    return 0;
}