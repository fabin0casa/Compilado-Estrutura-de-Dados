#include <stdio.h>
#include "aula2exercicio1.h"
#include "aula2exercicio2.h"
#include "aula2exercicio3.h"
#include "aula2exercicio4.h"
#include "aula2exercicio5.h"
#include "aula2exercicio6.h"
#include "aula2exercicio3_1.h"

void submenu2() {
	system(CLEAR);
	setTextColor(12);
	while(1) {
	    l();
		printSubMenu();
	    l();
	    printc("--PILHAS--");
	    printf("\n");
		printc("Selecione o exercicio a ser executado:");
	    l();
		printf("      1) Exercicio 1\n");
		printf("      2) Exercicio 2\n");
		printf("      3) Exercicio 3\n");
		printf("      4) Exercicio 4\n");
		printf("      5) Exercicio 5\n");
		printf("      6) Exercicio 6\n");
		printf("      7) Exercicio 3.1\n");
		printf("      0) Voltar\n");
		l();
		int opcao = 0;
		opcao = lerInteiro();
		l();
		switch (opcao) {
			case 0: system(CLEAR); setTextColor(15); return;
			case 1: aula2exercicio1(); break;
			case 2: aula2exercicio2(); break;
			case 3: aula2exercicio3(); break;
			case 4: aula2exercicio4(); break;
			case 5: aula2exercicio5(); break;
			case 6: aula2exercicio6(); break;
			case 7: aula2exercicio3_1(); break;
			default: 
				system(CLEAR);
				printc("opcao invalida!!");
				break;
		}
	}
    return;
}
