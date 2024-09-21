#include <stdio.h>
#include <stdlib.h>

void replace(int, int, Lista);

int aula8exercicio24(void) {
    system(CLEAR);
	l();
	printc("AULA 8 - EXERCICIO 24");
	l();
	printc("Programa que troca um item da lista.");
	l();
	
	Lista A = criaNo(3,criaNo(2,criaNo(5, criaNo(9, criaNo(2, NULL)))));
	
	printf("A = ");
	exibeLista(A);

	int valorOG = 0, valorNovo = 0;
	printf("insira o valor da lista que quer trocar: ");
	valorOG = scann();
	
	printf("insira o valor novo: ");
	valorNovo = scann();
	
	
	replace(valorOG, valorNovo, A);
	
	printf("\nLista A com %is trocados por %is = ", valorOG, valorNovo);   
	exibeLista(A);
    
	l();
    PAUSE;
    system(CLEAR);
	return 0;
   
}

void replace(int valorOriginal, int valorNovo, Lista L){
		
	while (L){
		
		if (L->valor == valorOriginal){
			L->valor = valorNovo;
		}
		
		L = L->proximo;
		
	}
	
	exibeLista(L);

}
