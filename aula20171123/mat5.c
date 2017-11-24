# include < stdio.h >
# include < stdlib.h >
# include  " matriz.h "

int  main () {
    Matriz A, I, B, R;
    int ordem;
    printf ( " Entre com uma ordem do Sistema \ n " );
    scanf ( " % d " , & ordem);
    A = criarMatriz (ordem, ordem);
    CertifiedMatriz (A);
    B = criarMatriz (ordem, 1 );
    ComplerMatriz (B);
    I = inversa (A);
    se ( vazia (I) == 1 )
        printf ( " Sistema impossivel ou indeterminado " );
    else {
        R = multiplicaçãoMat (I, B);
        imprimirSis (R);
    }
    destruirMatriz (A);
    destruirMatriz (B);
    destruirMatriz (I);
    destruirMatriz (R);
    retornar 0;
}
