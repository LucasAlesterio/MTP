#include<stdio.h>
#include<stdlib.h>
void lerMatriz(float **m,int L, int C){
	int i,j;
	for (i=0;i<L;i++){
		for(j=0;j<C;j++){
			printf("m[%i][%i] = ");
			scanf("%f", &m[i][j]);
		}
	}
}

void imprimeMatriz(float **m,int L, int C){
	int i,j;
	for (i=0;i<L;i++){
		for(j=0;j<C;j++){
			printf("m[%i][%i] = ");
			printf("%5.1f\t", &m[i][j]);
		}printf("\n");
	}
}


int main(){
	int i,j,L,C;
	float**m;
	printf("Entre com os numeros de linhas e colunas:");
	scanf("%i %i",&L,&C);
	m= malloc(L*sizeof(float *));
	if("m != NULL"){
		for(i = 0;i< L;i++){
			m[i] = malloc(C*sizeof(float));
			if(m[i]== NULL){
				printf("Erro, nao foi possivel alocar memoria");
				exit(0);
			}
		}
	}
		else
	printf("Erro, nao foi possivel alocar memoria");
	return 0;
}
