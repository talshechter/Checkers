/*
 * game.c
 *
 *  Created on: 22 баев 2018
 *      Author: inbal
 */
#include "game.h"
#include "actions.h"
#include <stdio.h>
#include <stdlib.h>



extern int GameMode;
/*
 * asks user for number of cells to fill until a valild number is given.
 * allocates memory for puzzle and solution boards.
 * creates a new board with random back tracking and prints the board.
 */

void createBoard(FILE* fp)
{
	int row=0, col=0;
	int i,j;
	fscanf(fp, "%d %d", &row , &col);
	/** row is number of row in small block  row=m , col=n */
	board.solved=0;

	board.row =row;
	board.col = col;
	board.N = row*col;
	/**allocate memory for boards*/
	board.gameBoard= calloc(board.N, sizeof(Cell*));
	if (board.gameBoard== NULL){
		printf(CALLOC);
		exit(1);
	}
	for (i=0; i<board.N; i++){
		board.gameBoard[i] = calloc(board.N, sizeof(Cell));
		if (board.gameBoard[i]== NULL){
				printf(CALLOC);
				exit(1);
			}
	}

	for(i =0; i<board.N; i++){
		for (j=0; j<board.N; j++){

		}
	}
	printBoard();

}


