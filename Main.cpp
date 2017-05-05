#include <iostream>
#include <math.h>
#include <string>
#include <sstream>
#include <bitset>

using namespace std;

int menu();
//int Convert(int);

int main() {
	int resp = menu();
	while (resp != 3) {
		if (resp == 1) {
			int numeroI, numeroB, cont = 0;//Numero ingresado, Numero binario
			string stringB;
			cout << "Ingrese un numero: " << endl;
			cin >> numeroI;
			stringstream ss, ss2;
			cout << "Los numeros malvados son: ";
			for (int i = 0; i <= numeroI; ++i)
			{
				cont = 0;
				stringB = bitset<8>(i).to_string();
				for (int j = 0; j < stringB.size(); ++j)
				{
					if (stringB[j] == '1')
					{
						cont++;
					} else {
					}
				}
				if (cont % 2 == 0)
				{
					cout << i << ", ";
				}
			}
			cout << endl;
		} else if (resp == 2)
		{
			int resp2, cont = 0, temp;
			cout << "Ingrese el tamaño de la matriz: " << endl;
			cin >> resp2;
			int matrix[resp2][resp2];
			for (int i = 0; i < resp2; i++) {
				for (int j = 0; j < resp2; j++) {
					matrix[i][j] = cont;
					cont++;
				}
			}
			for ( int i = 0; i < resp2; i++ ) {
	        	for ( int j = i + 1; j < resp2; j++ ) {
	            		int tmp = matrix[i][j];
	            		matrix[i][j] = matrix[j][i];
	            		matrix[j][i] = tmp;
	        	}
	    	}
			for ( int i = 0; i < resp2; i++ ) {
    			for ( int j = 0; j < resp2/2; j++ ) {
        				int tmp = matrix[i][j];
        				matrix[i][j] = matrix[i][resp2-1-j];
        				matrix[i][resp2-1-j] = tmp;
    			}
			}
			for ( int i = 0; i < resp2; i++ ) {
	            for ( int j = 0; j < resp2; j++ ) {
	            	cout << "["  << matrix[i][j] << "] ";
	            }
				cout << endl;
	        }
		}
		resp = menu();
	}
	return 0;
}

int menu() {
	cout << "-------Menu-------\n";
	cout << "1) Ejercicio 1\n";
	cout << "2) Ejercicio 2\n";
	cout << "3) Salir\n";
	int resp;
	cin >> resp;
	return resp;
}

//a