#include <stdio.h>

int main(){
    static int i=5;
    printf("%d",i);
    if(--i){
        main(); //as the printf statement is outside the id condition the output is 54321
    }
}