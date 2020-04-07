#include<stdio.h>
#include<stdlib.h>
int main(void){
int idade,i,j,*aux,*inicio=0;
char nome[50];

for(i=0;i<=1;i++){
	printf("digite o nome\n");
	gets(aux->nome);
	printf("digite a idade\n");
	scanf("%d",&aux->idade);
}

aux=inicio;
while(aux!=NULL){
	printf("idade : %d\n",aux->idade);
	printf("nome: %s\n",aux->nome);
	aux=aux->next;
}



return 0;
}

