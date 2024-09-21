#include <stdio.h>
#include "aula5exercicioColoracao.h"
void submenu5() {
	system(CLEAR);
	setTextColor(2);
	while(1) {
	    l();
		printSubMenu();
	    l();
	    printc("--COLORACAO--");
	    printf("\n");
		printc("Selecione o exercicio a ser executado:");
	    l();
		printf("      1) Exercicio unico\n");
		printf("      0) Voltar\n");
		l();
		int opcao = 0;
		opcao = lerInteiro();
		l();
		switch (opcao) {
			case 0: system(CLEAR); setTextColor(15); return;
			case 1: aula5exercicioColoracao(); break;
			default: 
				system(CLEAR);
				printc("opcao invalida!!");
				break;
		}
	}
    return;
}
