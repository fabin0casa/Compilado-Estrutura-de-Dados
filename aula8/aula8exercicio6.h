#include <stdio.h>
#include <stdlib.h>

Lista intervalo(int);

int aula8exercicio6(void) {
   	system(CLEAR);
	l();
	printc("AULA 8 - EXERCICIO 6");
	l();
	printc("Programa para criacao de lista contendo um intervalo.");
	l();
	
	int n = 0;
	
	do {
		puts("Insira o tamanho da lista de 1 ate n");
		n = scann();
		fflush(stdin);
	}
	while (n <= 0);
	
	Lista A = intervalo(n);
	exibeLista(A);
	
	l();
    PAUSE;
    system(CLEAR);
	return 0;
   
}

Lista intervalo(int n){
    Lista L = NULL;
    for (int i = n; i > 0; i--) {
        L = criaNo(i, L);
    }
    return L;
}

