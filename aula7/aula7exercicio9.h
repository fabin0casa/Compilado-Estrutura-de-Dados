#include <stdio.h>
#include <stdlib.h>

int lsearch(int, int[], int);

int aula7exercicio9(){
	system(CLEAR);
	l();
	printc("AULA 7 - EXERCICIO 9");
	l();
	printc("Programa que implementa a busca linear.");
	l();
	
    //variáveis
    int valores[10] = {66, 80, 31, 48, 27, 75, 19, 52, 78, 99}, valorBusca=0;


    //Pedindo para o usuário o número a ser procurado

    exibe(valores, 10);
    printf("Escolha um valor para a busca: ");
    valorBusca = scann();

    //Mostrando resultados
    if(lsearch(valorBusca, valores, 10)){
        printf("Valor %i foi encontrado\n", valorBusca);
    }else{
        printf("Valor %i nao foi encontrado\n", valorBusca);
    }
    
    l();
    PAUSE;
    system(CLEAR);
    return 0;
}
//Função de busca lienar
int lsearch(int valorBusca, int v[], int qtd){
    //Encontrando o valor
    int i=0;
    for(i=0; i < qtd; i++){
        if(v[i] == valorBusca){
            return 1;
        } 
    }
    return 0;
}

//Função que exibe o conteúdo de um vetor
/*void exibir(int v[], int qtd){
    //Mostrando o conteúdo do vetor 
    int i=0;
    for(i=0; i < qtd; i++){
        printf("%i ", v[i]);
    }

    printf("\n");
}*/
