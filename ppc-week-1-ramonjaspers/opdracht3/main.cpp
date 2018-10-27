#include <iostream>
using namespace std;

int main(){
	int number = 65;
	while( number < 90){
		if(number < 70){
			number = 70;
		}else if( number < 80){
			number++;
		}
		number += 3;
	}
	cout << number << "\n";
}


/*
In de onderstaande code krijgt de variabele number verschillende waarden. Schrijfdeze waarden in goede volgorde op.
 * eind waarde is 90
 * 65 -> 70 -> 73 -> 74 -> 77 -> 78 -> 81 -> 84 -> 87 -> 90

*/