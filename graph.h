int** inicializarMatriz(int n){
    
    int** mat = (int**) malloc(n*sizeof(int*));
    
    for (int i = 0; i < n; i++){
        
        mat[i] = (int*) malloc(n*sizeof(int));
        
        for(int j = 0; j < n; j++){
            
            if(i == j){
                mat[i][j] = 2;
            } else{
                mat[i][j] = 0;
            }
        }
    }
    
    return mat;
}

void lerArquivo(int** input, int size){
    
	std::fstream myfile("datasets/dolphins/dolphins.paj", std::ios_base::in);
	std::vector<int> numbers;

    int x, y;
    char c;
    //myfile >> x
	
    while (myfile >> x >> y)
    {
		numbers.push_back(x);
		numbers.push_back(y);
    }

	for(int i = 0; i < numbers.size(); i+=2)
	{
	    int v1 = numbers[i] -1 ;
	    int v2 = numbers[i+1] - 1;
	    
		input[v1][v2] = 1;
		input[v2][v1] = 1;
	}
	
}

//Printa Matrizes
void imprimirMatriz(int** input, int n){
    
    for (int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << input[i][j] << " ";
        }
        cout << endl;
    }
}

int maiorGrau(int** input, int n) {
    
    int maiorGrau = 0;
    int verticeMaiorGrau = 0;
    int contador = 0;

    for (int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){

            if(input[i][j] == 1){
                contador++;
            }
        }
        
        if(contador >= maiorGrau){
            maiorGrau = contador;
            verticeMaiorGrau = i;
        }

        contador = 0;
    }

    cout << "O vértice de maior grau é " << verticeMaiorGrau << " com grau " << maiorGrau << endl;
    
    return verticeMaiorGrau;
}