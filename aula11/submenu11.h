#include <stdio.h>
#include "aula11exercicio1.h"
#include "aula11exercicio2.h"
#include "aula11exercicio3.h"
#include "aula11exercicio4.h"
void submenu11() {
	system(CLEAR);
	setTextColor(5);
	while(1) {
	    l();
		printSubMenu();
	    l();
	    printc("--DICIONARIO--");
	    printf("\n");
		printc("Selecione o exercicio a ser executado:");
	    l();
		printf("      1) Exercicio 1\n");
		printf("      2) Exercicio 2\n");
		printf("      3) Exercicio 3\n");
		printf("      4) Exercicio 4\n");
		printf("      0) Voltar\n");
		l();
		int opcao = 0;
		opcao = lerInteiro();
		l();
		switch (opcao) {
			case 0: system(CLEAR); setTextColor(15); return;
			case 1: aula11exercicio1(); break;
			case 2: aula11exercicio2(); break;
			case 3: aula11exercicio3(); break;
			case 4: aula11exercicio4(); break;
			default: 
				system(CLEAR);
				printc("opcao invalida!!");
				break;
		}
	}
    return;
}
