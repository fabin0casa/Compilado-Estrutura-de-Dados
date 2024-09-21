#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int aula1exercicio6(void) {
	system(CLEAR);
	l();
	printc("AULA 1 - EXERCICIO 6");
	l();
	printc("Programa que gera um numero aleatorio, ");
	printc("e pede para que voce acerte ele.");
	l();
	
    srand(time(NULL));
    int chute, n = rand()%7 + 1;
    
    do 
    {
        printf("Chute entre 1 e 7: ");
        chute = scann();
        if( chute < n ) puts("Baixo!");
        else if( chute > n ) puts("Alto!");
    } 
    while( n != chute );
    
    puts("Acertou!");
    
    l();
    PAUSE;
    system(CLEAR);
    return 0;
}
