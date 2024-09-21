#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int aula10exercicio9(void) {
    system(CLEAR);
	l();
	printc("AULA 10 - EXERCICIO 9");
	l();
	printc("Programa para testar a refatoracao do 'map.h',");
	printc("adaptado para lidar apenas com valores inteiros");
	l();
	
    Map I = NULL;
    
    inserirNoMapa(36,1111,&I);
    inserirNoMapa(15,2222,&I);
    inserirNoMapa(42,3333,&I);
    inserirNoMapa(29,4444,&I);

    exibirMapa(I);
    
    l();
    PAUSE;
    system(CLEAR);
    return 0;
}
