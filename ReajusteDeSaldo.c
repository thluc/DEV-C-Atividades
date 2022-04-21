#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main(int argc, char *argv[]) {
	float saldo;
	float rds;
	
	cout << "Digite o seu saldo" << endl;
	cin >> saldo;
	
	rds = saldo * 1.01;
	cout << "Seu novo saldo é de " << rds << endl;
	
	return 0;
}
