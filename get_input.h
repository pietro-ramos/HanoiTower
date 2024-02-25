#ifndef GET_INPUT_H
#define GET_INPUT_H

#if BUILDING_DLL
#define DLLIMPORT __declspec(dllexport)
#else
#define DLLIMPORT __declspec(dllimport)
#endif

// Funcao para ler entrada como float
float get_float_input(char* prompt);

// Funcao para ler entrada como inteiro
int get_int_input(char* prompt);

// Funcao para ler entrada como caractere
char get_char_input(char* prompt);

// Funcao para ler entrada como string temporiaramente - LIBERAR MEMORIA APOS USO
char* get_tempString_input(char* prompt);

// Funcao para ler entrada como string
void get_string_input(char* prompt, char** input);


#endif
