#include <stdio.h>
#include "aula8exercicio1.h"
#include "aula8exercicio2.h"
#include "aula8exercicio3.h"
#include "aula8exercicio4.h"
#include "aula8exercicio5.h"
#include "aula8exercicio6.h"
#include "aula8exercicio7.h"
#include "aula8exercicio8.h"
#include "aula8exercicio9.h"
#include "aula8exercicio10.h"
#include "aula8exercicio11.h"
#include "aula8exercicio12.h"
#include "aula8exercicio13.h"
#include "aula8exercicio14.h"
#include "aula8exercicio15.h"
#include "aula8exercicio16.h"
#include "aula8exercicio17.h"
#include "aula8exercicio18.h"
#include "aula8exercicio19.h"
#include "aula8exercicio20.h"
#include "aula8exercicio21.h"
#include "aula8exercicio22.h"
#include "aula8exercicio23.h"
#include "aula8exercicio24.h"
void submenu8() {
	system(CLEAR);
	setTextColor(3);
	while(1) {
	    l();
		printSubMenu();
	    l();
	    printc("--LISTAS ENCADEADAS--");
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
		printf("     16) Exercicio 16\n");
		printf("     17) Exercicio 17\n");
		printf("     18) Exercicio 18\n");
		printf("     19) Exercicio 19\n");
		printf("     20) Exercicio 20\n");
		printf("     21) Exercicio 21\n");
		printf("     22) Exercicio 22\n");
		printf("     23) Exercicio 23\n");
		printf("     24) Exercicio 24\n");
		printf("      0) Voltar\n");
		l();
		int opcao = 0;
		opcao = lerInteiro();
		l();
		switch (opcao) {
			case 0: system(CLEAR); setTextColor(15); return;
			case 1: aula8exercicio1(); break;
			case 2: aula8exercicio2(); break;
			case 3: aula8exercicio3(); break;
			case 4: aula8exercicio4(); break;
			case 5: aula8exercicio5(); break;
			case 6: aula8exercicio6(); break;
			case 7: aula8exercicio7(); break;
			case 8: aula8exercicio8(); break;
			case 9: aula8exercicio9(); break;
			case 10: aula8exercicio10(); break;
			case 11: aula8exercicio11(); break;
			case 12: aula8exercicio12(); break;
			case 13: aula8exercicio13(); break;
			case 14: aula8exercicio14(); break;
			case 15: aula8exercicio15(); break;
			case 16: aula8exercicio16(); break;
			case 17: aula8exercicio17(); break;
			case 18: aula8exercicio18(); break;
			case 19: aula8exercicio19(); break;
			case 20: aula8exercicio20(); break;
			case 21: aula8exercicio21(); break;
			case 22: aula8exercicio22(); break;
			case 23: aula8exercicio23(); break;
			case 24: aula8exercicio24(); break;
			default: 
				system(CLEAR);
				printc("opcao invalida!!");
				break;
		}
	}
    return;
}
