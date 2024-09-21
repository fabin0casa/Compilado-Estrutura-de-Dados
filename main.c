#include <stdio.h>
#include "bibliotecas/arv.h"
#include "bibliotecas/fila.h"
#include "bibliotecas/map.h"
#include "bibliotecas/mapInteger.h"
#include "bibliotecas/mapString.h"
#include "bibliotecas/dic.h"
#include "bibliotecas/pilha.h"
#include "bibliotecas/lista.h"
#include "bibliotecas/util.h"
#include "aula1/submenu1.h"
#include "aula2/submenu2.h"
#include "aula3/submenu3.h"
#include "aula4/submenu4.h"
#include "aula5/submenu5.h"
#include "aula6/submenu6.h"
#include "aula7/submenu7.h"
#include "aula8/submenu8.h"
#include "aula9/submenu9.h"
#include "aula10/submenu10.h"
#include "aula11/submenu11.h"
#include "aula12/submenu12.h"

void info();

int main() {
	SETTITLE("Estrutura de Dados");
	system(CLEAR);
	setTextColor(15);
	while(1){
		l();
		printMenuPrincipal();
	    l();
	    printc("Bem Vindo! Este eh um compilado de exercicios feitos para a"); 
		printc("materia de Estrutura de Dados, selecione a aula do qual");
		printc("deseja executar os exercicios:");
	    l();
		setTextColor(4);
		printf("      1) Introducao\n");
		setTextColor(12);
		printf("      2) Pilhas\n");
		setTextColor(6);
		printf("      3) Aplicacoes em Pilha\n");
		setTextColor(14);
		printf("      4) Filas\n");
		setTextColor(2);
		printf("      5) Coloracao\n");
		setTextColor(10);
		printf("      6) Recursao\n");
		setTextColor(11);
		printf("      7) Ordenacao\n");
		setTextColor(3);
		printf("      8) Listas Encadeadas\n");
		setTextColor(9);
		printf("      9) Listas Ordenadas\n");
		setTextColor(1);
		printf("     10) Mapeamentos\n");
		setTextColor(5);
		printf("     11) Dicionario\n");
		setTextColor(13);
		printf("     12) Arvores Binarias\n");
		setTextColor(7);
		printf("     13) Informacoes e creditos\n");
		setTextColor(8);
		printf("      0) Sair\n");

		setTextColor(15);
		l();
		int opcao = 0;
		opcao = lerInteiro();
		l();
		switch (opcao){
			case 0:
				
			 	system(CLEAR);
			 	l();
				printc("Deseja mesmo sair?");
				l();
				setTextColor(2);
				printf("      1) Continuar no programa\n");
				setTextColor(8);
				printf("      0) Sair\n");
				setTextColor(15);
				l();
				opcao = lerInteiro();
				if(opcao == 0) {
					printc("Obrigado!!\n");
					l();
					return 0;
				}
				else {
					system(CLEAR);
					break;
				}
				
			case 1: submenu1();break;
			case 2: submenu2();break;
			case 3: submenu3();break;
			case 4: submenu4();break;
			case 5: submenu5();break;
			case 6: submenu6();break;
			case 7: submenu7();break;
			case 8: submenu8();break;
			case 9: submenu9();break;
			case 10: submenu10();break;
			case 11: submenu11();break;
			case 12: submenu12();break;
			case 13: info(); break;
			default: 
				system(CLEAR);
				printc("opcao invalida!!");
				break;
		
		}
	}
    return 0;
}

void info(){
	setTextColor(6);
	system(CLEAR);
	l();
	printc("	        _ _ _           ");
	printc(" ___ ___ ___ _| |_| |_ ___ ___ ");
	printc("|  _|  _| -_| . | |  _| . |_ -|");
	printc("|___|_| |___|___|_|_| |___|___|");
	l();
	setTextColor(14);
	printc("Projeto Mega Compilado de Estrutura de Dados");
	printc("- Fatec Mogi das Cruzes");
	setTextColor(10);
    printf("\nEste projeto eh um mega compilado de todos os exercicios ");
    printf("\nda disciplina de Estrutura de Dados, dada pelo Professor Fretz");
    printf("\nrealizados por nosso grupo da Fatec Mogi das Cruzes.");
    printf("\nOs exercicios foram feitos em colaboracao por: ");
    setTextColor(6);
    printf("\n\n  Fabio Casagrande\n");
    printf("  Nattan Silva de Souza\n");
    printf("  Joao Salvador Neto\n");
    printf("  Lucas Gomes Dias\n");
	setTextColor(11);
    printf("\nCada exercicio foi refatorado para se encaixar em um padrao de \n");
    printf("menus unificado, que facilita a navegacao e a execucao das \n");
    printf("diferentes funcionalidades. Um aspecto interessante do projeto \n");
    printf("eh que muitos dos exercicios foram originalmente desenvolvidos \n");
    printf("sem a necessidade de input do usuario, sendo pensados para testar\n");
    printf("as funcionalidades de varias bibliotecas fornecidas \n");
    printf("pelo professor Fretz.\n\n");
	setTextColor(14);
    printf("Diversas bibliotecas foram incluidas neste projeto, entre elas:\n");
    printf("- pilha.h\n");
    printf("- fila.h\n");
    printf("- lista.h\n");
    printf("- map.h\n");
    printf("- dic.h\n");
    printf("- arv.h\n");
    printf("Alem disso, foi criada uma biblioteca util.h para fornecer \n");
    printf("funcoes comuns utilizadas em varias partes do projeto.\n\n");
	setTextColor(10);
    printf("O projeto foi desenvolvido para ser compativel tanto em sistemas\n");
    printf("Windows quanto Linux, garantindo portabilidade nativa entre \n");
    printf("essas plataformas.\n\n");
	setTextColor(11);
    printf("Embora os exercicios originais tenham sido desenvolvidos em\n");
    printf("conjunto com meus amigos, toda a refatoracao dos exercicios,\n");
    printf("a criacao dos menus e o trabalho de unificacao foi ideia\n");
    printf("minha, e feito inteiramente por mim, Fabio Casagrande.\n");
    printf("Como uma lembranca de nosso tempo que passamos juntos resolvendo \n");
    printf("os exercicios, que nao foram faceis de serem feitos :)\n");
    setTextColor(6);
	l();
	setTextColor(15);
	PAUSE;
	system(CLEAR);
	return;
}
