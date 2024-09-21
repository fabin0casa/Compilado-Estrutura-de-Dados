#include <stdio.h>
#include "aula12exercicio1.h"
#include "aula12exercicio2.h"
#include "aula12exercicio3.h"
#include "aula12exercicio4.h"
#include "aula12exercicio5.h"
#include "aula12exercicio6.h"
#include "aula12exercicio7.h"
#include "aula12exercicio8.h"
#include "aula12exercicio9.h"
#include "aula12exercicio10.h"
#include "aula12exercicio11.h"
#include "aula12exercicio13.h"
#include "aula12exercicio14.h"
#include "aula12exercicio15.h"
#include "aula12exercicio16.h"
#include "aula12exercicio17.h"
#include "aula12exercicio18.h"
#include "aula12exercicio19.h"
#include "aula12exercicio20.h"
#include "aula12exercicio21.h"
#include "aula12exercicio22.h"
#include "aula12exercicio23.h"
void submenu12() {
	system(CLEAR);
	setTextColor(13);
	while(1) {
	    l();
		printSubMenu();
	    l();
	    printc("--ARVORES BINARIAS--");
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
		printf("      0) Voltar\n");
		l();
		int opcao = 0;
		opcao = lerInteiro();
		l();
		switch (opcao) {
			case 0: system(CLEAR); setTextColor(15); return;
			case 1: aula12exercicio1(); break;
			case 2: aula12exercicio2(); break;
			case 3: aula12exercicio3(); break;
			case 4: aula12exercicio4(); break;
			case 5: aula12exercicio5(); break;
			case 6: aula12exercicio6(); break;
			case 7: aula12exercicio7(); break;
			case 8: aula12exercicio8(); break;
			case 9: aula12exercicio9(); break;
			case 10: aula12exercicio10(); break;
			case 11: aula12exercicio11(); break;
			case 13: aula12exercicio13(); break;
			case 14: aula12exercicio14(); break;
			case 15: aula12exercicio15(); break;
			case 16: aula12exercicio16(); break;
			case 17: aula12exercicio17(); break;
			case 18: aula12exercicio18(); break;
			case 19: aula12exercicio19(); break;
			case 20: aula12exercicio20(); break;
			case 21: aula12exercicio21(); break;
			case 22: aula12exercicio22(); break;
			case 23: aula12exercicio23(); break;
			default: 
				system(CLEAR);
				printc("opcao invalida!!");
				break;
		}
	}
    return;
}
