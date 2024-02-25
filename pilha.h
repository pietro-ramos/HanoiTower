#ifndef PILHA_H
#define PILHA_H


#ifdef _WIN32
    #ifdef BUILDING_DLL
        #define DLLIMPORT __declspec(dllexport)
    #else
        #define DLLIMPORT __declspec(dllimport)
    #endif
#else
    #define DLLIMPORT
#endif

#define MAX_STACK 10

typedef struct {
    int top;
    int capacity;
    float *sElem;
} Stack;

DLLIMPORT Stack* createStack(void);
DLLIMPORT int isEmpty(Stack *s);
DLLIMPORT int isFull(Stack *s);
DLLIMPORT void push(Stack *s, float value);
DLLIMPORT float pop(Stack *s);
DLLIMPORT float top(Stack *s);
DLLIMPORT void printStack(Stack *s);
DLLIMPORT void printStackByIndex(Stack *s[], int index);

#endif

