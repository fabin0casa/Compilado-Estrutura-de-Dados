#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Definição de tipos
typedef char ChaveS[22];    // Tipo para a chave do mapa (vetor de char)
typedef char Valor[22];     // Tipo para o valor associado (vetor de char)

// Estrutura do nó do mapa
typedef struct noMapaS {
    ChaveS chave;           // A chave do mapeamento
    Valor valor;            // O valor associado à chave
    struct noMapaS *proximo; // Ponteiro para o próximo nó (ajustei aqui o tipo)
} *MapaS;

// Função para criar um novo nó no mapa
MapaS criarNoMapaS(ChaveS chave, Valor valor, MapaS proximo) {
    MapaS novoNo = malloc(sizeof(struct noMapaS));  // Aloca memória para o novo nó
    strcpy(novoNo->chave, chave);                   // Copia a chave para o nó
    strcpy(novoNo->valor, valor);                   // Copia o valor para o nó
    novoNo->proximo = proximo;                      // Define o próximo nó
    return novoNo;
}

// Função para inserir um novo mapeamento ou atualizar um existente
void inserirNoMapaS(ChaveS chave, Valor valor, MapaS *mapa) {
    while (*mapa && strcmp(chave, (*mapa)->chave) > 0) {
        mapa = &(*mapa)->proximo;
    }
    if (*mapa && strcmp(chave, (*mapa)->chave) == 0) {
        strcpy((*mapa)->valor, valor);
    } else {
        *mapa = criarNoMapaS(chave, valor, *mapa);
    }
}

// Função para remover um mapeamento baseado na chave
void removerNoMapaS(ChaveS chave, MapaS *mapa) {
    while (*mapa && strcmp(chave, (*mapa)->chave) > 0) {
        mapa = &(*mapa)->proximo;
    }
    if (*mapa == NULL || strcmp(chave, (*mapa)->chave) != 0) return;
    MapaS temp = *mapa;
    *mapa = temp->proximo;
    free(temp);
}

// Função para exibir todos os mapeamentos no formato [(chave,valor), ...]
void exibirMapaS(MapaS mapa) {
    printf("[");
    while (mapa) {
        printf("(%s,%s)", mapa->chave, mapa->valor);
        if (mapa->proximo) printf(",");
        mapa = mapa->proximo;
    }
    printf("]\n");
}

// Função para verificar se uma chave está presente no mapa e obter o valor associado
int contemNoMapaS(ChaveS chave, Valor valor, MapaS mapa) {
    while (mapa && strcmp(chave, mapa->chave) != 0) {
        mapa = mapa->proximo;
    }
    if (mapa && strcmp(chave, mapa->chave) == 0) {
        strcpy(valor, mapa->valor);
        return 1;
    }
    return 0;
}

// Função para destruir o mapa e liberar a memória alocada
void destruirMapaS(MapaS *mapa) {
    while (*mapa != NULL) {
        MapaS temp = *mapa;
        *mapa = temp->proximo;
        free(temp);
    }
}
