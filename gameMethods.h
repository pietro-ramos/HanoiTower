#ifndef GAMEMETHODS_H
#define GAMEMETHODS_H


void initializeInitialStack(Stack *initialStack);
void printTowers(Stack *towers[]);
int validateMove(Stack *source, Stack *destination);
void moveDisc(Stack *towers[], int source, int destination);
int checkWin(Stack *towers[]);



#endif
