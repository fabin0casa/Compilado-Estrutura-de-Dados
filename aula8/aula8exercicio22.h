#include <stdio.h>
#include <stdlib.h>

int listaIguais(Lista, Lista);

int aula8exercicio22(void) {
    system(CLEAR);
	l();
	printc("AULA 8 - EXERCICIO 22");
	l();
	printc("Programa que retorna se duas listas sao iguais.");
	l();
   
   Lista A = criaNo(3,criaNo(1,criaNo(5, criaNo(9, NULL))));
   Lista B = criaNo(7,criaNo(35,criaNo(12, criaNo(0, NULL))));
   Lista C = criaNo(3,criaNo(1,criaNo(5, criaNo(9, NULL))));
   
   printf("A = ");
   exibeLista(A);
   
   printf("\nB = ");
   exibeLista(B);
   
   printf("\nC = ");
   exibeLista(C);
   
   printf("\n\n");
   
   if (listaIguais(A, B)){
   		printf("Listas A e B sao iguais!\n");
   } else {
   		printf("Listas A e B NAO sao iguais!\n");
   }
   
   if (listaIguais(A, C)){
   		printf("Listas A e C sao iguais!\n");
   } else {
   		printf("Listas A e C NAO sao iguais!\n");
   }
   
    l();
    PAUSE;
    system(CLEAR);
   return 0;
   
}

int listaIguais(Lista L1, Lista L2){
	
	while (L1 && L2){
		
		if (L1->valor != L2->valor){
			return 0;
		}
		
		L1 = L1->proximo;
		L2 = L2->proximo;
		
		if (L1 == NULL && L2 == NULL){
			return 1;
		}
	}
	
	return 0;
	
}
