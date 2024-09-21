#include <stdio.h>
#include <ctype.h>
#include <string.h>

int aula4exercicio1(void) {
	system(CLEAR);
	l();
	printc("AULA 4 - EXERCICIO 1");
	l();
	printc("Programa que checa se uma palavra eh ou ");
	printc("nao eh um palindromo.");
	l();
	
   	char frase[256];
	printf("Digite um frase para ver se eh palindromo:\n");
   	getLine(frase, sizeof(frase));

   	Fila F = fila(strlen(frase));
   	Pilha P = pilha(strlen(frase));
   
   	for(int i=0; frase[i]; i++)
		if( isalpha(frase[i]) ) { 
         	enfileira(toupper(frase[i]),F); 
			empilha(toupper(frase[i]),P); 
   		}

 	while(!filaEstaVazia(F)){
		if(desenfileira(F)!=desempilha(P)){
			puts("\nA frase nao e palindroma");
			break;
		}

		if(filaEstaVazia(F)){
			puts("\nA frase e palindroma");
		}	
	}
   	
	destroiFila(&F);
   	destroiPilha(&P);
   	l();
    PAUSE;
    system(CLEAR);
   	return 0;
}
