#include <stdlib.h>
// Definição de um tipo de item
typedef int Item;

// Estrutura de uma árvore binária
typedef struct arv {
    struct arv *esquerda;  // Ponteiro para o filho à esquerda
    Item item;        // Item armazenado no nó
    struct arv *direita;  // Ponteiro para o filho à direita
} *Arv;

// Função para criar um novo nó na árvore
Arv criaArv(Arv esquerda, Item item, Arv direita) {
    Arv novoNo = malloc(sizeof(struct arv));  // Aloca memória para o novo nó
    
    // Define os filhos e o item do nó
    novoNo->esquerda = esquerda;
    novoNo->item = item;
    novoNo->direita = direita;
    
    return novoNo;
}

// Função para exibir a árvore binária
void exibeArv(Arv A, int nivel) {
    if (A == NULL) {
        return;
    }
    
    // Exibe o filho à direita primeiro (visualização invertida)
    exibeArv(A->direita, nivel + 1);
    
    // Exibe o item do nó com identação correspondente ao nível
    printf("%*s%d\n", 3 * nivel, "", A->item);
    
    // Exibe o filho à esquerda
    exibeArv(A->esquerda, nivel + 1);
}

// Função para inserir um item na árvore binária
void insereArv(Item item, Arv *A) {
    if (*A == NULL) {
        // Insere o novo nó quando a posição está vazia
        *A = criaArv(NULL, item, NULL);
        
    } else if (item <= (*A)->item) {
        // Se o item for menor ou igual ao nó atual, insere à esquerda
        insereArv(item, &(*A)->esquerda);
        
    } else {
        // Se o item for maior, insere à direita
        insereArv(item, &(*A)->direita);
    }
}

/*versão antiga o arv.h:

typedef int Item;

typedef struct arv {
	struct arv *esq;
	Item item;
	struct arv *dir;
} *Arv;

Arv arv(Arv e, Item x, Arv d) {
	Arv n = malloc(sizeof(struct arv));
	
	n->esq = e;
	n->item = x;
	n->dir = d;
	
	return n;
} 

void exibe(Arv A,int n) { 
	if(A == NULL){
		return;
	}
	
	exibea(A->dir,n+1);
	printf("%*s%d\n",3*n,"",A->item);
	exibea(A->esq,n+1);
}

void ins(Item x, Arv *A){
	
	if (*A == NULL){
		*A = arv(NULL,x,NULL);
		
	} else if (x <= (*A)->item){
		ins(x,&(*A)->esq);
		
	} else {
		ins(x,&(*A)->dir);
	}
}*/