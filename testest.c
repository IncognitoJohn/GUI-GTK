//
// Created by CRYPTNITORIAN on 12/02/2026.
//
#include <stdio.h>
int main()
{
    int even=0;
    int odd=0;
    int evencount=0;
    int oddcount=0;
    for (int i=1;i<=100;i++) {
        if (i%2==0){

            even=even+i;
            evencount++;

    }
        else {

            odd=odd+i;
            oddcount++;

        }
    }
    float evenavg = (float) even / evencount;
    float oddavg = (float) odd / oddcount;
    printf("even sum are:%d \n",even);

    printf("odd sum are:%d \n",odd);

    printf("even sum avg are:%.5f \n",evenavg);

    printf("odd sum avg are:%.5f \n",oddavg);
    printf("sum of even and odd avg is : %f",evenavg+oddavg);
return 0;
}