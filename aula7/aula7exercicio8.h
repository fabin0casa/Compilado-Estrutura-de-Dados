#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Funções
void preencheEx8(int[], int, int);
void msortEx8(int[], int);
void msEx8(int[], int, int);
void intercalaEx8(int[], int, int, int);

int aula7exercicio8(){
	system(CLEAR);
	l();
	printc("AULA 7 - EXERCICIO 8");
	l();
	printc("Programa para testar o Desempenho do MergeSort.");
	printc("(medida em segundos)");
	l();
	
    //Variáveis
    int *v = malloc(1e8 * sizeof(int));
    double tempo, bubble, merge;
    int n=0;

    char qtdValores[12] = "Qtd Valores";
    char tempoMerge[12] = "Tempo Merge";

    printf("%s %15s\n",qtdValores, tempoMerge);
    for(n=1e7; n <= 1e8; n += 1e7){
        preencheEx8(v, n, 1);
        tempo = clock();
        msortEx8(v, n);
        merge = (clock() - tempo)/CLOCKS_PER_SEC;
        
        printf("%9d %13.1f\n", n, merge);
    }
    
    l();
    PAUSE;
    system(CLEAR);
    return 0;
}
//Função que preenche um vetor com valores aleatórios
void preencheEx8(int v[], int qtd, int semente){
    srand(semente);

    //Preenchendo o vetor com valores aleatórios entre 0 e 999
    int i=0;
    for(i=0; i < qtd; i++){
        v[i] = rand() % 1000;
    }
}

//Função que ordena pelo método mergeSort
void msortEx8(int v[], int qtd){
    return msEx8(v, 0, qtd-1);
}

void msEx8(int v[], int ini, int fim){
    if(ini == fim){
        return;
    }

    int meio = (ini + fim)/2;

    msEx8(v, ini, meio);
    msEx8(v, meio+1, fim);

    intercalaEx8(v, ini, meio, fim);
}

//Função que ordena os valores intercalando-os
void intercalaEx8(int v[], int ini, int meio, int fim){
    //variáveis
    int* vetAux = malloc((fim - ini + 1) * sizeof(int));
    int i=ini, j=meio+1, k=0;

    //Ordenando os valores
    while(i <= meio && j <= fim){
        vetAux[k++] = (v[i] < v[j]) ? v[i++] : v[j++];
    }

    while(i <= meio){
        vetAux[k++] = v[i++];
    }   

    while(j <= fim){
        vetAux[k++] = v[j++];
    }

    //Passando os valores do vetor auxiliar (vetAux) para o vetor principal (v[])
    for(i=0; i <= fim - ini; i++){
        v[ini + i] = vetAux[i];
    }

    //Liberando a memória alocada para vetAux
    free(vetAux);    
}

