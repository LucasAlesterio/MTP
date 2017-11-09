#include <stdio.h>

int soma(int * i, int * x){
    if (*x){
        (*x)--;
        return *i + soma(i + 1, x);
    }
    else
        return 0.0;
}

int main(){
    int i[] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31};
    int x = sizeof(i)/sizeof(int);
    printf("i somatoria e = %d \n", soma(i,&x));
    return 0;
}
