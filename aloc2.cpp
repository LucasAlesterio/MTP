#include<stdio.h>
#include<stdlib.h>

int main(){
	int i,N, *p ;
	float media = 0;
	printf("Digite a quantidade de valores:");
	scanf("%d",&N);
	p = malloc(N*sizeof(int));
	if(p != NULL){
		/*v[0]=10;//*v =10;
		v[1]=5;//(*v +1 ) =5;
		v[2]=9;//(*v +2 ) =9;*/
		
		for(i =0;i<N ; i++){
			printf("p=[%i] = ",i);
			scanf("%i",&p[i]);
			media=media + p [i];
		}
		media = media/N; 
		printf("media: $f\n:",media);
	}
	else
	printf("Erro, nao foi possivel alocar memoria");
	
return 0;	
}
