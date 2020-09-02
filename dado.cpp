//Breno Augusto

#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main(){
	int lados;
	int tentativas;
	
	srand (time(NULL));
	//usar o tempo como seed para a aleatorizar
	
	do{
	
		cout << "Dado de quantos lados?: ";
		cin >> lados;

		system("cls");
	
	}while (lados <= 0);
	//repetição pra usuario espertinho
		
	do{
		
		do{
		
		cout << "Quantas jogadas?: ";
		cin >> tentativas;
	
		system("cls");
		
		}while(tentativas <= 0);
		//repetição para usuario espertinho
		
		for(int i = 0; i < tentativas; i++){
			
				
			cout << "Resultado: " << rand() % lados + 1 << endl;
			// + 1 para poder excluir o 0 
				
		}
	
	cout << endl;
	system("Pause");	
	system("cls");
	//pra deixar bonitinho
		
	}while (tentativas != 0);
	
	return 0;
}
