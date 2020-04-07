#include<stdio.h>
#include<stdlib.h>
typedef struct func{
		char nome[120];
		int cpf,idade;	
		float sal;
		}func;
void imprimir(int _i,func *ap){
		int i;
		for(i=0;i<_i;i++){
		printf("-------------------------------------------------------------------------------------------------------------------\n");
		printf("-------------------------------------------------------------------------------------------------------------------\n\n");
		printf("Dados:\n");
		printf("Nome :%s\n",ap[i].nome);
		printf("idade: %d\n",ap[i].idade);
		printf("cpf: %d\n",ap[i].cpf);
		printf("salario: %f\n",ap[i].sal);
		system("pause");
		system("cls");	
		}
	}
func cadastrar(){
		
		printf("-------------------------------------------------------------------------------------------------------------------\n");
		printf("-------------------------------------------------------------------------------------------------------------------\n\n");
		func ap;
		printf("Digite o nome \n "); getchar;
		gets(ap[i].nome);
		printf("Digite o cpf \n ");
		scanf("%d",&ap[i].cpf);
		printf("Digite o salario\n ");
		scanf("%f",&ap.sal);
		printf("Digite a idade\n ");
		scanf("%d",&ap.idade);
		system("cls");
		
		return ap;
	}
void ordenarS(int _i,func*ap){
	int i,j,min;
	func aux;
	for(i=0;i<_i;i++){
		min=i;
		for(j=1+i;j<_i;j++){
			if(ap[i].idade<ap[min].idade){
				min=j;
			}
		} printf("%d",min);
	}
	if(i!=min){
		aux=ap[i];
		ap[i]=ap[min];
		ap[min]=aux;
	}
	for(i=0;i<_i;i++){
	printf("%d\n",ap[i].idade);
}
}
void ordenarB(int _i,func*ap){
	int i,j;
	func aux1;
	for(i=0;i<_i;i++){
		for(j=0;j<_i-1;j++){
			if(ap[j].sal>ap[j+1].sal){
				aux1=ap[j];
				ap[j]=ap[j+1];
				ap[j+1]=aux1;
			}
		}
	}
	for(i=0;i<_i;i++){
	printf("%d",&ap[i].sal);
}
}

int main(void){
func ap[10];
int _i,a;

	do{
	printf("-------------------------------------------------------------------------------------------------------------------\n");
	printf("------------------------------------------GERENCIAMENTO DE APARTAMENTOS--------------------------------------------\n");
	printf("------------------------------------------------------MENU---------------------------------------------------------\n");
	printf("1: Cadastrar um funcionario \n");
	printf("2:imprimir dados  \n");
	printf("3: Ordenar de acordo com idade\n");
	printf("4: ordenar de acordo com salario \n");
	printf("5: sair do programa \n");

	printf("-------------------------------------------------------------------------------------------------------------------\n");
	printf("-------------------------------------------------------------------------------------------------------------------\n\n");
	printf("Escolha um opcao: ");
	scanf("%d",&a);
	system("cls");
	

	switch (a)
	{
		case 1:
			ap[_i] = cadastrar();
			_i++;
			break;
					
		case 2:
			imprimir(_i,ap);
			break;
		
		case 3:
			ordenarS(_i,ap);
		    break;
		case 4:
			ordenarB(_i,ap);
			break;
		
		case 5:
			printf("Seu programa sera encerrado\n");
			system("pause");
			exit (0);
			break;

		default:
			printf("Voce digitou uma opção invalida\n");
			
			system("cls");


	}

	}while(a>0 && a<5);
	


return 0;
}


