#include <stdio.h>
#define N 16 
int main(){
    char str[N];
    int * varredura = (int *) str;
    int i;
    for(i=0; i < N; i++)
        str[i] = '\0';
    printf("Entre com texto (%d carac):\n", N-1);
    fgets(str, N, stdin);
    for(i = 0; i < N/sizeof(int); i++)
       printf("\nEndereco: %p----> %X (hex)",
              varredura+i,varredura[i]);
    printf("\nCodigo:");
    for(i = 0; i < N/sizeof(int); i++) printf("%d ", varredura[i]);
    printf("\n");
    
    return 0;
}
