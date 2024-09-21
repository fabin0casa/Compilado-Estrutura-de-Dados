#include <stdio.h>
#include <ctype.h>
#include <string.h>

char* transformarParaPosfixaEx1(char*);

int aula3exercicio1(void) {
	system(CLEAR);
	l();
	printc("AULA 3 - EXERCICIO 1");
	l();
	printc("Programa que transforma uma expressao infixa ");
	printc("em uma posfixa.");
	printc("exemplo de infixa: (9+7)+(5*6)/(6)");
	l();
    
    char expressao[513];
    printf("Insira a expressao infixa (com parenteses!!): ");
    
    do{
    	getLine(expressao, sizeof(expressao));
	}
    while(expressao[0] == '\0' || !validarExpressao(expressao)); //consistir
    
    
    printf("\nExpressao em forma posfixa: %s\n", transformarParaPosfixaEx1(expressao));
    
    l();
    PAUSE;
    system(CLEAR);
    return 0;
}

char* transformarParaPosfixaEx1(char *expressao) {
	static char saida[256];
	Pilha P = pilha(256);
	
	int j = 0;
	for(int i = 0; expressao[i]; i++){
		
		if(expressao[i] == '('){
			empilha('(', P);
		}
		else if(isdigit(expressao[i])){
			saida[j++] = expressao[i];
		}
		else if(strchr("+-/*", expressao[i])) {
			empilha(expressao[i], P);
		}
		else if(expressao[i] == ')') {
			while(topo(P) != '('){
				saida[j++] = desempilha(P);
			}
			desempilha(P);
		}
	}
	
	while(!pilhaEstaVazia(P)){
		saida[j++] = desempilha(P);
	}
	
	saida[j] = '\0';
	
	destroiPilha(&P);
	       
	return saida;
}
