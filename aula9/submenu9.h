#include <stdio.h>
#include "aula9exercicio1.h"
#include "aula9exercicio2.h"
#include "aula9exercicio3.h"
#include "aula9exercicio4.h"
#include "aula9exercicio5.h"
#include "aula9exercicio6.h"
#include "aula9exercicio7.h"
#include "aula9exercicio8.h"
#include "aula9exercicio9.h"
#include "aula9exercicio10.h"
#include "aula9exercicio11.h"
#include "aula9exercicio12.h"
#include "aula9exercicio13.h"
#include "aula9exercicio14.h"
void submenu9() {
	system(CLEAR);
	setTextColor(9);
	while(1) {
	    l();
		printSubMenu();
	    l();
	    printc("--LISTAS ORDENADAS--");
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
		printf("      0) Voltar\n");
		l();
		int opcao = 0;
		opcao = lerInteiro();
		l();
		switch (opcao) {
			case 0: system(CLEAR); setTextColor(15); return;
			case 1: aula9exercicio1(); break;
			case 2: aula9exercicio2(); break;
			case 3: aula9exercicio3(); break;
			case 4: aula9exercicio4(); break;
			case 5: aula9exercicio5(); break;
			case 6: aula9exercicio6(); break;
			case 7: aula9exercicio7(); break;
			case 8: aula9exercicio8(); break;
			case 9: aula9exercicio9(); break;
			case 10: aula9exercicio10(); break;
			case 11: aula9exercicio11(); break;
			case 12: aula9exercicio12(); break;
			case 13: aula9exercicio13(); break;
			case 14: aula9exercicio14(); break;
			default: 
				system(CLEAR);
				printc("opcao invalida!!");
				break;
		}
	}
    return;
}
