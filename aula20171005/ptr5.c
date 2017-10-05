#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    srand(time(0));
    int vetor[1000];
    unsigned char * pont;
    int num, i, cont = 0;
    printf("Informe um numero para verificacao: 0 a 255 \n");
    scanf("%d" , &num);
    pont = (unsigned char *)vetor;
    for(i = 0;i < 1000; i++)
        vetor[i] = rand()%RAND_MAX;
    printf("Os bytes nos seguintes enderecos: \n");
    for(i = 0; i < 1000; i++)
        if(pont[i] == num){
        printf("%p => %d\n", pont+i , num);
        cont++;
        }
    printf("Esses %d bytes sao iguais a %d e estao localizados entre o endereco %p ate o endereco %p na memoria",cont, num, vetor, vetor+999);
    return 0;
}
