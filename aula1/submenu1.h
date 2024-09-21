#include <stdio.h>
#include "aula1exercicio1.h"
#include "aula1exercicio2.h"
#include "aula1exercicio3.h"
#include "aula1exercicio4.h"
#include "aula1exercicio5.h"
#include "aula1exercicio6.h"
#include "aula1exercicio7.h"
#include "aula1exercicio8.h"
#include "aula1exercicio9.h"
#include "aula1exercicio10.h"
#include "aula1exercicio11.h"
#include "aula1exercicio12.h"
#include "aula1exercicio13.h"
#include "aula1exercicio14.h"
#include "aula1exercicio15.h"

void submenu1() {
	system(CLEAR);
	setTextColor(4);
	while(1) {
	    l();
		printSubMenu();
	    l();
	    printc("--INTRODUCAO--");
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
		printf("     11) Exercicio 11\n");
		printf("     12) Exercicio 12\n");
		printf("     13) Exercicio 13\n");
		printf("     14) Exercicio 14\n");
		printf("     15) Exercicio 15\n");
		printf("      0) Voltar\n");
		l();
		int opcao = 0;
		opcao = lerInteiro();
		l();
		switch (opcao) {
			case 0: system(CLEAR); setTextColor(15); return;
			case 1: aula1exercicio1(); break;
			case 2: aula1exercicio2(); break;
			case 3: aula1exercicio3(); break;
			case 4: aula1exercicio4(); break;
			case 5: aula1exercicio5(); break;
			case 6: aula1exercicio6(); break;
			case 7: aula1exercicio7(); break;
			case 8: aula1exercicio8(); break;
			case 9: aula1exercicio9(); break;
			case 10: aula1exercicio10(); break;
			case 11: aula1exercicio11(); break;
			case 12: aula1exercicio12(); break;
			case 13: aula1exercicio13(); break;
			case 14: aula1exercicio14(); break;
			case 15: aula1exercicio15(); break;
			default: 
				system(CLEAR);
				printc("opcao invalida!!");
				break;
		}
	}
    return;
}
