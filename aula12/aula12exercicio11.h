#include <stdio.h>
#include <stdlib.h>

int pertenceArv(Arv, int);

int aula12exercicio11()
{
	system(CLEAR);
	l();
	printc("AULA 12 - EXERCICIO 11");
	l();
	printc("Programa que checa se um item pertence a");
	printc("arvore");
	l();
    
    Arv A = criaArv(criaArv(criaArv(NULL, 5, NULL), 2, criaArv(NULL, 4, NULL)), 1, criaArv(NULL, 3, NULL));
    
    int n = 0;
    printf("Digite o numero que quer saber se pertence a arvore: ");
    n = scann();
    
    if (pertenceArv(A, n) == 1){
        printf("\nO numero %i pertence a arvore", n);
    }else{
        printf("\nO numero %i NAO pertence a arvore", n);
    }
    
    printf("\nExibicao da arvore:\n\n");
    exibeArv(A, 0);
    
    l();
    PAUSE;
    system(CLEAR);
    return 0;
}

int pertenceArv(Arv A, int numero) {
    if (A == NULL) {
        return 0;
    }
    
    if(A->item == numero){
        return 1;
    }
    
    return (pertenceArv(A->esquerda, numero) || pertenceArv(A->direita, numero));
}
