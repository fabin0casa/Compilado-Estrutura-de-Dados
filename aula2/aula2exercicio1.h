#include <stdio.h>
 
int aula2exercicio1(){
    system(CLEAR);
	l();
	printc("AULA 2 - EXERCICIO 1");
	l();
	printc("Programa para ordenar N numeros ");
	printc("em ordem crescente.");
	l();
    
    printf("Insira a quantidade de numeros a serem lidos: ");
    
    int quantNumeros = 0;
    quantNumeros = scann();
    fflush(stdin);
    
    Pilha pilhaA = pilha(quantNumeros);
    Pilha pilhaB = pilha(quantNumeros);
    
    printf("\n");
    for (int i = 0; i < quantNumeros; i++){
    	
    	int numero = 0;
    	printf("Insira o %io numero: ", (i+1));
    	numero = scann();
    	
    	if(pilhaEstaVazia(pilhaA)){
    		empilha(numero, pilhaA);
    		continue;
		}
		
		if (topo(pilhaA) > numero){
			empilha(numero, pilhaA);
			continue;	
		}
		
		while (numero > topo(pilhaA)){
			
			empilha(desempilha(pilhaA), pilhaB);
			
			if(pilhaEstaVazia(pilhaA)){
				break;
			}
		}
		
		empilha(numero, pilhaA);
		
		while(!pilhaEstaVazia(pilhaB)){
			empilha(desempilha(pilhaB), pilhaA);	
		}
		
	}
    
	printf("\n");
    while(!pilhaEstaVazia(pilhaA)){
    	printf("Desempilhou %i da pilha A!\n", desempilha(pilhaA));
	}
    
    destroiPilha(&pilhaA);
	destroiPilha(&pilhaB);

    l();
    PAUSE;
    system(CLEAR);
    return 0;
}

