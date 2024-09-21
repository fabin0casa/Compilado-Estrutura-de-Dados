#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char* invertString(char*);
char* invertS(char*, int, int);

int aula6exercicio17(){
	system(CLEAR);
	l();
	printc("AULA 6 - EXERCICIO 17");
	l();
	printc("Programa que reverte uma frase");
	l();
	
    //Variáveis
    char string[100];

    //Recebendo os dígitos a serem somados
    printf("Digite uma frase para ve-la invertida: ");
    scanf("%[^\n]", string);

    //Invertendo a string
    char* copia = strdup(string);
    char* invertida = invertString(copia);

    printf("\nFrase \"%s\" \nInvertida: %s\n", string, invertida);
    
    free(copia);
    l();
    PAUSE;
    system(CLEAR);
    return 0;
}

//Funcão que inverte uma string
char* invertString(char* msg){
    return invertS(msg, 0, strlen(msg)-1);
}

char* invertS(char* msg, int ini, int fim){
    if(ini == fim){
        return msg;
    }

    char aux = msg[ini];
    msg[ini] = msg[fim];
    msg[fim] = aux;

    return invertS(msg, ini + 1, fim -1);
}
