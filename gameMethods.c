#include <stdio.h>
#include "pilha.h"
#define NUM_DISCS 5


// Initializing the first stack with discs in descending order
void initializeInitialStack(Stack *initialStack)
{
	for (int i = NUM_DISCS; i > 0; i--)
	{
		push(initialStack, i);
	}
}

void printTowers(Stack *towers[])
{
	printf("Stack 1: \n");
	printStackByIndex(towers, 0);
	printf("\nStack 2: \n");
	printStackByIndex(towers, 1);
	printf("\nStack 3: \n");
	printStackByIndex(towers, 2);

}

int validateMove(Stack *source, Stack *destination)
{
	if (isEmpty(source))
	{
		printf("Empty source stack!\n");
		return 0;
	}
	else if (!isEmpty(destination) && top(source) > top(destination))
	{
		printf("Invalid move! Larger disc on top of smaller disc.\n");
		return 0;
	}
	
	return 1;
}

void moveDisc(Stack *towers[], int source, int destination)
{
	Stack *sourceStack = towers[source];
	Stack *destinationStack = towers[destination];
	if (validateMove(sourceStack, destinationStack))
	{
		push(destinationStack, pop(sourceStack));
	}
}

int checkWin(Stack *towers[])
{
	return isEmpty(towers[0]) && isEmpty(towers[1]);
}


