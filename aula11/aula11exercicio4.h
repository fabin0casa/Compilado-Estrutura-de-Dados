#include <stdio.h>

int aula11exercicio4(void) {
    system(CLEAR);
	l();
	printc("AULA 11 - EXERCICIO 4");
	l();
	printc("Programa para testar as funcao de");
	printc("pertinencia dos dicionarios com chave string.");
	l();
	
    Dic D = criaDic(5);
    insereDicStr("bat", "morcego", D);
    insereDicStr("pig", "porco", D);
    insereDicStr("cat", "gato", D);
    insereDicStr("dog", "cachorro", D);
    insereDicStr("cow", "vaca", D);
    exibeDic(D);
    
    printf("\nRemovendo o porco...\n\n");
	removeDicStr("pig", D);
	
	exibeDic(D);
	
	printf("\nProcurando por 'bat'...\n");
	
	char w[22];
	
	if (contemDicStr("bat", w, D)){
		printf("%s encontrado!!\n", w);
	} else {
		printf("%s NAO encontrado!!\n", w);
	}
	
    printf("\nDestruindo dicionario...\n");
    destroiDic(&D);
    
    l();
    PAUSE;
    system(CLEAR);
    return 0;
}
