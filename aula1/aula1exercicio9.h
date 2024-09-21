#include <stdio.h>
#include <string.h>

int aula1exercicio9(void) {
	system(CLEAR);
	l();
	printc("AULA 1 - EXERCICIO 9");
	l();
	printc("Programa que estabelece uma senha 'abracadabra', ");
	printc("e faz a verificacao quando ela eh inserida.");
	l();
	
    char senha[256];
	printf("Senha: ");
	getLine(senha, sizeof(senha));
    
    if(strcmp(senha,"abracadabra") == 0 )
        puts("Ok!");
    else
        puts("Senha invalida!");
            
    l();
    PAUSE;
    system(CLEAR);
    return 0;
}
