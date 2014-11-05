#ifndef EVALUADOR_H
#define EVALUADOR_H

#include <iostream>       // std::cin, std::cout
#include <stack>          // std::stack
using namespace std;

void evaluar();

bool esMayuscula(char letra);
bool sonMayusculas(string palabra);
void elevarAlCuadrado(int* num);
int getMayor(int* a, int* b, int* c);
#endif // EVALUADOR_H
