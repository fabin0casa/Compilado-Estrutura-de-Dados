#include <stdlib.h>

typedef int Itemp;  // Definição do tipo dos itens na pilha

// Estrutura da pilha
typedef struct pilha {
    int    capacidade;  // Capacidade máxima da pilha
    int    indiceTopo;  // Índice do elemento no topo da pilha
    Itemp *elementos;   // Vetor que armazena os elementos da pilha
} *Pilha;

// Função que cria e inicializa uma nova pilha
Pilha pilha(int capacidade) {
    Pilha novaPilha = malloc(sizeof(struct pilha));  // Aloca memória para a pilha
    novaPilha->capacidade  = capacidade;
    novaPilha->indiceTopo = -1;  // Pilha começa vazia
    novaPilha->elementos = malloc(capacidade * sizeof(Itemp));  // Aloca memória para os elementos
    return novaPilha;
}

// Verifica se a pilha está vazia
int pilhaEstaVazia(Pilha p) {
    return (p->indiceTopo == -1);  // Retorna 1 se estiver vazia, 0 caso contrário
}

// Verifica se a pilha está cheia
int pilhaEstaCheia(Pilha p) {
    return (p->indiceTopo == p->capacidade - 1);  // Retorna 1 se estiver cheia, 0 caso contrário
}

// Função para empilhar um item
void empilha(Itemp valor, Pilha p) {
    if (pilhaEstaCheia(p)) {  // Verifica se há espaço na pilha
        puts("Erro: Pilha cheia!");
        abort();  // Finaliza o programa em caso de erro
    }
    p->indiceTopo++;
    p->elementos[p->indiceTopo] = valor;  // Adiciona o item no topo
}

// Função para desempilhar um item
Itemp desempilha(Pilha p) {
    if (pilhaEstaVazia(p)) {  // Verifica se a pilha está vazia
        puts("Erro: Pilha vazia!");
        abort();  // Finaliza o programa em caso de erro
    }
    Itemp valor = p->elementos[p->indiceTopo];  // Armazena o item do topo
    p->indiceTopo--;  // Decrementa o índice do topo
    return valor;  // Retorna o item desempilhado
}

// Função que retorna o item no topo da pilha sem removê-lo
Itemp topo(Pilha p) {
    if (pilhaEstaVazia(p)) {  // Verifica se a pilha está vazia
        puts("Erro: Pilha vazia!");
        abort();  // Finaliza o programa em caso de erro
    }
    return p->elementos[p->indiceTopo];  // Retorna o item no topo
}

// Função para destruir a pilha e liberar memória
void destroiPilha(Pilha *p) {
    free((*p)->elementos);  // Libera a memória alocada para os elementos
    free(*p);  // Libera a memória da pilha
    *p = NULL;  // Define o ponteiro como nulo para evitar acessos indevidos
}

/* versão antiga do pilha.h:

#include <stdlib.h>
 
typedef int Itemp;
 
typedef struct pilha {
   int    max;
   int    topo;
   Itemp *item;
} *Pilha;
 
Pilha pilha(int m) {
   Pilha P = malloc(sizeof(struct pilha));
   P->max  = m;
   P->topo = -1;
   P->item = malloc(m*sizeof(Itemp));
   return P;
}
 
int vaziap(Pilha P) {
   if(P->topo == -1) return 1;
   else return 0;
}
 
int cheiap(Pilha P) {
   if( P->topo == P->max-1 ) return 1;
   else return 0;
}
 
void empilha(Itemp x, Pilha P) {
   if( cheiap(P) ) {
       puts("pilha cheia!");
       abort();
   }
   P->topo++;
   P->item[P->topo] = x;
}
 
Itemp desempilha(Pilha P) {
   if( vaziap(P) ) { puts("pilha vazia!"); abort(); }
   Itemp x = P->item[P->topo];
   P->topo--;
   return x; 
}
 
Itemp topo(Pilha P) {
   if( vaziap(P) ) { puts("pilha vazia!"); abort(); }
   return P->item[P->topo];
}
 
void destroip(Pilha *Q) {
   free((*Q)->item);
   free(*Q);
   *Q = NULL;
}*/