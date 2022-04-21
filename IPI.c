#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main(int argc, char *argv[]) {
	
	string prod1;
	float pr1;
	float perc1;
	string prod2;
	float pr2;
	float perc2;
	float per1;
	float per2;
	
	cout <<"Digite o nome do produto: " << endl;
	cin >> prod1;
	
	cout <<"Digite o preço do produto: " << endl;
	cin >> pr1;
	
	cout <<"Digite o percentual do produto: "<< endl;
	cin >> per1;
	
	cout <<"Digite o nome do segundo produto: " << endl;
	cin >> prod2;
	
	cout <<"Digite o preço do segundo produto: "<< endl;
	cin >> pr2;
	
	cout <<"Digite o percentual do segundo produto: "<< endl;
	cin >> per2;
	
	perc1 = pr1 + (pr1*per1)/100;
	perc2 = pr2 + (pr2*per2)/100;
	
	cout << "O valor total do primeiro produto é de "<< perc1 << endl;
    cout <<"O valor total do segundo produto é de " << perc2 << endl;
    
	return 0;
}
