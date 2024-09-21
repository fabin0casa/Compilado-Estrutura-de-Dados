#include <stdio.h>

int aula2exercicio5() {
	system(CLEAR);
	l();
	printc("AULA 2 - EXERCICIO 5");
	l();
	printc("Programa para empilhar 3 strings e desempilhar");
	printc("na ordem contraria, o codigo apresta um erro e");
	printc("ira desempilhar a ultima palavra 3 vezes.");
	l();
		
	printf("Insira os valores:\n");
	
	Pilha pilhaA = pilha(5);
	char string[11];
	for(int i = 1; i <= 3; i++) {
		
		printf("-");
		getLine(string, sizeof(string));
		empilha(string, pilhaA);

	}
	
	printf("\nDesempilhou:\n");
	while( !pilhaEstaVazia(pilhaA) ){
		puts(desempilha(pilhaA));
	}
	
	l();
    PAUSE;
    system(CLEAR);
	return 0;
}



