#include <stdio.h>

int aula11exercicio1(void) {
	system(CLEAR);
	l();
	printc("AULA 11 - EXERCICIO 1");
	l();
	printc("Programa para testar a criacao de dicionarios.");
	l();
	
	Dic D = criaDic(5);
	
	insereDic(59, "Bia", D);
	insereDic(48, "Eva", D);
	insereDic(25, "Ivo", D);
	insereDic(17, "Ana", D);
	insereDic(83, "Leo", D);
	
	exibeDic(D);
	
	l();
    PAUSE;
    system(CLEAR);
	return 0;
}
