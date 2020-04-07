#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(void){
FILE *arq1,*arq2;
	char a[100],b[100],*aux;
	int i=0,j=0;

	printf("digite o diretorio do arquivo: ");
	scanf("%s",a);
	printf("digite o nome da saida do arquivo: ");
	scanf("%s",b);	
	arq1 = fopen(a,"r");
	if(arq1 != NULL){
		char ch;
		while( (ch=fgetc(arq1)) != EOF){
			i++;
		}
	}
	fclose(arq1);
	aux=(char*)calloc(i,sizeof(char));
	arq1 = fopen(a,"r");
	if(arq1 != NULL){
		char ch;
		while( (ch=fgetc(arq1)) != EOF){
			aux[j]=ch;
			j++;
		}
	}else{
		printf("erro");
	}
	printf("%s",aux);
	arq2 = fopen(b,"w");
	if (arq2 != NULL){
		for(i=j;i>=0;i--){
			fprintf(arq2,"%c",aux[i]);
			
		}
		
	}
	printf("Arquivo criado\n");
	system("pause");
	
	
	fclose(arq2);


return 0;
}

