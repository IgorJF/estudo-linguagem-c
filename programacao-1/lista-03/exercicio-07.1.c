#include <stdio.h>

int main()
{

    int N, R;

    scanf("%d", &N);
    R = 1;

    do {
         R = R * 2;
        //printf("%d\n", R);
    } while(R < N);

    /*for (int i = 2; i < N; i++){
        R = R * 2;
    }*/

    printf("%d\n", R);

    return 0;
}