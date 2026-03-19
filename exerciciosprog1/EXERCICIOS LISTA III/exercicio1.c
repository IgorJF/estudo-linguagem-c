#include <stdio.h>

int main(){
    
    int num, i;

    num = 101;

    for (i = 0; i < 100; i++) {
        if(num % 2 == 1){
            printf("%d\n", num);
        }
        num++;
    }

    return 0;
}