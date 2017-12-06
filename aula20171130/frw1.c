#include <stdio.h>
void insere(){
system("cls");
FILE * arquivo;
arquivo = fopen("info.txt", "w");
int idade;
char nome[356];
float altura;
printf("Insira o nome, a idade e a altura(em m):");
fgets(nome,356, stdin);
fscanf(stdin,"%d", &idade);
fscanf(stdin,"%f", &altura);
fprintf(arquivo,"%s\t%d\t%f",nome,idade,altura);
fclose(arquivo);
system("pause");
}
void le(){
FILE * arquivo;
arquivo = fopen("info.txt", "r");
int idade;
char nome[356];
float altura;
fscanf(arquivo,"%s\t%d\t%f",nome,&idade,&altura);
fclose(arquivo);
fprintf(stdout,"%s    ",nome);
fprintf (stdout, "%d    ",idade);
fprintf(stdout, "%.2f\n",altura);
system("pause");
}

int main(){
int op=0;

do{
printf("Insira 1 para inserir o texto, 2 para ler, e 3 para sair:");
scanf("%d", &op);
switch (op){
case 1:{
insere();
break;
}

case 2:{
    le();
break;
}


}
}while(op!=3);
return 0; 
}
