#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"
#include "get_input.h"
#include "gameMethods.h"

#define NUM_TOWERS 3

int main(int argc, char *argv[]) {
	Stack *towers[NUM_TOWERS];
	
	for (int i = 0; i < NUM_TOWERS; i++)
	{
		towers[i] = createStack();
	}
	
	initializeInitialStack(towers[0]);
	
	int choice;
		
	while (1)
	{
		printTowers(towers);
		
		// menu
		printf("\n Move menu: \n");
		printf("1. Move disc from stack 1 to stack 2\n");
		printf("2. Move disc from stack 1 to stack 3\n");
		printf("3. Move disc from stack 2 to stack 1\n");
		printf("4. Move disc from stack 2 to stack 3\n");
		printf("5. Move disc from stack 3 to stack 1\n");
		printf("6. Move disc from stack 3 to stack 2\n");
		choice = get_int_input("\nChoose an option (1-6) to move or '0' to quit: '\n");
		
		switch(choice)
		{
			case 1:
				moveDisc(towers, 0, 1);
				break;
			case 2:
				moveDisc(towers, 0, 2);
				break;
			case 3:
				moveDisc(towers, 1, 0);
				break;
			case 4:
				moveDisc(towers, 1, 2);
				break;
			case 5:
				moveDisc(towers, 2, 0);
				break;
			case 6:
				moveDisc(towers, 2, 1);
				break;
			case 0:
				printf("Exiting the game...\n");
				exit(0);
			default:
				printf("Invalid option. Please choose a valid one.\n");
			break;
		}
		
		// Check Win
		if (checkWin(towers))
		{
			printf("Congratulations! You won the game!\n");
			break;
		}
		
	}
	
	for (int i = 0; i < NUM_TOWERS; i++)
	{
		free(towers[i]->sElem);
		free(towers[i]);
	}
	
	return 0;
}
