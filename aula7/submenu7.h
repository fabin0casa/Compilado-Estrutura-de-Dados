#include <stdio.h>
#include "aula7exercicio1.h"
#include "aula7exercicio2.h"
#include "aula7exercicio3.h"
#include "aula7exercicio4.h"
#include "aula7exercicio5.h"
#include "aula7exercicio6.h"
#include "aula7exercicio7.h"
#include "aula7exercicio8.h"
#include "aula7exercicio9.h"
#include "aula7exercicio10.h"
#include "aula7exercicio11.h"
#include "aula7exercicio12.h"
void submenu7() {
	system(CLEAR);
	setTextColor(11);
	while(1) {
	    l();
		printSubMenu();
	    l();
	    printc("--ORDENACAO--");
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
		printf("      0) Voltar\n");
		l();
		int opcao = 0;
		opcao = lerInteiro();
		l();
		switch (opcao) {
			case 0: system(CLEAR); setTextColor(15); return;
			case 1: aula7exercicio1(); break;
			case 2: aula7exercicio2(); break;
			case 3: aula7exercicio3(); break;
			case 4: aula7exercicio4(); break;
			case 5: aula7exercicio5(); break;
			case 6: aula7exercicio6(); break;
			case 7: aula7exercicio7(); break;
			case 8: aula7exercicio8(); break;
			case 9: aula7exercicio9(); break;
			case 10: aula7exercicio10(); break;
			case 11: aula7exercicio11(); break;
			case 12: aula7exercicio12(); break;
			default: 
				system(CLEAR);
				printc("opcao invalida!!");
				break;
		}
	}
    return;
}
