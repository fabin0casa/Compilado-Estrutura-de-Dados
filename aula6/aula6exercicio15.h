#include<stdio.h>
#include<stdlib.h>

//Funções
int qtdBinario(int);
int qtdBin(int, int);

int aula6exercicio15(){
	system(CLEAR);
	l();
	printc("AULA 6 - EXERCICIO 15");
	l();
	printc("Programa que mostra a quantidade de digitos binarios");
	printc("de um numero.");
	l();
    //Variáveis
    int valor=0;

    //Recebendo os dígitos a serem somados
    printf("Digite um valor para ver a qtd de digitos binarios: ");
    valor = scann();

    printf("\nO valor %i tem %i digitos binarios\n", valor, qtdBinario(valor));

    
    l();
    PAUSE;
    system(CLEAR);
    return 0;
}
//Função que soma todos os dígitos de um número

int qtdBinario(int valor){
    return qtdBin(valor, 1);
}

int qtdBin(int valor, int i){
    if(valor < 1){
        return 0;
    }

    return i + qtdBin(valor / 2, i);
}
