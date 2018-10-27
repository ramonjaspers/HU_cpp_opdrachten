#include <iostream>
using namespace std;

int main(){
	char letter = 'a';
	for(int i=0; i < 26; i++){
		cout << char(letter + i) << ", ";
	}
}

/*
Beschrijf in één zin wat de onderstaande code doet.
*Je zet de variabele letter op character a, daarnaa tel je steeds 1 bij de character op tot 26 (z) met comma's ertussen. (een loop)
*/