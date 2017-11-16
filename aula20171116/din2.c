#include <stdio.h>
int main(){
	int **matriz;
	int i,j,l,d;
	printf("Digite a ordem da matriz,linhas e colunas 'NxM'");
	scanf("%dx%d",&l,&d);
	matriz = calloc(l,sizeof(int*));
  for(i = 0; i < l; i++) {
	matriz[i] = calloc(d,sizeof(int));}
	for(i=0;i<l;i++){
		printf("Digite os valores da linha %d\n:" ,i+1);
		for(j=0;j<d;j++){
			scanf("%d",&matriz[i][j]);
}}
imprime(matriz,l,d);
return 0;
}
int imprime(int **matriz, int N, int M) {
  int i, j;
  printf("matriz %dx%d:\n", N, M);
  for(i = 0; i < N; i++)
    for(j = 0; j < M; j++)
      printf("%d%c", matriz[j][i], (j == M-1)? '\n':'\t');
      return 0;
}
	

