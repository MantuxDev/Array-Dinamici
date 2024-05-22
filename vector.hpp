#pragma once

#include <vector>
using std::vector;

// Prototipi 
int menu();
void caricamento(vector<int> &v);
void stampa(vector<int> v);
void add(vector<int> &v);
void remove(vector<int> &v);
void next();

// Colori
#define RED      "\033[31m"
#define GREEN    "\033[32m"
#define BLUE     "\033[34m"
#define RESET    "\033[0m"


