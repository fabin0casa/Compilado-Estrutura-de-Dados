#include <stdio.h>
#include <stdlib.h>

int somatoriaDaLista(Lista);

int aula8exercicio4(void) {
    system(CLEAR);
	l();
	printc("AULA 8 - EXERCICIO 4");
	l();
	printc("Implementacao de funcao para calcular a somatoria");
	printc("dos itens da Lista.");
	l();
    
    Lista I = criaNo(3,criaNo(1,criaNo(5,NULL)));
    exibeLista(I);
    printf("\nSomatoria da lista = %d\n", somatoriaDaLista(I));
    
    l();
    PAUSE;
    system(CLEAR);
    return 0;

}

int somatoriaDaLista(Lista L) {
    
    int soma = 0;
    
    while( L ) {
        soma += L->valor;
        L = L->proximo;
    }
    
    return soma;
}
