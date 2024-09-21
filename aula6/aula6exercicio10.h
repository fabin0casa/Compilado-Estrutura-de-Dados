#include <stdio.h>

int produto(int, int);

int aula6exercicio10()
{
	system(CLEAR);
	l();
	printc("AULA 6 - EXERCICIO 10");
	l();
	printc("Programa que calcula o produto de um numero por outro.");
	l();
    int numero=0, multiplicador;
    printf("\ninsira um numero: ");
    numero = scann();

    printf("\ninsira um multiplicador: ");
    multiplicador = scann();
    
    printf("a multiplicacao eh: %i\n", produto(numero, multiplicador));
    
	l();
    PAUSE;
    system(CLEAR);
    return 0;
}


int produto(int numero, int multiplicador) {
    // Caso o multiplicador seja negativo, invertemos ambos os números
    if (multiplicador < 0)
        return -produto(numero, -multiplicador);

    // Caso base
    if (multiplicador == 0)
        return 0;
    
    if (multiplicador == 1)
        return numero;

    // Recursão
    return numero + produto(numero, multiplicador - 1);
}

