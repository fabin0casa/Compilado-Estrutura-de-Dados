#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

//Funções
char* tirarEspacos(char*);
char* tE(char*, int);
int palindromo(char*);
int pEx18(char*, int, int);


int aula6exercicio18(){
	system(CLEAR);
	l();
	printc("AULA 6 - EXERCICIO 18");
	l();
	printc("Programa que mostra se uma frase eh palindroma");
	l();
	
    //Variáveis
    char frase[100];

    //Recebendo os dígitos a serem somados
    printf("Digite uma frase para ver se ela eh palindroma: ");
    scanf("%[^\n]", frase);


    if(palindromo(frase)){
    	printf("\n");
        printf("\"%s\" eh palindromo\n", frase);
    }else{
    	printf("\n");
        printf("\"%s\" nao eh palidromo\n", frase);
    }

    l();
    PAUSE;
    system(CLEAR);
    return 0;
}

//Função que verifica se uma string eh palindromo ou não
int palindromo(char* msg){
    msg = tirarEspacos(msg);
    return pEx18(msg, 0, strlen(msg)-1);
}

int pEx18(char* msg, int ini, int fim){
    if(ini >= fim){
        return 1;
    }else if(msg[ini] == msg[fim]){
        return pEx18(msg, ini + 1, fim - 1);
    }else{
        return 0;
    }
}

//Função para remover espaços
char* tirarEspacos(char* msg){
    return tE(msg, 0);
}

char* tE(char* msg, int i){
    if(msg[i] == '\0'){
        return msg;
    }
	
	int j=0;

    while(msg[i] == ' ' || msg[i] == ',' || msg[i] == '?' || msg[i] == '!'){ 
        for(j=i; j < strlen(msg); j++){
            msg[j] = msg[j+1];
        }
    }

    msg[i] = toupper(msg[i]);

    return tE(msg, i+1);
}
