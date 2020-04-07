#include<stdio.h>
#include<stdlib.h>
typedef struct aluno{
	int mat,idade;
	char nome[50];
	aluno*prox;
	
} aluno;
int i;
	aluno*p;
aluno*aloca(){
	aluno*novo;
	novo=(aluno*)malloc(sizeof(aluno));
	if(novo!=NULL){
		printf("digite a idade\n");
		scanf("%d",&novo->idade);
		printf("digite o nome\n"); getchar();
		gets(novo->nome);
		novo->prox=NULL;
	} else{
		printf("erro");
		return NULL;
	}
}
void insereinicio(aluno*inicio,aluno*novo){
	if(inicio!=NULL){
		novo->prox=inicio;
		inicio=novo;
	} else{
		inicio=novo;
	}
}
 void listar(aluno*inicio){
	aluno*aux;
	for(aux=inicio,aux!=NULL;aux=aux->prox){
		printf("idade %d\n",aux->idade);
		printf("matricula %d\n",aux->mat);
		printf("nome %s\n",aux->nome);
	
	}
} 
void inserefim(aluno*inicio,aluno*novo){
	if(inicio!=NULL){
		while(aux->prox!=NULL){
			aux=aux->prox;
			aux->prox=novo;
			novo->prox=NULL;
		} else{
			inicio=novo;
		}
	}
} 
void inseremeio(){
	
}
 void imprime(aluno*inicio,aluno*aux){
	for(aux=inicio;aux!=NULL;aux=aux->prox){
		printf("idade %d\n",aux->idade);
	}
} aluno* buscar(int cod,aluno*inicio){
	aluno*aux=inicio;
	while(aux!=NULL){
	if(aux->idade==cod){
		return aux;
	} else{
		aux=aux->prox;
	} return aux;
}} 
aluno* remover(int cod,aluno*inicio){
	aluno*aux=inicio;
	aluno*ant=NULL;
	while(aux!=NULL){
		if(aux->idade==cod){
			break;
		} if(aux==NULL){
			printf("nao existe na lista\n");
			return inicio;
		} if(ant==NULL){
			inicio=aux->prox;
		} else{
			ant->prox=aux->prox;
		} free(aux);
	} return inicio;
}
int main(void){
 	aluno*inicio,*novo;
	inicio=NULL;
	int opc,cod;
	while(opc!=5){
		opc=menu();
		system("cls");
	}
		if(opc==1){
			novo=aloca(aluno*inicio);
		} 
		if(opc==2){
			insereinicio(aluno*inicio);
		}
		if(opc==3){
			inseremeio(aluno*inicio);
		} 
		if(opc==4){
			inserefim(aluno*inicio);
		}
		if(opc==5){
			listar(aluno*inicio);
		}
		if(opc==6){
			buscar(aluno*inicio);
		}
		if(opc==7){
			remover(aluno*inicio);
		}

return 0;
}

