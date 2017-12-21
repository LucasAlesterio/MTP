#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <locale.h>
typedef struct{
char nome[300];
int idade;
char rg[20];
char cpf[20];
char usuario[100];
char senha[100];
}cadastro;
typedef struct{
float saldo;
int insere;
int retira;
float valorinserido;
float valorretirado;
 
}ext;
void criarconta(){
cadastro cliente;
char conta[300];
char nome_1[300];
ext valor;
FILE * arquivo;
printf("Insira a idade:");
scanf("%d", &cliente.idade);
if(cliente.idade>=18){
printf("\nInsira o primeiro nome:");
scanf("%s",cliente.nome);
strcpy(nome_1,cliente.nome);
strcat(nome_1,".txt");
arquivo = fopen(nome_1, "w");
printf("Insira o rg:");
scanf("%s", &cliente.rg);
printf("Insira o cpf:");
scanf("%s", &cliente.cpf);
 
printf("Insira o usuario:");
scanf("%s", &cliente.usuario);
printf("Insira a senha:");
scanf("%s", &cliente.senha);
fprintf(arquivo,"%s\t%d\t%s\t%s\t%s\t%s",cliente.nome,cliente.idade,cliente.rg, cliente.cpf, cliente.usuario, cliente.senha);
 
}
else{
printf("\nIDADE INVALIDA!\n");
system("pause");
return;
}
fclose (arquivo);
strcpy(conta, cliente.nome);
strcat(conta,"_extrato.txt");
arquivo = fopen(conta, "w");
fprintf(arquivo, "%f\t%d\t%f\t%d\t%f", 0.00, 0, 0.00, 0 , 0.00);
fclose (arquivo);
}
void mostrarconta(){
FILE * arquivo;
cadastro cliente;
char nome_1[300];
printf("\nInsira o nome para pesquisa:");
scanf("%s",cliente.nome);
strcpy(nome_1,cliente.nome);
strcat(nome_1,".txt");
arquivo = fopen(nome_1, "r");
if(arquivo==NULL){
fprintf(stderr,"\nNAO EXISTE!\n");
return;
}
fscanf(arquivo,"%s\t%d\t%s\t%s\t%s\t%s",&cliente.nome,&cliente.idade,&cliente.rg, &cliente.cpf, &cliente.usuario, &cliente.senha);
fclose(arquivo);
fprintf(stdout,"NOME: %s",cliente.nome);
fprintf (stdout, "\nIDADE: %d",cliente.idade);
fprintf(stdout, "\nRG: %s",cliente.rg);
fprintf(stdout,"\nCPF: %s",cliente.cpf);
fprintf (stdout, "\nUSUARIO: %s\n",cliente.usuario);
system("pause");
return;
}
void mostrarsaldo(){
FILE * arquivo;
cadastro cliente;
ext valor;
char conta[300];
printf("\nInsira o nome para pesquisa:");
scanf("%s",cliente.nome);
strcpy(conta, cliente.nome);
strcat(conta,"_extrato.txt");
arquivo = fopen(conta, "r");	
fscanf(arquivo,"%f",&valor.saldo);
fclose(arquivo);
printf("\nSEU SALDO E': %.2f\n",valor.saldo);
system("pause");
return;
}
void depositar(){
FILE * arquivo;
	cadastro cliente;
	ext valor;
	char conta[300];
	float grana;
	printf("\nInsira o primeiro nome para pesquisa:");
	scanf("%s",cliente.nome);
	strcpy(conta, cliente.nome);
	strcat(conta,"_extrato.txt");
	arquivo = fopen(conta, "r");
	fscanf(arquivo, "%f\t%d\t%f\t%d\t%f", &valor.saldo, &valor.insere, &valor.valorinserido, &valor.retira, &valor.valorretirado);
	fclose(arquivo);
	printf("\nDigite o valor de deposito: ");
	scanf("%f", &grana);
	valor.saldo = valor.saldo + grana;
	valor.insere=valor.insere+1;
	valor.valorinserido = valor.valorinserido + grana;
	arquivo = fopen(conta, "w");
	fprintf(arquivo, "%f\t%d\t%f\t%d\t%f", valor.saldo, valor.insere, valor.valorinserido, valor.retira, valor.valorretirado);
	fclose (arquivo);
	system("pause");
	return;
}
void sacar(){
	FILE * arquivo;
	cadastro cliente;
	ext valor;
	char conta[300];
	float grana;
	printf("\nInsira o primeiro nome para pesquisa:");
	scanf("%s",cliente.nome);
	strcpy(conta, cliente.nome);
	strcat(conta,"_extrato.txt");
	arquivo = fopen(conta, "r");
	if(arquivo==NULL){
		fprintf(stderr,"\nCliente nao cadastrado!\n");
		system("pause");
		return;
	}
	fscanf(arquivo, "%f\t%d\t%f\t%d\t%f", &valor.saldo, &valor.insere, &valor.valorinserido, &valor.retira, &valor.valorretirado);
	fclose(arquivo);
	printf("\nQual valor deseja retirar?");
	scanf("%f", &grana);
	if(grana>valor.saldo){
		printf("\nNao possui saldo suficiente, faz eco!\n");
	}
	else{
		valor.retira=valor.retira+1;
		valor.saldo = valor.saldo - grana;
		valor.valorretirado = valor.valorretirado + grana;
		arquivo = fopen(conta, "w");
		fprintf(arquivo, "%f\t%d\t%f\t%d\t%f", valor.saldo, valor.insere, valor.valorinserido, valor.retira, valor.valorretirado);
		fclose (arquivo);
	}
	
	system("pause");
	return;}
