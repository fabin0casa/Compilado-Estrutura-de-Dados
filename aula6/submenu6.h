#include <stdio.h>
#include "aula6exercicio1.h"
#include "aula6exercicio2.h"
#include "aula6exercicio3.h"
#include "aula6exercicio4.h"
#include "aula6exercicio5.h"
#include "aula6exercicio6.h"
#include "aula6exercicio7.h"
#include "aula6exercicio8.h"
#include "aula6exercicio9.h"
#include "aula6exercicio10.h"
#include "aula6exercicio11-12.h"
#include "aula6exercicio13.h"
#include "aula6exercicio14.h"
#include "aula6exercicio15.h"
#include "aula6exercicio16.h"
#include "aula6exercicio17.h"
#include "aula6exercicio18.h"

void submenu6() {
	system(CLEAR);
	setTextColor(10);
	while(1) {
	    l();
		printSubMenu();
	    l();
	    printc("--RECURSAO--");
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
		printf("     11) Exercicio 11-12\n");
		printf("     12) Exercicio 11-12\n");
		printf("     13) Exercicio 13\n");
		printf("     14) Exercicio 14\n");
		printf("     15) Exercicio 15\n");
		printf("     16) Exercicio 16\n");
		printf("     17) Exercicio 17\n");
		printf("     18) Exercicio 18\n");
		printf("      0) Voltar\n");
		l();
		int opcao = 0;
		opcao = lerInteiro();
		l();
		switch (opcao) {
			case 0: system(CLEAR); setTextColor(15); return;
			case 1: aula6exercicio1(); break;
			case 2: aula6exercicio2(); break;
			case 3: aula6exercicio3(); break;
			case 4: aula6exercicio4(); break;
			case 5: aula6exercicio5(); break;
			case 6: aula6exercicio6(); break;
			case 7: aula6exercicio7(); break;
			case 8: aula6exercicio8(); break;
			case 9: aula6exercicio9(); break;
			case 10: aula6exercicio10(); break;
			case 11: aula6exercicio11_12(); break;
			case 12: aula6exercicio11_12(); break;
			case 13: aula6exercicio13(); break;
			case 14: aula6exercicio14(); break;
			case 15: aula6exercicio15(); break;
			case 16: aula6exercicio16(); break;
			case 17: aula6exercicio17(); break;
			case 18: aula6exercicio18(); break;
			default: 
				system(CLEAR);
				printc("opcao invalida!!");
				break;
		}
	}
    return;
}
