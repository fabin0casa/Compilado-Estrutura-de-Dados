#include <stdio.h>
#include <ctype.h>
#include <string.h>

char* transformarParaPosfixaBooleana(char*);
int calcularValor(char*);

int aula3exercicio4(void) {
    system(CLEAR);
	l();
	printc("AULA 3 - EXERCICIO 4");
	l();
	printc("Programa que transforma uma expressao BOOLEANA inserida, ");
	printc("em uma posfixa.");
	printc("ex. de espressao booleana: (V|F&V|F)");
	l();
    
    char expressao[513];
    printf("Insira a expressao booleana: ");
    do{
    	getLine(expressao, sizeof(expressao));
	}
    while(expressao[0] == '\0' || !validarExpressaoLogica(expressao));
    
    printf("\nExpressao em forma posfixa: %s\n", transformarParaPosfixaBooleana(expressao));
    printf("O resultado dessa expressao eh: %i\n", calcularValor(transformarParaPosfixaBooleana(expressao)));
    
    l();
    PAUSE;
    system(CLEAR);
    return 0;
}


char* transformarParaPosfixaBooleana(char* expressao) {
    
    static char saida[256];
    Pilha P = pilha(256);
    
    int j = 0;
    for (int i = 0; expressao[i]; i++){
    	if(expressao[i] == '('){
			empilha('(', P);
		}
        else if(expressao[i] == 'V' || expressao[i] == 'F'){
            saida[j++] = expressao[i];
        } 
        else if(strchr("!&|", expressao[i])){
            empilha(expressao[i], P);
        }
        else if(expressao[i] == ')'){
            while(topo(P) != '('){
				saida[j++] = desempilha(P);
			}
        }
    }
    
    saida[j] = '\0';
    
    destroiPilha(&P);
    
    return saida;
}

int calcularValor(char* expressao){
	
	Pilha P = pilha(256);
	for(int i = 0; expressao[i]; i++){
		
		if(expressao[i] == 'V'){
			empilha(1, P);
			continue;
		}
		
		if (expressao[i] == 'F'){
			empilha(0, P);
			continue;
		}
		
		int x = 0;
		int y = 0;
		
		switch(expressao[i]) {
			case '!':
				x = desempilha(P);
				
				if (x == 1){
					empilha(0, P);
				} else {
					empilha(1, P);
				}
				
				break;
			
			case '&':
				x = desempilha(P);
				y = desempilha(P);
				
				if (x == 1 && y == 1){
					empilha(1, P);
				} else {
					empilha(0, P);
				}
				
				break;
				
			case '|':
				x = desempilha(P);
				y = desempilha(P);
				
				if (x == 0 && y == 0){
					empilha(0, P);
				} else {
					empilha(1, P);
				}
				
				break;
		}
	}
	
	int resultado = desempilha(P);
	destroiPilha(&P);
	
	return resultado;
}



