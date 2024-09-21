#include <stdio.h>
#include <string.h>

int aula2exercicio6() {
	system(CLEAR);
	l();
	printc("AULA 2 - EXERCICIO 6");
	l();
	printc("Correcao do exercicio anterior.");
	l();
	
	Pilha pilhaA = pilha(5);
	char string[11];
	for(int i = 1; i <= 3; i++) {
		
		printf("-");
		getLine(string, sizeof(string));
		
		empilha(strdup(string), pilhaA);
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
