#include <stdio.h>
#include <stdlib.h>

int main(){
    unsigned char * pont1, * pont2, * pont3;
    int nbytes, i;
    float n1, n2, cont = 0;
    printf("Informe dois numero: \n");
    scanf("%f%f", &n1, &n2);
    cont = n1 + n2;
    pont1 = (unsigned char *) &n1;
    pont2 = (unsigned char *) &n2;
    pont3 = (unsigned char *) &cont;
    printf("Enderecos:\n Primeiro numero: 0x%p, %.2f; \n Segundo numero:  0x%p, %.2f; \n Soma dos numeros:0x%p, %.2f;", pont1, n1, pont2, n2, pont3, cont);
    return 0;
}
