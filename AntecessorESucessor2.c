#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main(int argc, char *argv[]) {
	
	
	int N;
	
	cout << "Digite um número" << endl;
	cin >> N;
	
	cout << "Seu antecessor é " << (N-1) << endl;
	cout << "E seu sucessor é " << (N+1) << endl;
	
	return 0;

}
