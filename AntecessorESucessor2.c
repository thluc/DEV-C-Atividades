#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main(int argc, char *argv[]) {
	
	
	int N;
	
	cout << "Digite um n�mero" << endl;
	cin >> N;
	
	cout << "Seu antecessor � " << (N-1) << endl;
	cout << "E seu sucessor � " << (N+1) << endl;
	
	return 0;

}
