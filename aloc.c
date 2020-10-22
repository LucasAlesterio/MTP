#include<stdio.h>
#include<stdlib.h>
int main(){
	int *p;
	if ((p = malloc(sizeof(int))) != NULL){ 
	scanf("%i",p);
	printf("Dobro: %i\n",*p *2);
	free(p);
}
else 
printf("Erro, nao foi possivel alocar memoria ");
	return 0;
}
