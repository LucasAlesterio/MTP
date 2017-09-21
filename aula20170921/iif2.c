#include<stdio.h>
#include<stdlib.h>
int main(){
    int n, i;
    float a, b = 0;
    double c, d = 0;
    printf("Infome um valor inteiro para o processo: ");
    scanf("%d", &n);
    a = 1.f/n;
    c = 1./n;
    for(i = 0; i < 729 ; i++){
        b += a;
        d += c;
    }
    printf("Soma float: %.15f \nSoma double: %.15f", b,d);
    return 0;
}
