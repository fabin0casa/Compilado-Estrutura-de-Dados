#include <stdio.h>
#include <stdlib.h>

Lista intervaloEx12(int, int);

int aula8exercicio12(void) {
    system(CLEAR);
	l();
	printc("AULA 8 - EXERCICIO 12");
	l();
	printc("Programa que mostra uma Lista com intervalo.");
	l();
   
   int primeiro = 0, ultimo = 0;
   
   printf("Insira o comeco do intervalo: ");
   primeiro = scann();
   fflush(stdin);
   
   printf("Insira o final do intervalo: ");
   ultimo = scann();
   fflush(stdin);
   
   Lista A = intervaloEx12(primeiro, ultimo);
   
   printf("\n");
   exibeLista(A);
    l();
    PAUSE;
    system(CLEAR);
   return 0;
   
}

Lista intervaloEx12(int primeiro, int ultimo){
	
	Lista L = NULL;
	
	if (primeiro > ultimo){
		printf("Lista impossivel!");
		return L;
	}
	
	for (int i = ultimo; i >= primeiro; i--){
		L = criaNo(i, L);
	}

    return L;

}
