#include <stdio.h>
#include <ctype.h>
#include <string.h>

int prioridadeEx5(char);
char* transformarParaPrefixaEx5(char*);

void strrevEx5(char *str) {
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++) {
        char temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
}


int aula3exercicio5(void) {
    system(CLEAR);
	l();
	printc("AULA 3 - EXERCICIO 5");
	l();
	printc("Programa que transforma uma expressao infixa ");
	printc("em uma prefixa (que eh diferente de posfixa).");
	printc("exemplo de infixa: (9+7)+(5*6)/(6)");
    l();
    
    char expressao[513];
    printf("Insira a expressao infixa: ");
    do{
    	getLine(expressao, sizeof(expressao));
	}
    while(expressao[0] == '\0' || !validarExpressao(expressao)); //consistir
    
    printf("\nExpressao em forma prefixa: %s\n", transformarParaPrefixaEx5(expressao));
    
    l();
    PAUSE;
    system(CLEAR);
    return 0;
}

int prioridadeEx5(char operacao) {
	
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

char* transformarParaPrefixaEx5(char *expressao) {
	
	static char saida[256];
	Pilha P = pilha(256);
	
	int j = 0;

	for(int i = (strlen(expressao) - 1); i >= 0; i--){
		
		if(expressao[i]==')'){
			empilha(')', P);
		}
		else if(isdigit(expressao[i])){
			saida[j++] = expressao[i];
		}
		else if(strchr("+-/*",expressao[i])) {
			
			while(!pilhaEstaVazia(P) && prioridadeEx5(topo(P)) >= prioridadeEx5(expressao[i])){
				saida[j++] = desempilha(P);
				
			}
			
			empilha(expressao[i], P);
		}
		else if(expressao[i] == '(') {
			
			while(topo(P) != ')'){
				saida[j++] = desempilha(P);
			}
			
			desempilha(P);
		}
	}
	
	while(!pilhaEstaVazia(P)){
		saida[j++] = desempilha(P);
	}
	
	saida[j] = '\0';
	
	strrevEx5(saida);
	
	destroiPilha(&P);
	
	return saida;
}
