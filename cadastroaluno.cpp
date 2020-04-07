#include<stdio.h>
#include<stdlib.h>
int main(void){
FILE*arq;
arq=fopen("cadastroAluno.txt","w");
if(arq==NULL){
	printf("erro");
	exit(0);
}
char nome[50],pais[50];
int idd,tel,serie,c=1;
while(c!=0){
	printf("informe o nome do aluno\n");
	scanf("%s",nome);
	fprintf(arq,"nome do aluno %s\n",nome);
	
	printf("informe o nome do responsavel\n");
	scanf("%s",pais);
	fprintf(arq,"responsavel %s\n",pais);
	
	printf("infome a idade do aluno\n");
	scanf("%d",&idd);
	fprintf(arq,"idade do aluno %d\n",idd);
	
	printf("infome o telefone do responsavel\n");
	scanf("%d",&tel);
	fprintf(arq,"telefone para contato %d\n",tel);
	
	printf("infome a serie do aluno\n");
	scanf("%d",&serie);
	fprintf(arq,"serie do aluno %d\n",serie); getchar();
	
	printf("digite 0 para sair\n");
	scanf("%d",&c);
}
fclose(arq);
arq=fopen("cadastroAluno.txt","r");
if(arq==NULL){
	printf("error");
	exit(0);
}
while(fgets(nome,50,arq)!=NULL){
	fgets(pais,50,arq);
	fscanf(arq,"%d",&idd);
	fscanf(arq,"%d",&tel);
	fscanf(arq,"%d",&serie);
	
	printf("nome do aluno %s\n",nome);
	printf("responsavel %s\n",pais);
	printf("idade do aluno %d\n",idd);
	printf("telefone para contato %d\n",tel);
	printf("serie do aluno %d",serie);
}
fclose(arq);
return 0;
}

