#include <stdio.h>
#include <stdlib.h>

int pertence(int, Lista);

int aula8exercicio10(void) {
   system(CLEAR);
	l();
	printc("AULA 8 - EXERCICIO 10");
	l();
	printc("Programa que verifica se um item pertence a Lista.");
	l();
   
   Lista A = criaNo(3,criaNo(1,criaNo(5, criaNo(9, NULL))));
   exibeLista(A);
   
   int valor = 0;
   printf("Insira um numero para procurar na lista: ");
   valor = scann();
   fflush(stdin);
   
   
   if (pertence(valor, A)){
   		printf("\n\nO valor %i foi encontrado!!", valor);
   } else {
   		printf("\n\nO valor nao %i foi encontrado!!", valor);
   }
   
   	l();
    PAUSE;
    system(CLEAR);
   return 0;
   
}

int pertence(int valor, Lista L){
	
	int valorPertence = 0;
	
	while(L) {
        
        if (valor == L->valor){
        	valorPertence = 1;
			break;
        }
        
        L = L->proximo;
    }
    
    return valorPertence;

}
