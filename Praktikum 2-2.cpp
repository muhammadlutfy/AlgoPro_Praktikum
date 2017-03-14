#include <iostream>		//Library
#define PHI 3.14 //konstanta

using namespace std;
	int main () { //Fungsi

		float jari_jari, luas;
		jari_jari = 25;

		luas = 0.5*PHI* jari_jari * jari_jari;

		cout << "Data lingkaran" <<endl;
		cout << "Jari - Jari = " <<jari_jari <<endl;
		cout << "Luas = "<< luas <<endl;
		
		cin.get();
		return 0;
	}
