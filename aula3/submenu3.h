#include <stdio.h>
#include "aula3exercicio1.h"
#include "aula3exercicio2.h"
#include "aula3exercicio3.h"
#include "aula3exercicio4.h"
#include "aula3exercicio5.h"
#include "aula3exercicio6.h"
void submenu3() {
	system(CLEAR);
	setTextColor(6);
	while(1) {
	    l();
		printSubMenu();
	    l();
	    printc("--APLICACOES EM PILHA--");
	    printf("\n");
		printc("Selecione o exercicio a ser executado:");
	    l();
		printf("      1) Exercicio 1\n");
		printf("      2) Exercicio 2\n");
		printf("      3) Exercicio 3\n");
		printf("      4) Exercicio 4\n");
		printf("      5) Exercicio 5\n");
		printf("      6) Exercicio 6\n");
		printf("      0) Voltar\n");
		l();
		int opcao = 0;
		opcao = lerInteiro();
		l();
		switch (opcao) {
			case 0: system(CLEAR); setTextColor(15); return;
			case 1: aula3exercicio1(); break;
			case 2: aula3exercicio2(); break;
			case 3: aula3exercicio3(); break;
			case 4: aula3exercicio4(); break;
			case 5: aula3exercicio5(); break;
			case 6: aula3exercicio6(); break;
			default: 
				system(CLEAR);
				printc("opcao invalida!!");
				break;
		}
	}
    return;
}



//funções para consistir a inserção de expressao infixa
//não quis colocar no util.h pq é muito especifico dessa aula
int expressaoBalanceada(char *stringExpressao){
    Pilha pilhaExpressao = pilha(100);
    
    // Percorre a string
    for (int i = 0; i < strlen(stringExpressao); i++) {
        char c = stringExpressao[i];
        
        // Se for um parêntese, colchete ou chave
        if (c == '(') {
            empilha(c, pilhaExpressao);
        }
    
        else if (c == ')') {
        // Se a pilha estiver vazia, a expressão não está balanceada
            if (pilhaEstaVazia(pilhaExpressao)) {
                return 0;
            }

            char topo = desempilha(pilhaExpressao);

            if (topo == '(' && c != ')'){
                destroiPilha(&pilhaExpressao);
                return 0;
                }
        }
    }

    if (!pilhaEstaVazia(pilhaExpressao)) {
        return 0;
    }

    destroiPilha(&pilhaExpressao);
    return 1;
}

int validarExpressao(char *expressao) {
    int i = 0;
    int temNumero = 0; // Variável para verificar se existe pelo menos um número
    int temParenteses = 0;

    while (expressao[i] != '\0') {
        char c = expressao[i];
        
        // Verifica se o caractere é um número, parêntese ou operador (+, -, *, /, ^)
        if (isdigit(c)) {
            temNumero = 1; // Marca que há pelo menos um número na expressão
        } 
		else if(c == '(' || c == ')'){
			temParenteses = 1;
		}
		else if (c != '(' && c != ')' && c != '+' && c != '-' && c != '*' && c != '/' && !isspace(c)) {
        	printf("Entrada invalida! nao insira letras!\n");
            return 0; // Entrada inválida (não é um número nem um caractere permitido)
        }

        i++;
    }

    // Verifica se a expressão tem pelo menos um número
    if (!temNumero) {
    	printf("Entrada invalida! nao ha numeros!\n");
        return 0; // Entrada inválida (não há números)
    }
    
    if (!temParenteses){
    	printf("Entrada invalida! Coloque parenteses!!\n");
    	return 0;
	}
    
    if (!expressaoBalanceada(expressao)){
    	printf("Entrada invalida! parenteses desbalanceados!\n");
    	return 0;
	}

    return 1; // Entrada válida (tem pelo menos um número e só contém caracteres permitidos)
}

int validarExpressaoLogica(char *expressao) {
    int i = 0;
    int temV_F = 0; // Variável para verificar se existe pelo menos um 'V' ou 'F'
	int temParenteses = 0;
	
    while (expressao[i] != '\0') {
        char c = expressao[i];
        
        // Verifica se o caractere é 'V' ou 'F'
        if (c == 'V' || c == 'F') {
            temV_F = 1; // Marca que há pelo menos um 'V' ou 'F' na expressão
        } 
        else if(c == '(' || c == ')'){
			temParenteses = 1;
		}
        // Verifica se o caractere é permitido: &, |, !, (, ), ou espaço
        else if (c != '&' && c != '|' && c != '!' &&
                 c != '(' && c != ')' && !isspace(c)) {
            printf("Entrada invalida! nao insira letras nem numeros!\n");
            return 0; // Entrada inválida (não é um caractere permitido)
        }

        i++;
    }

    // Verifica se a expressão tem pelo menos um 'V' ou 'F'
    if (!temV_F) {
    	printf("Entrada invalida! nao ha 'V' nem 'F' !\n");
        return 0; // Entrada inválida (não há 'V' ou 'F')
    }
    
    if (!temParenteses){
    	printf("Entrada invalida! Coloque parenteses!!\n");
    	return 0;
	}
    
    if (!expressaoBalanceada(expressao)){
    	printf("Entrada invalida! parenteses desbalanceados!\n");
    	return 0;
	}
	
    return 1; // Entrada válida (tem pelo menos um 'V' ou 'F' e só contém caracteres permitidos)
}