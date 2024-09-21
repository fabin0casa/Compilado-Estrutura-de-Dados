#include<stdio.h>
#include<stdlib.h>

//Funções
void hanoi(int, char, char, char);

int aula6exercicio8(){
	system(CLEAR);
	l();
	printc("AULA 6 - EXERCICIO 8");
	l();
	printc("Programa que resolve a torre de Hanoi.");
	l();
	
    //Variáveis
    int qtdDiscos=0;
    char origem, aux, destino;

    //Recebendo a quantidade de discos
    printf("Digite a quantidade de discos: ");
    do{
    	qtdDiscos = scann();
    	if (qtdDiscos <= 0)
    		printf("digite um valor positivo!\n");
	}while(qtdDiscos <= 0);

    //Identificando as torres (torre A, torre B, torre C)
    printf("\nInsira letras identificadores para a torres. \n");
    printf("Origem: ");
    do{
    	scanf(" %c", &origem);
	}while (origem == ' ');

    printf("Auxiliar: ");
    do{
    	scanf(" %c", &aux);
	}while (aux == ' ');
	
    printf("Destino: ");
    do{
    	scanf(" %c", &destino);
	}while (destino == ' ');
    
    printf("\n\nResolvendo a torre de Hanoi:\n");
    hanoi(qtdDiscos, origem, aux, destino);

    l();
    PAUSE;
    system(CLEAR);
    return 0;
}
//Função que resolve a torre de Hanoi
void hanoi(int discos, char origem, char aux, char destino){
    if(discos == 1){
        printf("Movendo disco 1 de %c para %c\n", origem, destino);
    }else{
        hanoi(discos - 1, origem, destino, aux);
        printf("Movendo disco %i de %c para %c\n", discos, origem, destino);
        hanoi(discos - 1, aux, origem, destino);
    }
}
