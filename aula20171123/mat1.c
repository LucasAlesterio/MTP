# include <stdio.h>
# include <stdlib.h>
# include "matriz.h"

int  main () {
    Matriz a, adjunta;
    int ordem;
    printf ( " Entre com uma ordem da Matriz \ n " );
    scanf ( " % d " , & ordem);
    a = criarMatriz (ordem, ordem);
    CertifiedMatriz (a);
    printf ( " Original: \ n " );
    imprimirMatriz (a);
    adjunta = adjunta (a);
    printf ( " adjunta: \ n " );
    imprimirMatriz (adjunta);
    destruirMatriz (a);
    destruirMatriz (adjunta);
    retornar 0;
}
