#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main(int argc, char *argv[]) {

	float media1;
	float media2;
	float media3;

	media1 = (8+9+7)/3;
	cout << "A média aritmética de 8,9 e 7 é " << media1 << endl;

	media2 = (5+6+4)/3;
	cout << "A média aritmética de 5,6 e 4 é " << media2 << endl;

	media3 = (media1+media2)/2;
	cout <<"A média das médias é " << media3 << endl;


	return 0;
}
