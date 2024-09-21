#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Funções
void preencheEx7(int[], int, int);
void bSortEx7(int[], int );
void trocaEx7(int[], int, int);
void msortEx7(int[], int);
void msEx7(int[], int, int);
void intercalaEx7(int[], int, int, int);

int aula7exercicio7(){
	system(CLEAR);
	l();
	printc("AULA 7 - EXERCICIO 7");
	l();
	printc("Programa que compara o tempo do Bsort e Msort.");
	printc("(medidas em segundos com casas decimais)");
	l();
	
    //Variáveis
    int v[100000], n=0;
    double tempo, bubble, merge;

    char qtdValores[12] = "Qtd Valores";
    char tempoBubble[13] = "Tempo Bubble";
    char tempoMerge[12] = "Tempo Merge";

    printf("%s %17s %17s\n",qtdValores, tempoBubble, tempoMerge);
    for(n=10000; n <= 100000; n += 10000){
        preencheEx7(v, n, 1);
        tempo = clock();
        bSortEx7(v, n);
        bubble = (double)(clock() - tempo)/CLOCKS_PER_SEC;
        preencheEx7(v, n, 1);
        tempo = clock();
        msortEx7(v, n);
        merge = (double)(clock() - tempo)/CLOCKS_PER_SEC;
        
        printf("%8d %18.6f %18.6f\n", n, bubble, merge);
    }
    l();
    PAUSE;
    system(CLEAR);
    return 0;
}
//Função que preenche um vetor com valores aleatórios
void preencheEx7(int v[], int qtd, int semente){
    srand(semente);

    //Preenchendo o vetor com valores aleatórios entre 0 e 999
    int i=0;
    for(i=0; i < qtd; i++){
        v[i] = rand() % 1000;
    }
}

void msEx7(int v[], int ini, int fim){
    if(ini == fim){
        return;
    }

    int meio = (ini + fim)/2;

    msEx7(v, ini, meio);
    msEx7(v, meio+1, fim);

    intercalaEx7(v, ini, meio, fim);
}

//Função que ordena pelo método mergeSort
void msortEx7(int v[], int qtd){
    return msEx7(v, 0, qtd-1);
}

//Função que ordena os valores intercalando-os
void intercalaEx7(int v[], int ini, int meio, int fim){
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

//Função que ordena os valores usando Bubble sort
void bSortEx7(int v[], int qtd){
	int i=0, j=0;
    for(i=0; i < qtd; i++){
        for(j=0; j < qtd-1; j++){
            if(v[j] > v[j+1]){
                trocaIJ(v, j, j+1);
            } 
        }
    }
}

//Função para trocar as posições dos valores 
/*void troca(int v[], int i, int j){
    int x = v[i];
    v[i] = v[j];
    v[j] = x;
}*/
