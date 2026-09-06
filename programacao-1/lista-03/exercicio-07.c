#include <stdio.h>

int main()
{

    int N, R;

    scanf("%d", &N);
    R = 1;

    while(R < N){
         R = R * 2;
        //printf("%d\n", R);
    }

    /*for (int i = 2; i < N; i++){
        R = R * 2;
    }*/

    printf("%d\n", R);

    return 0;
}