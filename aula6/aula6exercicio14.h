#include<stdio.h>
#include<stdlib.h>

//Funções
int somaDigit(int);

int aula6exercicio14(){
	system(CLEAR);
	l();
	printc("AULA 6 - EXERCICIO 14");
	l();
	printc("Programa que soma todos os digitos de um numero inserido.");
	l();
    //Variáveis
    int valor=0;

    //Recebendo os dígitos a serem somados
    printf("\nDigite uma valor para ver a soma dos seus digitos: ");
    valor = scann();

    //Mostrando resultado
    printf("A soma dos digitos de %i eh %i\n", valor, somaDigit(valor));

    l();
    PAUSE;
    system(CLEAR);
    return 0;
}
//Função que soma todos os dígitos de um número
int somaDigit(int valor){
    if(valor % 10 == valor){
        return valor;
    }

    int digito = valor % 10;

    return digito + somaDigit(valor / 10);
}
