#include <stdio.h>
#include <ctype.h>
#include <string.h>

int prioridadeEx6(char);
char* transformarParaPrefixaEx6(char*);
int calcularValorPrefixa(char*);

void strrevEx6(char *str) {
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++) {
        char temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
}

int aula3exercicio6(void) {
    system(CLEAR);
	l();
	printc("AULA 3 - EXERCICIO 6");
	l();
	printc("Programa completo para a transformacao ");
	printc("de expressoes prefixas.");
	printc("exemplo de infixa: (9+7)+(5*6)/(6)");
	l();
    
    char expressao[513];
    printf("Insira a expressao infixa: ");
    do{
    	getLine(expressao, sizeof(expressao));
	}
    while(expressao[0] == '\0' || !validarExpressao(expressao)); //consistir
    
    printf("\nExpressao em forma prefixa: %s\n", transformarParaPrefixaEx6(expressao));
    printf("O resultado dessa expressao eh: %i\n", calcularValorPrefixa(transformarParaPrefixaEx6(expressao)));
    
    l();
    PAUSE;
    system(CLEAR);
    return 0;
}

int prioridadeEx6(char operacao) {
	
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

char* transformarParaPrefixaEx6(char *expressao) {
	
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
			
			while(!pilhaEstaVazia(P) && prioridadeEx6(topo(P)) >= prioridadeEx6(expressao[i])){
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
	
	strrevEx6(saida);
	
	destroiPilha(&P);
	
	return saida;
}

int calcularValorPrefixa(char* expressao){
	
	Pilha P = pilha(256);
	for(int i = (strlen(expressao) - 1); i >= 0; i--){
		
		if(isdigit(expressao[i])){
			empilha(expressao[i]-'0',P);
		}
		else {
			int x = desempilha(P);
			int y = desempilha(P);
			
			switch(expressao[i]) {
				case '+': empilha(x+y,P); break;
				case '-': empilha(x-y,P); break;
				case '*': empilha(x*y,P); break;
				case '/': empilha(x/y,P); break;
			}
		}
	}
	
	int resultado = desempilha(P);
	destroiPilha(&P);
	
	return resultado;
}
