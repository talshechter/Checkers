#include <string.h>
#include<stdio.h>
#include<stdlib.h>
#include "parser.h"
#include "game.h"

extern int GameMode;

void solve(char* fileName) {
	printf("solve: %s", fileName);
}

void edit(char* fileName) {
	printf("edit: %s", fileName);
}

void editEmpty() {
	printf("edit empty");
}

void markErrors(int x) {
	printf("mark errors: %d", x);
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

