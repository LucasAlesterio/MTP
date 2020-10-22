#include <stdio.h>

int main(){
	int M[30][30],j,i,soma=0,n=0;
	printf("Digite a ordem da matriz:");
	scanf("%d",&n);
	printf("\n%d\n",n);
    for(i=0;i<n;i++){
    	for(j=0;j<n;j++){
    		printf("Digite o termo %d %d da matriz:",i+1,j+1);
    		scanf("%d",&M[i][j]);
    		if(i==j){
    			soma=M[i][i]+soma;
			}
			}}
	printf("Soma da diagonal principal e: %d",soma);
	return 0;
}
