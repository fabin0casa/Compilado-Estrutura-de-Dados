#include <stdio.h>

int aula11exercicio2(void) {
	system(CLEAR);
	l();
	printc("AULA 11 - EXERCICIO 2");
	l();
	printc("Programa para testar as funcionalidades de");
	printc("dicionarios.");
	l();
	Dic D = criaDic(5);
	
	insereDic(59, "Bia", D);
	insereDic(48, "Eva", D);
	insereDic(25, "Ivo", D);
	insereDic(17, "Ana", D);
	insereDic(83, "Leo", D);
	
	exibeDic(D);

	printf("\nRemovendo Ivo...\n\n");
	removeDic(25, D);
	
	exibeDic(D);
	
	printf("\nProcurando por 17...\n");
	
	Valor w;
	
	if (contemDic(17, w, D)){
		printf("%s encontrada!!\n", w);
	} else {
		printf("%s NAO encontrada!!\n", w);
	}
	
	printf("\nDestruindo dicionario...\n");
	destroiDic(&D);
	
	l();
    PAUSE;
    system(CLEAR);
	return 0;
}



