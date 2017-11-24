# include < stdio.h >
# include < stdlib.h >
# include  " matriz.h "

int  main () {
    Matriz a, b, c;
    int linha, c;
    printf ( " Entre com uma linha da primeira matriz \ n " );
    scanf ( " % d " , &linha);
    printf ( " Entre com uma coluna da primeira matriz \ n " );
    scanf ( " % d " , & c);
    a = criarMatriz (linha, c);
    printf ( " Entre com uma linha da matriz principal \ n " );
    scanf ( " % d " , & linha);
    printf ( " Entre com uma coluna da matriz principal \ n " );
    scanf ( " % d " , & c);
    b = criarMatriz (linha, c);
    certifiedMatriz (a);
    complerMatriz (b);
    c = multiplicaçãoMat (a, b);
    se ( vazia (c) == 1 )
        printf ( " nao e possivel multiplicar " );
    outro
        imprimirMatriz (c);
    destruirMatriz (a);
    destruirMatriz (b);
    destruirMatriz (c);
    retornar 0;
}
