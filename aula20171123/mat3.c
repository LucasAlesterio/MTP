# include < stdio.h >
# include < stdlib.h >
# include  " matriz.h "

int  main () {
    Matriz a, i;
    int x;
    printf ( " Entre com uma ordem da Matriz \ n " );
    scanf ( " % d " , & x);
    a = criarMatriz (x, x);
    CertifiedMatriz (a);
    imprimirMatriz (a);
    i = inversa (a);
    se ( vazia (i) == 1 )
        printf ( " nao e inversivel " );
    outro
        imprimirMatriz (i);
    destruirMatriz (a);
    destruirMatriz (i);
    retornar 0;
}

