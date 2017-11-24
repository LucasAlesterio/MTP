# include < stdio.h >
# include < stdlib.h >
# include  " matriz.h "

int  main () {
    Matriz A, B, I, R;
    int l;
    printf ( " Entre com uma quantidade de linhas da regressão \ n " );
    scanf ( " % d " , & l);
    A = criarMatriz (l, 3 );
    ComplerMatrizReg (A);
    B = criarMatriz (l, 1 );
    ComplerMatriz (B);
    I = InversaRet (A);
    R = multiplicaçãoMat (I, B);
    imprimirSis (R);
    destruirMatriz (A);
    destruirMatriz (B);
    destruirMatriz (I);
    destruirMatriz (R);
    retornar 0;
}
