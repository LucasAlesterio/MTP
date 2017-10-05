#include<stdio.h>
#include <stdlib.h>
int main(){
    unsigned int dado = 0xFACA8421;
    unsigned char * ponteiro;
    int i;
    printf("End.: %p; dado em decimal (unsigned): %u\n", &dado, dado);
    ponteiro = (unsigned char *) &dado;
    for (i = 0; i < sizeof(dado); i++)
        printf("End.: %p -----> %d-----> Decimal, %X -----> Hexadecimal \n", ponteiro+i, *(ponteiro+i),ponteiro[i]);
    return 0;
}
