#include <stdio.h>
#define N 4 
int main(){
    int str[N];
    int * varredura = (int *) str;
    int i;
    for(i=0; i < N; i++)
        str[i] = '\0';
    for(i = 0; i < N; i++){
        printf("Entre com o codigo %d:\n", i+1);
    scanf("%d",&str[i]);
}
    printf("\nDado: %s",varredura);
    
    return 0;
}
