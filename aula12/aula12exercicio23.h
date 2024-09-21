#include <stdio.h>
#include <stdlib.h>

Arv balanceadaEx23(int[],int,int);
void mostrar(int[], int);

int aula12exercicio23(void){
	system(CLEAR);
	l();
	printc("AULA 12 - EXERCICIO 23");
	l();
	printc("Programa que verifica se uma arvore");
	printc("eh o espelho da outra.");
	l();
	
	int vetor[] = {0,1,2,3,4,5,6};
	int tamanhoVetor = sizeof(vetor) / sizeof(int);
	
	Arv A = balanceadaEx23(vetor, 0, tamanhoVetor);
	
	printf("Exibicao do vetor:\n");
	mostrar(vetor, tamanhoVetor);
	
	printf("Exibicao da arvore A:\n");
	exibeArv(A,0);
	
	l();
    PAUSE;
    system(CLEAR);
	return 0;
}

Arv balanceadaEx23(int vetor[], int primeiro, int ultimo){
    
    if(primeiro >= ultimo){
        return NULL;
    }
    
    int meio = (primeiro + ultimo) / 2;
    
    return criaArv(balanceadaEx23(vetor, primeiro, meio), vetor[meio], balanceadaEx23(vetor, meio + 1, ultimo));

}

void mostrar(int vetor[], int tamanho){
    
    for (int i = 0; i < tamanho; i++){
        printf("[%i] ", vetor[i]);
    }
    puts("\n");
    
}

