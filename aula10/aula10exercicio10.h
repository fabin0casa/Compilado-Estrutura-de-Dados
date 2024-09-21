#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int aula10exercicio10(void) {
    system(CLEAR);
	l();
	printc("AULA 10 - EXERCICIO 10");
	l();
	printc("Programa para testar a refatoracao do 'map.h',");
	printc("adaptado para lidar apenas com strings");
	l();
    Map I = NULL;
    
    inserirNoMapaS("chave1","Leo",&I);
    inserirNoMapaS("chave2","Ivo",&I);
    inserirNoMapaS("chave3","Eva",&I);
    inserirNoMapaS("chave4","Ana",&I);


    exibirMapaS(I);
    
	l();
    PAUSE;
    system(CLEAR);
    return 0;
}
