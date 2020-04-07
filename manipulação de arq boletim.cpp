#include<stdio.h>
#include<stdlib.h>
int main(void){
FILE*arq;
char nome[50],materia[50],aux[10];
float n1,n2,n3;
arq=fopen("matrizes.txt","r");
if(arq==NULL){
	printf("erro");
	exit(0);
}
while(fgets(nome,50,arq)!=NULL){
	fgets(materia,50,arq);
	fgets(aux,10,arq);
	fscanf(arq,"%f %f %f",&n1,&n2,&n3);
	
	printf("Nome: %s",nome);
	printf("materia : %s",materia);
	printf("%s",aux);
	printf("notas: %f %f %f\n",n1,n2,n3);
	printf("media %f",(n1+n2+n3)/3);
}
fclose(arq);
return 0;
}

