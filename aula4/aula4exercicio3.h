#include <stdio.h>

#define timeslice 3 // tempo máximo de uso ininterrupto de CPU

int aula4exercicio3(void) {
	system(CLEAR);
	l();
	printc("AULA 4 - EXERCICIO 3");
	l();
	printc("Programa que simula processos de um SO com filas.");
	l();
	
   	Fila F = fila(5);
	printf("Definindo processos:\n");
	printf("Processo 1, 7 segundos para concluir...\n");
	printf("Processo 2, 5 segundos para concluir...\n");
	printf("Processo 3, 9 segundos para concluir...\n");
	printf("Processo 4, 6 segundos para concluir...\n\n");
   	enfileira(17,F); // 1º processo requer 7s para concluir sua execução
   	enfileira(25,F);
   	enfileira(39,F); 
   	enfileira(46,F);
	getchar();
	while(!filaEstaVazia(F)){
		int x = desenfileira(F);

	    int p = x/10;
      	int t = x%10;

     	if(t > 3){
			enfileira(p*10+(t-timeslice),F); 
    	}else{
			printf("Processo %d concluido\n",p);
		}
   	}

  	destroiFila(&F);
  	l();
	PAUSE;
	system(CLEAR);
   	return 0;
}
