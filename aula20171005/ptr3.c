#include <stdio.h>
#include <stdlib.h>

int main(){
    int vetor[] = {0x0F,0xFF,0xFFFF,0xFFFFFF,0x80000001,0xFFFFFFFF};
    unsigned char * ponteiro;
    int nbytes = sizeof(vetor);
    int i, cont = 0;
    printf("End. inicial de vetor: %p\n",vetor);
    for(i = 0, ponteiro = (unsigned char *) vetor; i < nbytes ; i++){
        if (ponteiro[i]!=0)
		 cont++; 
        printf("End.: %p, dado: %d, %X\n", ponteiro+i, *(ponteiro+i), ponteiro[i]);
    }
    printf("\nDe %d Bytes, %d estao diferentes de 0x00. \n", nbytes, cont);
    return 0;
}