void extrato(){
	FILE * arquivo;
	cadastro cliente;
	ext valor;
	char conta[300];
	printf("\nInsira o nome para mostrar o extrato na tela:");
	scanf("%s",cliente.nome);
	strcpy(conta, cliente.nome);
	strcat(conta,"_extrato.txt");
	arquivo = fopen(conta, "r");
	if(arquivo==NULL){
		fprintf(stderr,"\nCliente nao cadastrado!\n");
		system("pause");
		return;
	}
	fscanf(arquivo, "%f\t%d\t%f\t%d\t%f", &valor.saldo, &valor.insere, &valor.valorinserido, &valor.retira, &valor.valorretirado);
	fclose(arquivo);
	printf("\nSEU SALDO E': %.2f\n",valor.saldo);
	printf("\nVoce inseriu %.2f ,%d vezes\n",valor.valorinserido,valor.insere);
	printf("\nVoce retirou %.2f ,%d vezes\n",valor.valorretirado,valor.retira);
	system("pause");
	return;
}
void removerconta(){
FILE * arquivo;
cadastro cliente;
char conta[300];
printf("\nInsira o primeiro nome para excluir a conta:");
scanf("%s",cliente.nome);
char nome_1[300];
strcpy(nome_1,cliente.nome);
strcat(nome_1,".txt");
remove(nome_1);
strcpy(conta, cliente.nome);
strcat(conta,"_extrato.txt");
remove(conta);
}




int main(){
system("color 17");
int op;
do{  
system("cls");
printf("Digite uma opcao:\n");
printf("\n1- Criar conta:");
printf("\n2- Mostrar conta:");
printf("\n3- Mostrar saldo:");
printf("\n4- Inserir dinheiro:");
printf("\n5- Retirar dinheiro:");
printf("\n6- Extrato:");
printf("\n7- Remover conta:");
printf("\n8- Sair.\n");
scanf("%d", &op);
switch(op){
case 1:
criarconta();
break;
case 2:
mostrarconta();
break;
case 3:
mostrarsaldo();
break;
case 4:
depositar();
break;
case 5:
sacar();
break;
case 6:
extrato();
break;
case 7:
removerconta();
break;
}
}while(op!=8);
return 0;
 
}

