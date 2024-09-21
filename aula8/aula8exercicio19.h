#include <stdio.h>
#include <stdlib.h>

Item nth(int, int, int, Lista);

int aula8exercicio19(void) {
    system(CLEAR);
	l();
	printc("AULA 8 - EXERCICIO 19");
	l();
	printc("Programa que identifica o enesimo item da lista,");
	printc("usando uma funcao recursiva.");
	l();
   
   Lista A = criaNo(3,criaNo(1,criaNo(5,criaNo(8,NULL))));
   exibeLista(A);
   
   int n = 0;
   printf("\nDigite o numero do item que quer ver da lista: ");

   do{
   		n = scann();
   		if(n < 1)
       		printf("digite um numero maior que 1!!!\n");
   }while(n < 1);
   
   printf("\no item que se deseja eh: %i", nth(n,0,0,A));
   
    l();
    PAUSE;
    system(CLEAR);
   return 0;
   
}

Item nth(int n, int i, int contador, Lista L){
    if (n == contador)
        return i;
        
    return nth(n, L->valor, ++contador, L->proximo);
}

