#include <stdio.h>
#include <stdlib.h>

int aula12exercicio2()
{
	system(CLEAR);
	l();
	printc("AULA 12 - EXERCICIO 2");
	l();
	printc("Exercicio para testar a criacao de uma arvore.");
	l();
    
    Arv I = criaArv(criaArv(criaArv(NULL, 5, NULL), 2, criaArv(NULL, 4, NULL)), 1, criaArv(NULL, 3, NULL));
    
    printf("Exibicao da arvore:\n\n");
    exibeArv(I,0);

    l();
    PAUSE;
    system(CLEAR);
    return 0;
}
