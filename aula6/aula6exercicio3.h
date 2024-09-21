#include <stdio.h>

int termial(int n) {
    if( n==0 ) 
        return 0;
    return termial(n-1) + n;
}

int aula6exercicio3(void) {
	system(CLEAR);
	l();
	printc("AULA 6 - EXERCICIO 3");
	l();
	printc("Exercicio para calcular o termial de um numero.");
	printc("O termial de um numero eh igual ao namero somado");
	printc("a todos os seus antecessores ate o numero um.");
	l();
	
    int n;
    printf("Digite um numero que queira saber o termial: ");
    n = scann();
    printf("\nTermial eh igual a: %d\n",termial(n));
    
    l();
    PAUSE;
    system(CLEAR);
    return 0;
}
