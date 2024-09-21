#include <stdio.h>
#include <stdlib.h>

int count(int, Lista);

int aula8exercicio23(void) {
    system(CLEAR);
	l();
	printc("AULA 8 - EXERCICIO 23");
	l();
	printc("Programa que retorna quantas vezes um numero X");
	printc("aparece na lista.");
	l();
   
   Lista A = criaNo(1,criaNo(1,criaNo(3,criaNo(8,NULL))));
   printf("lista A: ");
   exibeLista(A);
   
   int x = 0;
   printf("\n\ninsira x: ");
   x = scann();
   printf("\nx aparece %i vezes na lista", count(x,A));
   
    l();
    PAUSE;
    system(CLEAR);
   return 0;
   
}

int count(int x, Lista L) {
    if (L == NULL)
        return 0;

    if (x == L->valor)
        return count(x, L->proximo) + 1;

    return count(x, L->proximo);
}
