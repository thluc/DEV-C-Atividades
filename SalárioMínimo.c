#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main(int argc, char *argv[]) {
	float SM;
	float S;
	float SM1;
	
	cout <<"Digite o seu sal�rio"<< endl;
	cin >> S;
	
	SM = 788.00;
	SM1 = S/SM;
	
	cout <<"Voc� ganha " << SM1 << " sal�rio(s) min�mo(s) " << endl;
	
	
	return 0;
}
