#include <stdlib.h>
#include <stdio.h>  // Adicionei para permitir o uso de printf

typedef int Item;  // Definição do tipo de dado armazenado na lista

// Estrutura de um nó da lista encadeada
typedef struct no {
    Item valor;          // Valor armazenado no nó
    struct no *proximo;  // Ponteiro para o próximo nó
} *Lista;

// Função para criar um novo nó
Lista criaNo(Item valor, Lista prox) {
    Lista novoNo = malloc(sizeof(struct no));  // Aloca memória para o novo nó
    novoNo->valor = valor;  // Atribui o valor ao nó
    novoNo->proximo = prox;  // Aponta para o próximo nó
    return novoNo;
}

// Função para exibir os elementos da lista
void exibeLista(Lista lista) {
    while (lista != NULL) {
        printf("%d ", lista->valor);  // Exibe o valor do nó atual
        lista = lista->proximo;  // Avança para o próximo nó
    }
    printf("\n");  // Nova linha após exibir a lista
}

// Função para anexar a lista B no final da lista A
void anexaListas(Lista *A, Lista B) {
    if (B == NULL) return;  // Se a lista B for vazia, não há nada para anexar
    while (*A != NULL) {
        A = &(*A)->proximo;  // Avança até o final da lista A
    }
    *A = B;  // Anexa a lista B ao final da lista A
}

// Função para destruir (liberar memória) de toda a lista
void destroiLista(Lista *lista) {
    while (*lista != NULL) {
        Lista temp = *lista;  // Armazena o nó atual temporariamente
        *lista = temp->proximo;  // Avança para o próximo nó
        free(temp);  // Libera o nó atual
    }
}

// Função que retorna o tamanho da lista
int tamanhoLista(Lista lista) {
    if (lista == NULL) return 0;  // Se a lista for vazia, o tamanho é 0
    return 1 + tamanhoLista(lista->proximo);  // Soma 1 para o nó atual e recursivamente conta os demais
}

// Função que verifica se um item está presente na lista
int contemItem(Item valor, Lista lista) {
    if (lista == NULL) return 0;  // Se a lista for vazia, o item não está presente
    if (valor == lista->valor) return 1;  // Se o item for encontrado, retorna 1
    return contemItem(valor, lista->proximo);  // Continua a busca no próximo nó
}

// Função que clona (duplica) a lista
Lista clonaLista(Lista lista) {
    if (lista == NULL) return NULL;  // Se a lista for vazia, o clone também será vazio
    return criaNo(lista->valor, clonaLista(lista->proximo));  // Cria um novo nó com o valor atual e clona o próximo
}

// Função para exibir os elementos da lista de forma inversa
void exibeListaInvertida(Lista lista) {
    if (lista == NULL) return;  // Caso base: se a lista for vazia, apenas retorna
    exibeListaInvertida(lista->proximo);  // Exibe recursivamente o próximo nó
    printf("%d ", lista->valor);  // Exibe o valor após a recursão, garantindo a ordem inversa
}

/*versão antiga do lista.h:

#include <stdlib.h>

typedef int Item;

typedef struct no {
   Item item;          
   struct no *prox; 
} *Lista;

Lista no(Item x, Lista p) {
   Lista n = malloc(sizeof(struct no));
   n->item = x;
   n->prox = p;
   return n;
} 

void exibe(Lista L) {
   while( L != NULL ) {
      printf("%d ",L->item);
      L = L->prox;
   }
}

void anexa(Lista *A, Lista B) {
   if( B == NULL ) return;
   while( *A != NULL ) A = &(*A)->prox;
   *A = B;
}

void destroi(Lista *L) {
   while( *L != NULL ) {
      Lista n = *L;
      *L = n->prox;
      free(n);
   }
}

int tam(Lista L) {
   if( L == NULL ) return 0;
   return 1 + tam(L->prox);
}

int pert(Item x, Lista L) {
   if( L == NULL ) return 0;
   if( x == L->item ) return 1;    
   return pert(x,L->prox);
}

Lista clone(Lista L) {
   if( L == NULL ) return NULL;
   return no(L->item,clone(L->prox));
}

void exibe_inv(Lista L) {
   if( L == NULL ) return;
   exibe_inv(L->prox);
   printf("%d ",L->item);
}*/