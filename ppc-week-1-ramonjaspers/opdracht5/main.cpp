#include <iostream>
using namespace std;

int main5(){
	char input;
	cout << "Geef een character:";
	cin >> input;
	
	int som1 = char(int(input)) + 32;
	char som2 = char(som1);
	cout << "b + 32 =" << som1 << "\n";
	cout << "b + 32 =" << som2 << "\n";
	return 0;
}

