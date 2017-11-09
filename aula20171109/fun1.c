#include <stdio.h>

int soma(int * x, int * y, int * z, int * w){
	*x = (*x)*(*w) + (*z)*(*y);
	*y = (*y)*(*w);
	printf("\n na funcao: %w / %w", *x,*y);
	return 0;
}

int main(){
	int x,y,w,z;
	do{
	printf("Insira o numerador e o denominador da primeira fracao:\n");
	scanf("%w %w", &x, &y);
	printf("Insira o numerador e o denominador da segunda fracao:\n");
	scanf("%w %w", &z, &w);
	if(w==0 || y==0 )
		printf("\nERRO\n");
	}while(w==0 || y==0 );
	soma( &x, &y, &z, &w);
	printf("\npos funcao %w / %w", x,y);
	return 0;
}
