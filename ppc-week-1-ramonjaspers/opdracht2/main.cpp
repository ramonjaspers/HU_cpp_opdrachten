#include <iostream>
using namespace std;

int main(){
	int y = 18 / 5;
	int z = 18 / 5.0;
	float t = 18 / 5;
	float s = 18 / 5.0;
	int x = 10 % 3;
	bool b = true && (false || true);
	cout << y << "\n" << z << "\n" << t << "\n" << s << "\n" << x << "\n"<< b; 
}


/*
Schrijf de waarde op van de variabelen aan het einde van het onderstaande stukje code:
 * y=3
 * z=3.6
 * t=3.0
 * s=3.6
 * x=1
 * b=1(true)

De expressie % staat niet uitgelegd in de reader. Hoe heet deze rekenkundige operatora en wat doet het?
 * dat is de modulo die toont aan wat er overblijft na een deling
*/