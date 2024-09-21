#include <stdio.h>

int aula4exercicio2(void) {
	system(CLEAR);
	l();
	printc("AULA 4 - EXERCICIO 2");
	l();
	printc("Programa que printa os 4 proximos caracteres do  ");
	printc("padrao ascii do C, a partir de um input.");
	l();
	
	Fila F = fila(5);
	
	char letra;
	printf("Insira uma letra: ");
	scanf("%c", &letra);
	
	for(int i=0; i<=3; i++) 
		enfileira(letra+i,F);
	
	while(!filaEstaVazia(F)) 
		printf("%c\n",desenfileira(F));
	
	destroiFila(&F);   
	l();
    PAUSE;
	system(CLEAR);
	return 0;
}
