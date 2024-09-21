#include<stdio.h>
#include<stdlib.h>

//Funções
int quadradoNatural(int);
int q(int, int, int);
int primosImpares(int);
int p(int, int);

int aula6exercicio13(){
    system(CLEAR);
	l();
	printc("AULA 6 - EXERCICIO 13");
	l();
	printc("Programa que calcula o quadrado de um natural.");
	l();
	//Variáveis
    int valor=0;

    //Recebendo um valor
    printf("Digite um valor para ver o seu quadrado: ");
    do{
    	valor = scann();
    	if (valor < 0)
    		printf("digite um valor natural!(maior que 0)");
	}while (valor < 0);
 
    if (valor == 0)
    	printf("\nO quadrado de %i eh 0\n", valor);
    else
    	printf("\nO quadrado de %i eh %i\n", valor, quadradoNatural(valor));

    l();
    PAUSE;
    system(CLEAR);
    return 0;
}

//Funções que calculam o quadrado de um número natural
int quadradoNatural(int valor){
    int cons = 2 * valor - 1;
    return q(cons, cons, 1);
}

int q(int valor, int cons, int i){
    if(valor == 1){
        return cons;
    }

    int impar=0;

    if(i % 2 != 0){
        impar = i;
    }

    return impar + q(valor-1, cons, i+1);
}
