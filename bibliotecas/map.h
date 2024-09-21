#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef int Chave;          // Tipo para a chave do mapa
typedef char Valor[22];     // Tipo para o valor associado a uma chave (tamanho máximo de 22 caracteres)

// Estrutura do nó do mapa
typedef struct map {
    Chave chave;            // A chave do mapeamento
    Valor valor;            // O valor associado à chave
    struct map *proximo;    // Ponteiro para o próximo nó do mapa
} *Map;

// Função para criar um novo nó no mapa
Map criaNoMap(Chave chave, Valor valor, Map proximo) {
    Map novoNo = malloc(sizeof(struct map));  // Aloca memória para o novo nó
    novoNo->chave = chave;                   // Atribui a chave ao nó
    strcpy(novoNo->valor, valor);            // Copia o valor para o nó
    novoNo->proximo = proximo;               // Define o próximo nó na sequência
    return novoNo;
}

// Função para inserir um novo mapeamento ou atualizar um existente
void insereMap(Chave chave, Valor valor, Map *M) {
    // Percorre a lista até encontrar a posição correta para inserir
    while (*M && chave > (*M)->chave) {
        M = &(*M)->proximo;
    }
    // Se a chave já existir, atualiza o valor
    if (*M && chave == (*M)->chave) {
        strcpy((*M)->valor, valor);
    } else {
        // Caso contrário, insere um novo nó na posição correta
        *M = criaNoMap(chave, valor, *M);
    }
}

// Função para remover um mapeamento baseado na chave
void removeMap(Chave chave, Map *M) {
    // Percorre a lista até encontrar o nó com a chave ou chegar ao final
    while (*M && chave > (*M)->chave) {
        M = &(*M)->proximo;
    }
    // Se não encontrar a chave, ou o mapa estiver vazio, retorna
    if (*M == NULL || chave != (*M)->chave) return;
    
    // Remove o nó da lista e libera a memória
    Map temp = *M;
    *M = temp->proximo;
    free(temp);
}

// Função para exibir todos os mapeamentos no formato [(chave,valor), ...]
void exibeMap(Map M) {
    printf("[");
    while (M) {
        printf("(%d,%s)", M->chave, M->valor);  // Exibe o par (chave, valor)
        if (M->proximo) printf(",");           // Adiciona vírgula se não for o último
        M = M->proximo;
    }
    printf("]\n");  // Fecha a exibição com um colchete
}

// Função para verificar se uma chave está presente no mapa e obter o valor associado
int contemMap(Chave chave, Valor valor, Map M) {
    // Percorre a lista até encontrar a chave ou chegar ao final
    while (M && chave > M->chave) {
        M = M->proximo;
    }
    // Se encontrar a chave, copia o valor correspondente
    if (M && chave == M->chave) {
        strcpy(valor, M->valor);
        return 1;  // Retorna 1 indicando que a chave foi encontrada
    }
    return 0;  // Retorna 0 se a chave não for encontrada
}

// Função para destruir o mapa e liberar toda a memória alocada
void destroiMap(Map *M) {
    // Percorre a lista e libera cada nó
    while (*M != NULL) {
        Map temp = *M;
        *M = temp->proximo;
        free(temp);
    }
}

/*versão antiga do map.h:

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef int Chave;
typedef char Valor[22];
typedef struct map {
    Chave chave;
    Valor valor;
    struct map *prox;
} *Map;

Map no_map(Chave c, Valor v, Map p) {
    Map n = malloc(sizeof(struct map));
    n->chave = c;
    strcpy(n->valor, v);
    n->prox = p;
    return n;
}

void insm(Chave c, Valor v, Map *M) {
    while (*M && c > (*M)->chave) 
        M = &(*M)->prox;
    if (*M && c == (*M)->chave)
        strcpy((*M)->valor, v);
    else 
        *M = no_map(c, v, *M);
}

void remm(Chave c, Map *M) {
    while( *M && c>(*M)->chave )
    M = &(*M)->prox;
    if( *M==NULL || c!=(*M)->chave ) return;
    Map n = *M;
    *M = n->prox;
    free(n);
}

void exibem(Map M) {
    printf("[");
    while (M) {
        printf("(%d,%s)", M->chave, M->valor);
        if (M->prox) printf(",");
        M = M->prox;
    }
}

int pertm(Chave c, Valor v, Map M) {
	while( M && c>M->chave ){
		M = M->prox;
	}
		
	if( M && c==M->chave ){
		strcpy(v,M->valor);
	}
	
	return (M && c==M->chave);
}

void destroim(Map *M) {
   
   while( *M != NULL ) {
      Map n = *M;
      *M = n->prox;
      free(n);
   }
   
}*/