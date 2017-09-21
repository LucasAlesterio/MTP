#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <limits.h>
#include <stdio.h>
#include <string.h>
void safeFlush(){
	char c;
	while((c=getchar()) != EOF && c!= '\n');
}
int main(){
	int i,cont=0;
	char f[255];
	safeFlush;
	printf("Digite uma frase:\n ");
	fgets(f,255,stdin);
	for(i=0;i<strlen(f);i++){
		if(isalpha(f[i])){
			cont++;
		}
		
	}
	
	printf("%d",cont);
	return 0;
	
}
