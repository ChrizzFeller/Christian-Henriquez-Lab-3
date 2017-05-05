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
			int resp2, cont = 0;
			cout << "Ingrese el tamaño de la matriz: " << endl;
			cin >> resp2;
			int** matriz = new int*[resp2];
			for (int i = 0; i < resp2; i++) {
				for (int j = 0; j < resp2; j++) {
					matriz[i][j] = cont;
					cont++;
				}
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

/*stringstream Convert(unsigned int val)
{
	stringstream ss3;
    unsigned int mask = 1 << (sizeof(int) * 8 - 1);

   for(int i = 0; i < sizeof(int) * 8; i++)
   {
      if( (val & mask) == 0 )
      	ss3 << "0";
      else
      	ss3 << "1";
      	mask >>= 1;
   }
   return ss3;
}*/
