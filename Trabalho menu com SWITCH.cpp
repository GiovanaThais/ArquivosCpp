#include <stdio.h>
#include <stdlib.h>



struct lista{
	int info;
	struct lista *prox;
};

typedef struct apostador {
	int codApost, tipoApost, qtdApost,info;
	float saldo, gasto;	
	struct apostador *prox;
}apostador;

int menu();
void listar (apostador *inicio) ;
apostador* cadastra(apostador *inicio, apostador *novo);
apostador* deleta (apostador *inicio, int codigo);
apostador* destroiLista (apostador *inicio);
void medias(apostador *inicio);
void melhores(apostador *inicio, int NumApost);
void estat(apostador *inicio);
apostador* aloca( );

	
int main(){
	apostador *inicio, *novo;
	inicio = NULL;
	int opc, cod, NumApost=1,parar=0;
	
			
 do{
 	opc = menu();
 	system("cls");
 	
switch (opc)
{
    case 1:
     
			if(NumApost<=20){
			novo = aloca();
			if(novo!=NULL)
			    inicio = cadastra(inicio, novo); NumApost++;}
		else{
 			printf("todos os 20 apostadores ja estão preenchido\n"); return NULL; }	    
			    
		
     
   break;

   case 2:
     	if(inicio!=NULL){
				printf("Digite o codigo do apostador:\n");
			    scanf("%d", &cod);
			    inicio = deleta(inicio, cod); NumApost--;
			}
		    else
		       printf("A lista esta vazia!\n");
		   system("pause");
   break;

	case 3:
     medias(inicio);
	       system("pause");
   break;
   
   case 4:
     melhores(inicio, NumApost);
	       system("pause");	
   break;
   
   case 5:
      estat(inicio);
	       system("pause");
   break;
   
   case 6:
   	 	if(inicio!=NULL){
				printf("A lista contem:\n");
				listar(inicio);
			}
		    else
		       printf("A lista esta vazia!\n");
		   system("pause");
	break;	
   
   case 7:
     printf("O programa esta sendo encerrado!");
			printf("ATENCAO, os seus dados NAO serao armazenados permanentemente!\n");
			destroiLista(inicio); parar=1; system("pause");
     break;
    
   
   default:
    printf(" \n opcao invalida \n");
    } 
	printf("\n");system("cls"); 
	}while(parar!=1);
}

int menu(){
	int opc;
	system("cls");
	printf("\t******MENU DE OPCOES******\n");
	printf("\t 1 - Cadastrar;\n");
	printf("\t 2 - Deletar Apostador;\n");
	printf("\t 3 - imprimir medias de saldo e gasto;\n");
	printf("\t 4 - Melhores Apostadores;\n");
	printf("\t 5 - estatisticas;\n");
	printf("\t 6 - Imprimir dados de apostadores cadastrados;\n");
	printf("\t 7 - Sair do programa;\n");
	printf("\t Digite a opcao escolhida:\n\t");
	scanf("%d", &opc);
	
	return opc;
}

apostador* aloca( ){
	apostador* apost;
	apost=(apostador*) malloc(sizeof(apostador));
	if(apost!=NULL){
		 
 printf("insira o codigo do apostador (int):");
 scanf("%d", &apost->codApost);
 printf("insira o saldo do apostador (float):");
 scanf("%f", &apost->saldo);
 printf("insira quanto o apostador ja gastou (float):");
 scanf("%f", &apost->gasto);
 printf("insira o tipo do apostador(1-Carta, 2-caca-niquel, 3-cassino):");
 scanf("%d", &apost->tipoApost);
 printf("digite quantas apostas foram feitas (int):");
 scanf("%d", &apost->qtdApost);
		
		apost->prox=NULL;
		return apost;
		
	} 
	else{
		printf("erro de alocacao!\n");
		return NULL;
	}	


}
	
void listar (apostador *inicio) {  
	 apostador *aux;
	  int i=1;
	
	aux=inicio; 
	while(aux!=NULL){
		printf("**apostador %d**\n", i);
		printf("Codigo: %d\n", aux->codApost);
	    printf("tipo: %d\n", aux->tipoApost);
	    printf("quantidade de apostas: %d\n", aux->qtdApost);
	    printf("tipo: %d\n", aux->tipoApost);
	    printf("Saldo disponivel: %.2f\n", aux->saldo);
	    printf("Total Gasto: %.2f\n\n", aux->gasto);
		aux=aux->prox;
		i++;
	} 		
}

 apostador * cadastra(apostador *inicio, apostador *novo){
    apostador *aux=inicio;
	if (inicio!=NULL){
		while(aux->prox !=NULL){
		   aux=aux->prox; //encontra o ultimo
		   }
		aux->prox = novo; //insere no final
		novo->prox=NULL;//garante o novo final de lista
	}
	else
	   inicio = novo; //caso seja o primeiro no da lista
	   
	return inicio;
}

