#include <stdio.h>
#include <stdlib.h>

// Definição de tipos
typedef int Chave;       // Tipo para a chave do mapa
typedef int ValorI;       // Tipo para o valor associado

// Estrutura do nó do mapa
typedef struct noMapa {
    Chave chave;            // A chave do mapeamento
    ValorI valor;            // O valor associado à chave
    struct noMapa *proximo; // Ponteiro para o próximo nó
} *Mapa;

// Função para criar um novo nó no mapa
Mapa criarNoMapa(Chave chave, ValorI valor, Mapa proximo) {
    Mapa novoNo = malloc(sizeof(struct noMapa));  // Aloca memória para o novo nó
    novoNo->chave = chave;                        // Atribui a chave ao nó
    novoNo->valor = valor;                        // Atribui o valor ao nó
    novoNo->proximo = proximo;                    // Define o próximo nó
    return novoNo;
}

// Função para inserir um novo mapeamento ou atualizar um existente
void inserirNoMapa(Chave chave, ValorI valor, Mapa *mapa) {
    while (*mapa && chave > (*mapa)->chave) {
        mapa = &(*mapa)->proximo;
    }
    if (*mapa && chave == (*mapa)->chave) {
        (*mapa)->valor = valor;
    } else {
        *mapa = criarNoMapa(chave, valor, *mapa);
    }
}

// Função para remover um mapeamento baseado na chave
void removerNoMapa(Chave chave, Mapa *mapa) {
    while (*mapa && chave > (*mapa)->chave) {
        mapa = &(*mapa)->proximo;
    }
    if (*mapa == NULL || chave != (*mapa)->chave) return;
    Mapa temp = *mapa;
    *mapa = temp->proximo;
    free(temp);
}

// Função para exibir todos os mapeamentos no formato [(chave,valor), ...]
void exibirMapa(Mapa mapa) {
    printf("[");
    while (mapa) {
        printf("(%d,%d)", mapa->chave, mapa->valor);
        if (mapa->proximo) printf(",");
        mapa = mapa->proximo;
    }
    printf("]\n");
}

// Função para verificar se uma chave está presente no mapa e obter o valor associado
int contemNoMapa(Chave chave, ValorI *valor, Mapa mapa) {
    while (mapa && chave > mapa->chave) {
        mapa = mapa->proximo;
    }
    if (mapa && chave == mapa->chave) {
        *valor = mapa->valor;
        return 1;
    }
    return 0;
}

// Função para destruir o mapa e liberar a memória alocada
void destruirMapa(Mapa *mapa) {
    while (*mapa != NULL) {
        Mapa temp = *mapa;
        *mapa = temp->proximo;
        free(temp);
    }
}
