#include<stdio.h>
#include<stdlib.h>
int main(void){
FILE*arq;
arq=fopen("empresas.txt","w");
if(arq==NULL){
	printf("erro");
	exit(0);
}
char empresa[50],prod[50];
float valor,desc;
int c=1;
while(c!=0){
	printf("nome da empresa: \n");
	scanf("%s",empresa);
	fprintf(arq,"empresa: %s\n",empresa);
	
	printf("nome do produto: \n");
	scanf("%s",prod);
	fprintf(arq,"produto: %s\n",prod);
	
	printf("valor do produto: \n");
	scanf("%f",&valor);
	fprintf(arq,"valor:\n %f",valor);
	
	printf("desconto: \n");
	scanf("%f",&desc);
	fprintf(arq,"\t\t desconto:\n\t\t\t\t %f\n",desc);
	
	
	printf("digite 0 para sair\n");
	scanf("%d",&c);
}

fclose(arq);
return 0;
}

