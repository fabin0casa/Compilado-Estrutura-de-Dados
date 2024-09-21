#include <stdio.h>
#include <stdlib.h>

int divisao(int, int);
int resto(int, int);

int aula6exercicio11_12()
{
	system(CLEAR);
	l();
	printc("AULA 6 - EXERCICIO 11-12");
	l();
	printc("Programa que calcula a divisao de um numero por outro.");
	printc("(11-12 porque fizemos a 11 e acabamos ja fazendo a 12)");
	l();
    //Variáveis
    int numero=0, divisor=0, contador=0;

    //Recebendo os valores
    printf("Digite o primeiro valor: ");
    numero = scann();
    printf("Digite o segundo valor: ");
    do{
    	divisor = scann();
    	if (divisor < 0)
    		printf("por favor insira um divisor positivo!\n");
	}while (divisor < 0);

	if (divisor == 0){
		printf("\nImpossivel dividir por 0!");
		l();
	    PAUSE;
	    system(CLEAR);
	    return 0;
	}
    //Mostrando o resultado da divisão
    printf("\nA divisao de %i por %i eh %i\n", numero, divisor, divisao(numero, divisor));
    printf("O resto da divisao eh %i\n", resto(numero, divisor));

    l();
    PAUSE;
    system(CLEAR);
    return 0;
}

//Função para cacular a divisão
int divisao(int numero, int divisor){
    if(divisor > numero){
        return 0;
    }

    return 1 + divisao(numero - divisor, divisor);
}

//Função para calcular o resto
int resto(int numero, int divisor){
    if(divisor > numero){
        return numero;
    }

    resto(numero - divisor, divisor);
}


