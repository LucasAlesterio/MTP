#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    srand(time(0));
    float a;
    int i, cont = 0;
    printf("Entre com uma probabilidade: [0.0~1.0]\n");
    scanf("%f", &a);
    for (i = 0; i < 1000; i++)
        if (((float)rand()/(float)RAND_MAX) < a)
        cont++;
    printf("Contagem em 1000: %d\n", cont);
    return 0;

}
