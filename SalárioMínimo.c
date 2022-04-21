#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main(int argc, char *argv[]) {
	float SM;
	float S;
	float SM1;
	
	cout <<"Digite o seu salário"<< endl;
	cin >> S;
	
	SM = 788.00;
	SM1 = S/SM;
	
	cout <<"Você ganha " << SM1 << " salário(s) minímo(s) " << endl;
	
	
	return 0;
}
