#include <stdio.h>

int main(){
	FILE *arq;
	if((arq=fopen("Lab1.pbm","w")) != NULL){
		fprintf(arq,"P1\n");
        fprintf(arq,"7 10\n");
        fprintf(arq,"0 0 0 0 0 0 0\n");
        fprintf(arq,"0 0 0 0 0 1 0\n");
        fprintf(arq,"0 0 0 0 0 1 0\n");
        fprintf(arq,"0 0 0 0 0 1 0\n");
        fprintf(arq,"0 0 0 0 0 1 0\n");
        fprintf(arq,"0 0 1 1 1 1 0\n");
        fprintf(arq,"0 1 0 0 0 1 0\n");
        fprintf(arq,"0 1 0 0 0 1 0\n");
        fprintf(arq,"0 0 1 1 1 1 0\n");
        fprintf(arq,"0 0 0 0 0 0 0\n");
		
	}
	else{
	   printf("Erro, nao foi possivel abrir o arquivo");
}
	
	return 0;
}
