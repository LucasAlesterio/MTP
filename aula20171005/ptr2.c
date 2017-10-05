#include <stdio.h>
#include <stdlib.h>

int main(){
    int vetor[] = {0,1,2,4,8,16,1025};
    unsigned char * ponteiro; //aponta para bytes
    int nbytes = sizeof(vetor);
    int i, cont = 0;
    printf("End. inicial de vetor: %p\n",vetor);
    for(i = 0, ponteiro = (unsigned char *) vetor; i < nbytes ; i++){
        if (!ponteiro[i]) cont++; 
        printf("End.: %p, dado: %d, %X\n", ponteiro+i, *(ponteiro+i), ponteiro[i]);
    }
    printf("\nDe %d Bytes, %d estao com 0x00. \n", nbytes, cont);
    return 0;
}
