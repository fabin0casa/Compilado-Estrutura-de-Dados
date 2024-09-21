#include <stdio.h>
#include <string.h>
 
int aula2exercicio3(){
    system(CLEAR);
	l();
	printc("AULA 2 - EXERCICIO 3");
	l();
	printc("Programa que inverte a ordem das letras ");
	printc("de uma palavra, mas nao a ordem das palavras em si.");
	l();
    
    printf("Insira a frase que queira inverter suas palavras: ");
    char frase[100], fraseRevertida[100];
    getLine(frase, sizeof(frase));
    
    int tamanhoFrase = strlen(frase);
    Pilha pilhaA = pilha(tamanhoFrase);

	int contador = 0;
	for (int i = 0; i < tamanhoFrase; i++){
		
		if(frase[i] != ' '){
			empilha(frase[i], pilhaA);
			continue;
		}
		
		while(!pilhaEstaVazia(pilhaA)){
			fraseRevertida[contador] = desempilha(pilhaA);
			contador++;
		}
		
		fraseRevertida[contador] = ' ';
		contador++;
		
	}
	
	while(!pilhaEstaVazia(pilhaA)){
		fraseRevertida[contador] = desempilha(pilhaA);
		contador++;
	}

            destroiPilha(&pilhaA);
	
	printf("\nA frase com suas palavras ao contrario eh:\n");
	printf("%s", fraseRevertida);
	
	l();
    PAUSE;
    system(CLEAR);
    return 0;
}
