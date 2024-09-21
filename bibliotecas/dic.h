#include <stdlib.h>
//usando o mapString.h como base para ele...

// Estrutura do dicionário
typedef struct dic {
    int tamanho;    // Tamanho do dicionário (número de buckets)
    Map *vetor;   // Vetor de Mapas (listas encadeadas para resolver colisões)
} *Dic;

// Função de hash para converter uma string em um índice
unsigned hash(char *chave, int tamanho) {
    unsigned soma = 0;
    // Percorre a string e calcula o valor da hash
    for (int i = 0; chave[i]; i++) {
        soma += (i + 1) * chave[i];  // A função usa o índice e o valor da chave
    }
    return (soma % tamanho);  // Retorna o índice calculado, limitado pelo tamanho do dicionário
}

// Função para criar um novo dicionário com m buckets
Dic criaDic(int tamanho) {
    Dic d = malloc(sizeof(struct dic));   // Aloca memória para o dicionário
    d->tamanho = tamanho;                           // Define o tamanho do dicionário
    d->vetor = malloc(tamanho * sizeof(Map));     // Aloca um vetor de Mapas
    // Inicializa cada posição do vetor com NULL
    for (int i = 0; i < tamanho; i++) {
        d->vetor[i] = NULL;
    }
    return d;
}

// Função para inserir um novo par (chave, valor) no dicionário
void insereDic(int chave, char valor[22], Dic d) {
    char chaveStr[12];  // Tamanho suficiente para armazenar um int convertido em string
    sprintf(chaveStr, "%d", chave);  // Converte o inteiro para string
    inserirNoMapaS(chaveStr, valor, &d->vetor[hash(chaveStr, d->tamanho)]);
}

//função de inserir para chaves do tipo string
void insereDicStr(char* chave, char valor[22], Dic d) {
    inserirNoMapaS(chave, valor, &d->vetor[hash(chave, d->tamanho)]);
}

//remove um item do dicionario
void removeDic(int chave, Dic d) {
    char chaveStr[12];
    sprintf(chaveStr, "%d", chave);
    removerNoMapaS(chaveStr, &d->vetor[hash(chaveStr, d->tamanho)]);
}

//função remove para chaves do tipo string
void removeDicStr(char* chave, Dic d) {
    removerNoMapaS(chave, &d->vetor[hash(chave, d->tamanho)]);
}


// Função para verificar se um par (chave, valor) está presente no dicionário
int contemDic(int chave, char valor[22], Dic d) {
    char chaveStr[12];
    sprintf(chaveStr, "%d", chave);
    return contemNoMapaS(chaveStr, valor, d->vetor[hash(chaveStr, d->tamanho)]);
}

//função contem para chaves do tipo string
int contemDicStr(char* chave, char valor[22], Dic d) {
    return contemNoMapaS(chave, valor, d->vetor[hash(chave, d->tamanho)]);
}


// Função para exibir todos os buckets e seus respectivos mapeamentos
void exibeDic(Dic d) {
    // Percorre cada bucket do dicionário
    for (int i = 0; i < d->tamanho; i++) {
        printf("%d: ", i);  // Exibe o índice do bucket
        exibirMapaS(d->vetor[i]);  // Exibe os mapeamentos no bucket
        printf("\n");
    }
}

// Função para destruir o dicionário e liberar toda a memória
void destroiDic(Dic *d) {
    // Percorre cada bucket do dicionário e destrói seu conteúdo
    for (int i = 0; i < (*d)->tamanho; i++) {
        destruirMapaS(&(*d)->vetor[i]);
    }
    // Libera o vetor e o dicionário
    free((*d)->vetor);
    free(*d);
    *d = NULL;  // Define o ponteiro como NULL para evitar acessos futuros
}


/*versão antiga do dic.h:

#include "map.h"

typedef struct dic {
    int tam;
    Map *vet;
} *Dic;

unsigned hash(char *c, int m) {
    unsigned s = 0;
    for (int i = 0; c[i]; i++)
        s += (i + 1) * c[i];
    return (s % m);
}

Dic dic(int m) {
    Dic d = malloc(sizeof(struct dic));
    d->tam = m;
    d->vet = malloc(m * sizeof(Map));
    for (int i = 0; i < m; i++) {
        d->vet[i] = NULL;
    }
    return d;
}

void insd(Chave c, char v[22], Dic d) {
    insm(c, v, &d->vet[hash(c, d->tam)]);
}

void remd(Chave c, Dic d) {
    remm(c, &d->vet[hash(c, d->tam)]);
}

int pertd(Chave c, char v[22], Dic d) {
    return pertm(c, v, d->vet[hash(c, d->tam)]);
}

void exibed(Dic d) {
    for (int i = 0; i < d->tam; i++) {
        printf("%d: ", i);
        exibem(d->vet[i]);
        printf("\n");
    }
}

void destroid(Dic *d) {
    for (int i = 0; i < (*d)->tam; i++) {
        destroim(&(*d)->vet[i]);
    }
    free((*d)->vet);
    free(*d);
    *d = NULL;
}*/