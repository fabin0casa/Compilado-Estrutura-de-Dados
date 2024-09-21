#include <stdio.h>
#include <ctype.h>
#include <string.h>

char* transformarParaPosfixaEx2(char*);
int prioridadeEx2(char);

int aula3exercicio2(void) {
	system(CLEAR);
	l();
	printc("AULA 3 - EXERCICIO 2");
	l();
	printc("Programa que transforma uma expressao infixa ");
	printc("em uma posfixa.");
	printc("Com sistema de prioridade da operacao.");
	printc("exemplo de infixa: (9+7)+(5*6)/(6)");
	l();
     
    char expressao[513];
    printf("Insira a expressao infixa: ");
    do{
    	getLine(expressao, sizeof(expressao));
	}
    while(expressao[0] == '\0' || !validarExpressao(expressao)); //consistir
       
    printf("\nExpressao em forma posfixa: %s\n", transformarParaPosfixaEx2(expressao));
    
	l();
    PAUSE;
    system(CLEAR);
    return 0;
}

char* transformarParaPosfixaEx2(char* expressao) {
	
	static char saida[256];
	Pilha P = pilha(256);
	
	int j = 0;
	for(int i = 0; expressao[i]; i++){
		
		if(expressao[i]=='('){
			empilha('(', P);
		}
		else if(isdigit(expressao[i])){
			saida[j++] = expressao[i];
		}
		else if(strchr("+-/*",expressao[i])) {
			
			while(!pilhaEstaVazia(P) && prioridadeEx2(topo(P)) >= prioridadeEx2(expressao[i])){
				      
				saida[j++] = desempilha(P);
				
			}
			
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

int prioridadeEx2(char operacao) {
	
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

