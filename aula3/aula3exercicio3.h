#include <stdio.h>
#include <ctype.h>
#include <string.h>

int prioridadeEx3(char);
char* transformarParaPosfixaEx3(char*);
int calcularPosfixaEx3(char*);

int aula3exercicio3(void) {
    system(CLEAR);
	l();
	printc("AULA 3 - EXERCICIO 3");
	l();
	printc("Programa que transforma uma expressao infixa ");
	printc("em uma posfixa.");
	printc("Com sistema de prioridade da operacao.");
	printc("E mostrando o resultado da expressao.");
	printc("(programa completo!)");
	printc("exemplo de infixa: (9+7)+(5*6)/(6)");
	l();
    
    char expressao[513];
    printf("Insira a expressao infixa: ");
    do{
    	getLine(expressao, sizeof(expressao));
	}
    while(expressao[0] == '\0' || !validarExpressao(expressao)); //consistir
    
    char *expressaoPosfixa = transformarParaPosfixaEx3(expressao);

    printf("\nExpressao em forma posfixa: %s\n", expressaoPosfixa);
    
    printf("\n\nO calculo da expressao posfixa resultara em: %i", calcularPosfixaEx3(expressaoPosfixa));
    
    l();
    PAUSE;
    system(CLEAR);
    return 0;
}

char* transformarParaPosfixaEx3(char *expressao) {
	
	static char saida[256];
	Pilha pilhaA = pilha(256);
	
	int j = 0;
	for(int i = 0; expressao[i]; i++){
		
		if(expressao[i]=='('){
			empilha('(', pilhaA);
		}
		else if(isdigit(expressao[i])){
			saida[j++] = expressao[i];
		}
		else if(strchr("+-/*",expressao[i])) {
			
			while(!pilhaEstaVazia(pilhaA) && prioridadeEx3(topo(pilhaA)) >= prioridadeEx3(expressao[i])){
				
				saida[j++] = desempilha(pilhaA);
				
			}
			
			empilha(expressao[i], pilhaA);
		}
		else if(expressao[i] == ')') {
			
			while(topo(pilhaA)!='('){
				saida[j++] = desempilha(pilhaA);
			}
			
			desempilha(pilhaA);
		}
	}
	
	while(!pilhaEstaVazia(pilhaA)){
		saida[j++] = desempilha(pilhaA);
	}
	
	saida[j] = '\0';
	
	destroiPilha(&pilhaA);
	
	return saida;
}

int calcularPosfixaEx3(char *e){
    Pilha pilhaB = pilha(256);
    for(int i = 0; e[i]; i++){
    	if(isdigit(e[i])){
        	empilha(e[i] - '0', pilhaB);
		}
        else{
            int y = desempilha(pilhaB);
            int x = desempilha(pilhaB);
            switch(e[i]){
                case '+': empilha(x+y, pilhaB); break;
                case '-': empilha(x-y, pilhaB); break;
                case '*': empilha(x*y, pilhaB); break;
                case '/': empilha(x/y, pilhaB); break;
            }
            
        }
	}
        
    int resultado = desempilha(pilhaB);
    
    destroiPilha(&pilhaB);
    
    return resultado;
}

int prioridadeEx3(char operacao) {
	
	switch(operacao) {
		case '(':
			return 0;
		
		case '+':
		case '-':
			return 1;
			
		case '*':
		case '/':
			return 2;
	}
	
	return -1; // operador inválido!
}
