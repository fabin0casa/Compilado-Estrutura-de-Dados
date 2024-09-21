#include <stdio.h>
 
int aula2exercicio2(){
    system(CLEAR);
	l();
	printc("AULA 2 - EXERCICIO 2");
	l();
	printc("Programa para ordenar N numeros ");
	printc("em ordem decrescente e sem repeticoes.");
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
		
		if (topo(pilhaA) < numero){
			empilha(numero, pilhaA);
			continue;	
		}
		
		//Se chegou ate aqui, hora de empilhar e desempilhar bastante!!	
		while (numero < topo(pilhaA)){
		
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
	
	//Ele desempilha a pilhaA aqui, nao empilhando de volta os numeros repetidos
	while (!pilhaEstaVazia(pilhaA)){
		int n = desempilha(pilhaA);
		
		if(pilhaEstaVazia(pilhaA)){
			empilha(n, pilhaB);
			break;
		}
		
		if (n != topo(pilhaA)){
			empilha(n, pilhaB);
		}
	}
	
	while(!pilhaEstaVazia(pilhaB)){
		empilha(desempilha(pilhaB), pilhaA);
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

