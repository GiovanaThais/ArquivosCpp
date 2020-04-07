#include <stdio.h>
#include <stdlib.h>

int main(void){
	
FILE *arq;
	char dis[50], string[50];  
	int matri, provas, sair=0,i,j;
	float **notas,*media,soma=0,smed=0, medt; 
	
	arq= fopen("notas.txt", "w");
	
	if(arq==NULL){
		printf("erro na abertura");
		exit(0); }


 do{
    	printf("insira o nome da disciplina:");
    	gets(dis); 
    	fprintf(arq,"disciplina: %s\n", dis);
    	
    	
    	printf("qtd de alunos matriculados:");
    	scanf("%d", &matri);
    	fprintf(arq,"qtd de alunos:%d\n", matri);
    	
    	printf("insira a quantidade de provas:");
    	scanf("%d", &provas);
    	fprintf(arq,"qtd de provas:%d\n", provas);
    	
    	fprintf(arq,"notas\n");
    	for(i=0; i<provas;i++){
    		fprintf(arq,"Prova(%d)\t",i+1);
		}
    	fprintf(arq,"media\t");
    	fprintf(arq,"\n");
    
	media=(float*) calloc(matri,sizeof(float));
       if(media==0){
       	printf("erro");
           exit(0); } 	
    	
    notas=(float**) calloc(matri,sizeof(float*));
       if(notas==0){
       	printf("erro");
       	exit(0);
	   }
                
           
     for(i=0;i<matri;i++){
     	notas[i]=(float*) calloc(provas,sizeof(float));
     	 if(notas[i]==0)
     	   exit(0);
	 }      
	 
	 for(i=0;i<matri;i++){
     	for(j=0;j<provas;j++){
     	 printf("insira a nota %d do aluno %d:", j+1,i+1);
		  scanf("%f", &notas[i][j] );
		  fprintf(arq,"%.2f\t\t", notas[i][j]);
		  soma=soma+notas[i][j];	
     	
	 }
	 media[i]=soma/provas;
	 fprintf(arq,"%.2f\n", media[i]);
	 soma=0;
	 }      
	 
	 for(i=0;i<matri;i++){
	 	smed=smed+media[i];
	 	medt=(smed/matri);
 	 
	  
	 }
	 fprintf(arq,"media da turma de %s: %.2f \n", dis, medt);
	 smed=0;
    	
    fprintf(arq,"*******************************************************************************\n");	
    	
    	printf("\n digite 1 para sair, 0 para continuar:");
    	scanf("%d", &sair);
    	getchar();
    		
	}while(sair!=1);

fclose(arq); 
	





printf("\n");
system("pause");
return 0;
}

