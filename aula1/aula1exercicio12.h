#include <stdio.h>

void troca(int a, int b) {
    int variavelTemp = a;
    a = b;
    b = variavelTemp;
}

int aula1exercicio12(){
	system(CLEAR);
	l();
	printc("AULA 1 - EXERCICIO 12");
	l();
	printc("Exercicio que mostra a troca de variaveis usando uma funcao externa, ");
	printc("mas nao funciona porque a funcao nao recebe o endereco de memoria");
	l();
    
    int a = 90;
    int b = 7;
    printf("declaracoes iniciais:\na=90\nb=7\n\n");
    
    troca(a, b);
    
    printf("variaveis trocadas:\n");
    printf("a = %i\nb = %i", a, b);
    
	l();
    PAUSE;
    system(CLEAR);
    return 0;
}
