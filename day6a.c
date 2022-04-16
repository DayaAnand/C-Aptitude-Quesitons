#include<stdio.h>
int main()
{
 for(int i=2;i!=0;i-/*Comment*/-){ //error as the comment can not be inside the unary operators like increment,decrement operat
     printf("%d",i);
 }
return 0;
}