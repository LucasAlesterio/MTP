# include < stdio.h >
# include < stdlib.h >
# include  " matriz.h "

int  main () {
    Matriz a;
    int x;
    printf ( " Entre com uma ordem da Matriz \ n " );
    scanf ( " % d " , & x);
    a = criarMatriz (x, x);
    CertifiedMatriz (a);
    imprimirMatriz (a);
    printf ( " % lg \ n " , determinante (a));
    destruirMatriz (a);
    retornar 0;
}
