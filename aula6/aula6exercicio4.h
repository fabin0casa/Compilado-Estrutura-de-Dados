#include <stdio.h>

float harmonica(int n) {
    if(n == 1) 
        return 1;
        
    return harmonica(n-1) + 1.0/n;
}

int aula6exercicio4(void) {
	system(CLEAR);
	l();
	printc("AULA 6 - EXERCICIO 4");
	l();
	printc("Exercicio para calcular a harmonica de um numero.");
	printc("A harmonica eh definida como a razao entre o numero");
	printc("de elementos e a soma do inverso desses elementos");
	printc("o numero de elementos e a soma do inverso desses elementos.");
	l();
	
    int n;
    printf("Digite um numero para saber sua harmocia: ");
    do{
    	n = scann();
    	if (n <= 0)
    		printf("Digite um valor positivo!");
	}while(n <= 0);
    printf("Harmonica = %.2f\n",harmonica(n));
    
	l();
    PAUSE;
    system(CLEAR);
    return 0;
}
