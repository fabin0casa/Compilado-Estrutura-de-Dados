#include <stdio.h>

int aula11exercicio3(void) {
    system(CLEAR);
	l();
	printc("AULA 11 - EXERCICIO 3");
	l();
	printc("Programa para testar a funcionalidade de");
	printc("adicionar chave como string.");
	l();
	
    Dic D = criaDic(5);
    insereDicStr("bat", "morcego", D);
    insereDicStr("pig", "porco", D);
    insereDicStr("cat", "gato", D);
    insereDicStr("dog", "cachorro", D);
    insereDicStr("cow", "vaca", D);
    exibeDic(D);
    destroiDic(&D);
    
	l();
    PAUSE;
    system(CLEAR);
    return 0;
}
