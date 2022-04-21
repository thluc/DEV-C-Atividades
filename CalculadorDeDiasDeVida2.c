#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main(int argc, char *argv[]) {
	
	int idade;
	int dia;
	int mes;
	int adv;
	int ano;
	
	cout << "Digite a sua idade" << endl;
	cin >> idade;
	
	cout << "Digite o mês em que você nasceu" << endl;
	cin >> mes;
	
	cout <<"Digite o dia" << endl;
	cin >> dia;
	
	adv = idade * 365 + mes * 30 + dia;
	
	cout << "Você tem "<< adv << " dias de vida"<< endl;
	
	return 0;
}
