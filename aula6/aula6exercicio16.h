#include<stdio.h>
#include<stdlib.h>

int h(int);

int aula6exercicio16(){
	system(CLEAR);
	l();
	printc("AULA 6 - EXERCICIO 16");
	l();
	printc("Programa que retorna a quantidade minima de");
	printc("movimentos nescessarios para resolver a torre de hanoi.");
	l();
	
    //Variáveis
    int qtdDiscos=0;
    printf("Qtd de discos: ");
    do{
    	qtdDiscos = scann();
    	if(qtdDiscos <= 0)
    		printf("digite um valor maior que 0 :/\n");
	}while (qtdDiscos <= 0);

    //Mostrando resultado
    printf("\nPara resolver uma torre com %i discos \nvoce precisara de no minimo %i movimentos \n", qtdDiscos, h(qtdDiscos));

    l();
    PAUSE;
    system(CLEAR);
    return 0;
    
}
//Função que retorna o número mínimo de movimentos para fazer a torre de hanoi
int h(int discos){
    if(discos == 1){
        return 1;
    }

    return 2 * h(discos-1) + 1;
}
