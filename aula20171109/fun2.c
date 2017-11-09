#include <stdio.h>

int divisao(int * resto, int * quociente, int x, int y){
	*resto = x%y;
	*quociente = x/y;
	return 0;
}

int main(){
	int x,y,resto,quociente;
	printf("Insira o dividendo e o divisor:\n");
	scanf("%d %d", &x, &y);
	divisao( &resto, &quociente, x, y);
	printf("\nquociente: %d   resto: %d", quociente, resto);
	return 0;
}
