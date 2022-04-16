#include<stdio.h>
void main()
{
int x=4,y=4,z=4;
if(x==y==z){ //== and == has got the same precedence so it evaluates from left to right
//4==4 return 1 then 1==4 return 0 so prints No
    printf("Yes");
}
else{
    printf("No");
}
return 0;
}