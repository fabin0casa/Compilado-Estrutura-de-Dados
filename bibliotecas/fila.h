#include <stdlib.h>

#define avanca(i, max) (i = (i + 1) % max)  // Macro para avançar o índice de forma circular

typedef int Itemf;  // Definição do tipo dos itens na fila

// Estrutura da fila
typedef struct fila {
    int   capacidade;  // Capacidade máxima da fila
    int   totalElementos;  // Número total de elementos na fila
    int   indiceInicio;  // Índice do início da fila
    int   indiceFinal;  // Índice do final da fila
    Itemf *elementos;  // Vetor que armazena os elementos da fila
} *Fila;

// Função que cria e inicializa uma nova fila
Fila fila(int capacidade) {
    Fila novaFila = malloc(sizeof(struct fila));  // Aloca memória para a fila
    novaFila->capacidade = capacidade;
    novaFila->totalElementos = 0;
    novaFila->indiceInicio = 0;
    novaFila->indiceFinal = 0; 
    novaFila->elementos = malloc(capacidade * sizeof(Itemf));  // Aloca memória para os elementos
    return novaFila;
}

// Verifica se a fila está vazia
int filaEstaVazia(Fila f) {
    return (f->totalElementos == 0);  // Retorna 1 se a fila estiver vazia, 0 caso contrário
}

// Verifica se a fila está cheia
int filaEstaCheia(Fila f) {
    return (f->totalElementos == f->capacidade);  // Retorna 1 se a fila estiver cheia, 0 caso contrário
}

// Função para enfileirar um item
void enfileira(Itemf valor, Fila f) {
    if (filaEstaCheia(f)) {  // Verifica se há espaço na fila
        puts("Erro: Fila cheia!");
        abort();  // Finaliza o programa em caso de erro
    }
    f->elementos[f->indiceFinal] = valor;  // Adiciona o item no final da fila
    avanca(f->indiceFinal, f->capacidade);  // Avança o índice final de forma circular
    f->totalElementos++;  // Incrementa o total de elementos
}

// Função para desenfileirar um item
Itemf desenfileira(Fila f) {
    if (filaEstaVazia(f)) {  // Verifica se a fila está vazia
        puts("Erro: Fila vazia!");
        abort();  // Finaliza o programa em caso de erro
    }
    Itemf valor = f->elementos[f->indiceInicio];  // Armazena o item no início da fila
    avanca(f->indiceInicio, f->capacidade);  // Avança o índice de início de forma circular
    f->totalElementos--;  // Decrementa o total de elementos
    return valor;  // Retorna o item desenfileirado
}

// Função para destruir a fila e liberar memória
void destroiFila(Fila *f) {
    free((*f)->elementos);  // Libera a memória alocada para os elementos
    free(*f);  // Libera a memória da fila
    *f = NULL;  // Define o ponteiro como nulo para evitar acessos indevidos
}

/* versão antiga do fila.h:

#include <stdlib.h>

#define avanca(i) (i = (i+1) % F->max)

typedef int Itemf;

typedef struct fila {
   int   max;
   int   total;
   int   inicio;
   int   final;
   Itemf *item;
} *Fila;

Fila fila(int m) {
   Fila F = malloc(sizeof(struct fila));
   F->max    = m;
   F->total  = 0;
   F->inicio = 0;
   F->final  = 0; 
   F->item   = malloc(m*sizeof(Itemf));
   return F;
}

int vaziaf(Fila F) {
   return ( F->total == 0 );
}

int cheiaf(Fila F) {
   return ( F->total == F->max );
}

void enfileira(Itemf x, Fila F) {
   if( cheiaf(F) ) { puts("fila cheia!"); abort(); }
   F->item[F->final] = x;
   avanca(F->final);
   F->total++;
}

Itemf desenfileira(Fila F) {
   if( vaziaf(F) ) { puts("fila vazia!"); abort(); }
   Itemf x = F->item[F->inicio];
   avanca(F->inicio);
   F->total--;
   return x;
}

void destroif(Fila *G) {
   free((*G)->item);
   free(*G);
   *G = NULL;
}*/