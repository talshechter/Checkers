#include <string.h>
#include<stdio.h>
#include<stdlib.h>
#include "parser.h"
#include "game.h"
#include "actions.h"

extern int GameMode;

void solve(char* fileName) {
	FILE* fp = NULL;
	fp = fopen(fileName, "r");
	if (fp == NULL ) {
		printf(FILEERROR);
		return;
	}
	GameMode = 1; /*solve mode*/
	createBoard(fp);
	fclose(fp);
}

void edit(char* fileName) {
	FILE* fp = NULL;
	fp = fopen(fileName, "r");
	if (fp == NULL ) {
		printf("Error: File cannot be opened\n");
		/*
		 * Different error than in solve..
		 */
		return;
	}
	GameMode = 2; /*edit mode*/
	createBoard(fp);
	fclose(fp);
}

void editEmpty() {
	GameMode =2;
	createEmptyBoard();
}

/*checked in parser that we are in solve mode, and that
 * this is a number */
void markErrors(int x) {
	if (x!=0 && x!=1){
		printf(MARKERROR);
		return;
	}
	board.markError=x;

}

void printBoard() {
	printf("printboard");
}

void set(int x, int y, int z) {
	printf("set: %d,%d,%d", x, y, z);
}

void printErrorNotInRange() {
	printf("error not in range");
}

void validate() {
	printf("validate");
}

void generate(int x, int y) {
	printf("generate: %d, %d", x, y);
}
void printErrorEmptyCells() {
	printf("error empty cells");
}
void undo() {
	printf("undo");
}
void redo() {
	printf("redo");
}
void save(char* fileName) {
	printf("save: %s", fileName);
}
void hint(int x, int y) {
	printf("hint: %d, %d", x, y);
}
void numSolutions() {
	printf("numsolutions");
}
void autofill() {
	printf("autofill");
}
void reset() {
	printf("reset");
}
void exitGame() {
	printf("exit");
}

