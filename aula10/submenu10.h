#include <stdio.h>
#include "aula10exercicio1.h"
#include "aula10exercicio2.h"
#include "aula10exercicio3.h"
#include "aula10exercicio4.h"
#include "aula10exercicio5.h"
#include "aula10exercicio6.h"
#include "aula10exercicio7.h"
#include "aula10exercicio8.h"
#include "aula10exercicio9.h"
#include "aula10exercicio10.h"
void submenu10() {
	system(CLEAR);
	setTextColor(1);
	while(1) {
	    l();
		printSubMenu();
	    l();
	    printc("--MAPEAMENTOS--");
	    printf("\n");
		printc("Selecione o exercicio a ser executado:");
	    l();
		printf("      1) Exercicio 1\n");
		printf("      2) Exercicio 2\n");
		printf("      3) Exercicio 3\n");
		printf("      4) Exercicio 4\n");
		printf("      5) Exercicio 5\n");
		printf("      6) Exercicio 6\n");
		printf("      7) Exercicio 7\n");
		printf("      8) Exercicio 8\n");
		printf("      9) Exercicio 9\n");
		printf("     10) Exercicio 10\n");
		printf("      0) Voltar\n");
		l();
		int opcao = 0;
		opcao = lerInteiro();
		l();
		switch (opcao) {
			case 0: system(CLEAR); setTextColor(15); return;
			case 1: aula10exercicio1(); break;
			case 2: aula10exercicio2(); break;
			case 3: aula10exercicio3(); break;
			case 4: aula10exercicio4(); break;
			case 5: aula10exercicio5(); break;
			case 6: aula10exercicio6(); break;
			case 7: aula10exercicio7(); break;
			case 8: aula10exercicio8(); break;
			case 9: aula10exercicio9(); break;
			case 10: aula10exercicio10(); break;
			default: 
				system(CLEAR);
				printc("opcao invalida!!");
				break;
		}
	}
    return;
}