apostador* deleta (apostador *inicio, int codigo){
   apostador *aux, *ant;
   ant = NULL;
   aux = inicio;
	while (aux!=NULL){
		if(aux->codApost==codigo)
		   break;
		else{
			ant=aux;
		    aux=aux->prox;
		}
	}
	if(aux==NULL){
		printf("Apostador nao cadastrado\n");
		return inicio;
	}


	if (ant==NULL){/* Achou */ 
	/* retira elemento do início */
		inicio=aux->prox;
		}
	else {
	/* retira elemento do meio */
		ant->prox=aux->prox; 
		}
	free(aux);
	printf("Apostador deletado com sucesso!\n");
	return inicio;
}

apostador * destroiLista (apostador *inicio){
	apostador *aux=inicio, *atual;
	while (aux!=NULL){
		atual=aux;  /*salva o que será desalocado*/
		aux = aux->prox; /*guarda referência p/ o próximo*/
		free(atual); /* libera a memória do nó desvinculado*/
	}
    return NULL;
}

void medias(apostador *inicio){
 	
 	apostador *aux;
	  int i=0;
	  float somaSaldo=0,somaGasto=0,mediaSaldo,mediaGasto;
	
	aux=inicio; 
	while(aux!=NULL){
		somaSaldo=somaSaldo + aux->saldo;
		somaGasto=somaGasto + aux->gasto;
		aux=aux->prox;
		i++;
 	} 
	 mediaSaldo=somaSaldo/i;
	 mediaGasto=somaGasto/i;
	 
	 printf(" media de saldo por apostador: %.2f \n  media de gasto por apostador: %.2f \n", mediaSaldo, mediaGasto);
	 
	 
	 
	 }
	 
	 

	  void melhores(apostador *inicio, int NumApost){
	  int flag=0,i=0,j, vetCod[NumApost], vetTipo[NumApost],temp;
	 apostador *aux;
	 float vetGast[NumApost],temp2;
    
		aux=inicio; 
	
	while(aux!=NULL){
		 vetGast[i]=aux->gasto;
		 vetCod[i]=aux->codApost;
		 vetTipo[i]=aux->tipoApost;
		aux=aux->prox;
		i++;
 	} 
 	
 	
	 for(j=NumApost-1; j>=1; j--){
		for(i=0; i<j; i++){
			if(vetGast[i]>vetGast[i+1]){
				    temp2=vetGast[i];
                    vetGast[i]=vetGast[i+1];
                    vetGast[i+1]=temp2;
                    
                    temp=vetCod[i];
                    vetCod[i]=vetCod[i+1];
                    vetCod[i+1]=temp;
                    
                    temp=vetTipo[i];
                    vetTipo[i]=vetTipo[i+1];
                    vetTipo[i+1]=temp;       
            }
        } 
    }

    
    printf("Codigo \t tipo \t gastou\n");
    
	  for(j=NumApost-1; j>=1 ; j--){ 
      	printf("%d \t %d \t %.2f\n", vetCod[j], vetTipo[j], vetGast[j]);
      flag++;
	  if(flag==10)
	   break;}
    
    
	 
	 }


	void estat(apostador *inicio){
 	
 	  apostador *aux;
	  int i=0,cartas=0,caca=0, cassino=0;
	  float somaCarta=0,somaCaca=0,somaCassino=0;
	
	aux=inicio; 
	while(aux!=NULL){
		if(aux->tipoApost==1){
		cartas=cartas+aux->tipoApost; somaCarta=somaCarta+aux->gasto;}
		
		if(aux->tipoApost==2){
		caca=caca+aux->tipoApost; somaCaca=somaCaca+aux->gasto;}
		
		if(aux->tipoApost==3){
		cassino=cassino+aux->tipoApost; somaCassino=somaCassino+aux->gasto;}
 	     aux=aux->prox; } 
	 
	 printf("\t\t Cartas \t caca-niquel\t cassino\n");
	 printf(" apostadores:\t %d \t\t %d \t\t %d \n", cartas, caca, cassino);
	 printf(" total gasto:\t %.2f \t\t %.2f \t\t %.2f \n", somaCarta, somaCaca, somaCassino);
	 
	 
	 
	 }
