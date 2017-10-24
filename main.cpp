#include <stdlib.h>
#include <iostream>
#include <fstream>
#include <vector>
#include <time.h>


/* Time variables */
clock_t tBegin, tEnd, tTotal;
using namespace std;

#include "graph.h"

int main(){

    int n = 62;

    int** input = inicializarMatriz(n);
    lerArquivo(input, n);

    //imprimirMatriz(input, n);

    maiorGrau(input, n);
}
