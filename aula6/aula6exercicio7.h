#include <stdio.h>

void binario(int n) {
    if(n < 2) 
        printf("%d",n);
        
    else {
        binario(n / 2);
        printf("%d", n % 2);
    }
}

int aula6exercicio7(void) {
	system(CLEAR);
	l();
	printc("AULA 6 - EXERCICIO 7");
	l();
	printc("Programa que converte um numero decimal para binario.");
	l();
	
    int n;
    printf("Digite um numero para converter-lo em binario: ");
    n = scann();
    
    binario(n);
    printf("\n");
    
    l();
    PAUSE;
    system(CLEAR);
    return 0;
}
