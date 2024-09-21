#include <stdio.h>
#include <string.h>
 
int aula2exercicio3_1() {
    system(CLEAR);
	l();
	printc("AULA 2 - EXERCICIO 3.1");
	l();
	printc("Versao alternativa do exercicio 3,");
	printc("adicionada aqui por ter dado muito trabalho.");
	l();
	
    char frase[100];
    
    printf("Insira a frase: ");
    getLine(frase, sizeof(frase));
    
    Pilha pilhaDeChar = pilha(100);
    Pilha pilhaDeCharReversa = pilha(100);
    
    for(int i = 0; i < strlen(frase); i++){
        empilha(frase[i], pilhaDeChar);
    }

    
    char fraseReversa[100];
    
    
    for(int i = 0; i < strlen(frase); i++){
        empilha(topo(pilhaDeChar), pilhaDeCharReversa);
        fraseReversa[i] = topo(pilhaDeCharReversa);
        desempilha(pilhaDeChar);
    }
    
    
    int contador = strlen(frase);
    for(int i = strlen(frase); i > -2; i--){

    
        if (fraseReversa[i] == ' ' || i == -1){
            for(int j = i + 1; j < contador; j++){
                
                if (fraseReversa[j] != ' '){
                empilha(fraseReversa[j], pilhaDeChar);
                }
                
            }
            contador = i;
            empilha(' ', pilhaDeChar);
        }
 
    }
    
    printf("\nFrase com as letras das palavras ao contrario:\n\n");
    for(int i = 0; i < strlen(fraseReversa); i++){
        printf("%c", pilhaDeChar->elementos[i]);
    }

	destroiPilha(&pilhaDeChar);
	destroiPilha(&pilhaDeCharReversa);
	
	l();
    PAUSE;
    system(CLEAR);
    return 0;
  
}
