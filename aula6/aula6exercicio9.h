#include <stdio.h>

int par(int n) {
    if(n == 0){
        return 0;
    }
    
    if (n == 1){
        return 1;
    }
    
    n = par(n-2);
}

int aula6exercicio9(void) {
	system(CLEAR);
	l();
	printc("AULA 6 - EXERCICIO 9");
	l();
	printc("Programa que diz se um numero eh ou nao par.");
	l();
	
    int n;
    printf("Insira o numero que quer saber se eh par: ");
    n = scann();
    
    if (par(n) == 0)
        printf("Eh par!\n");
    else
        printf("Eh impar!\n");
        
    l();
    PAUSE;
    system(CLEAR);
    return 0;
}
