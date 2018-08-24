/*
 * main.c
 *
 *  Created on: 22 במאי 2018
 *      Author: inbal
 */
/**
#include "parser.h"
#include "game.h"*/
#include "parser.h"
#include "SPBufferset.h"
#include<time.h>
#include <stdio.h>
#include<stdlib.h>
/*
 * gets command from user and call parse.
 */
int GameMode=0;

int main(){
	char str[256];
	printf("Sudoku\n------\n");
	SP_BUFF_SET();
	srand(time(NULL));
	printf("Enter your command:\n");
	while(fgets(str, MAXCommand, stdin)!=NULL)
	{
		parse(str);
		printf("Enter your command:\n");
	}
	/**
	 * exitGame();
	 */

	return 0;
}

