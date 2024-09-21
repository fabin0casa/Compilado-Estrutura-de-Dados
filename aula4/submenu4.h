#include <stdio.h>
#include "aula4exercicio1.h"
#include "aula4exercicio2.h"
#include "aula4exercicio3.h"
void submenu4() {
	system(CLEAR);
	setTextColor(14);
	while(1) {
	    l();
		printSubMenu();
	    l();
	    printc("--FILAS--");
	    printf("\n");
		printc("Selecione o exercicio a ser executado:");
	    l();
		printf("      1) Exercicio 1\n");
		printf("      2) Exercicio 2\n");
		printf("      3) Exercicio 3\n");
		printf("      0) Voltar\n");
		l();
		int opcao = 0;
		opcao = lerInteiro();
		l();
		switch (opcao) {
			case 0: system(CLEAR); setTextColor(15); return;
			case 1: aula4exercicio1(); break;
			case 2: aula4exercicio2(); break;
			case 3: aula4exercicio3(); break;
			default: 
				system(CLEAR);
				printc("opcao invalida!!");
				break;
		}
	}
    return;
}
