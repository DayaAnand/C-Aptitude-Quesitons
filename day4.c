#include <stdio.h>

int main(){
    static int i=5;
    if(--i){
        main(); //main function is called recursively and value is printed
        printf("%d",i); //prints 0000 as the integer defined is static 
    }
}
