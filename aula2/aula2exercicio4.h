#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int aula2exercicio4() {
	system(CLEAR);
	l();
	printc("AULA 2 - EXERCICIO 4");
	l();
	printc("Programa para verificar se um conjunto de parentese, ");
	printc("colchetes ou chaves estao balandeados.");
	printc("Ex.: [{()()}{}] ou {[([{}])]}.");
	l();
    char stringExpressao[100];
    Pilha pilhaExpressao = pilha(100);
    
    printf("Digite a expressao que deseja saber se esta balanceada: ");
    getLine(stringExpressao, sizeof(stringExpressao));
    
    // Percorre a string
    for (int i = 0; i < strlen(stringExpressao); i++) {
        char c = stringExpressao[i];
        
        int caractereInvalido = ((c != '(') && (c != ')') &&
                                 (c != '[') && (c != ']') &&
                                 (c != '{') && (c != '}'));
        
        if (caractereInvalido){
            continue;
        }
        
        // Se for um parêntese, colchete ou chave
        if (c == '(' || c == '[' || c == '{') {
            empilha(c, pilhaExpressao);
        }
    
        else if (c == ')' || c == ']' || c == '}') {
        // Se a pilha estiver vazia, a expressão não está balanceada
            if (pilhaEstaVazia(pilhaExpressao)) {
                printf("Expressao nao balanceada!\n");
                destroiPilha(&pilhaExpressao);
                l();
			    PAUSE;
			    system(CLEAR);
                return 1;
            }

            char topo = desempilha(pilhaExpressao);

            if ((topo == '(' && c != ')') ||
                (topo == '[' && c != ']') ||
                (topo == '{' && c != '}')) {
                printf("Expressao nao balanceada!\n");
                destroiPilha(&pilhaExpressao);
                l();
			    PAUSE;
			    system(CLEAR);
                return 1;
                }
        }
    }

    if (!pilhaEstaVazia(pilhaExpressao)) {
        printf("Expressao nao balanceada!\n");
        l();
	    PAUSE;
	    system(CLEAR);
        return 1;
    }

    printf("Expressao balanceada!\n");

    destroiPilha(&pilhaExpressao);

    l();
    PAUSE;
    system(CLEAR);
    return 0;
}
