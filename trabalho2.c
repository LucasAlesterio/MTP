#include <stdio.h>
#include <time.h>
#define MAX 41
#define FUNDO 0
#define PAREDE 1
#define SAIDA 2
void zerosMatriz(char M[][MAX]){
	int i,j;
	for(i=0;i<MAX;i++){
		for(j=0;j<MAX;j++){
			M[i][j]=FUNDO;
	}
	}
}
void salvaMatriz(char M[][MAX]){
	int i,j;
	FILE *arq;
			if((arq=fopen("lab.ppm","w")) != NULL){
				fprintf(arq,"P3\n%i %i\n255\n",MAX,MAX);
				for(i=0;i<MAX;i++){
		           for(j=0;j<MAX;j++){
		           	switch(M[i][j]){
		           		case FUNDO:
		           			fprintf(arq,"255 255 255 ");
		           			break;
		           		case PAREDE:
						   	fprintf(arq,"200 25 180 ");
						   	break;
						case SAIDA:
						   	fprintf(arq,"255 255 0 ");
						   	break;
					   }
			}
			fprintf(arq,"\n");
			}
			fclose(arq);
			}
			else
			printf("Erro ao abrir o arquivo");
}
int main(){
	
	char M[MAX][MAX];
	zerosMatriz(M);
	
	salvaMatriz(M);
	
}
