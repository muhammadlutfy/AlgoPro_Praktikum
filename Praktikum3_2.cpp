#include <iostream>

using namespace std;
//prototype

  void Pbaca ();
  void Ptukar();
  void Ptampil ();

  //definisi global
  int a,b, temp;

  //Proses Utama
  int main() {

	Pbaca ();
	Ptukar ();
	Ptampil ();
	return 0;

	}

//proses membaca

	void Pbaca () {

	cout << "Masukan nilai A : ";
	cin>> a;
	cout << "Masukan nilai B : ";
	cin>> b;

	}


	//proses tukar

	void Ptukar () {
	temp = b;
	b = a;
	a = temp;

	}

	//proses tampil

	void Ptampil () {

	cout << "=================="<<endl;
	cout << "Nilai A sekarang : " <<a<< endl;
	cout << "Nilai A sekarang : " <<b;

			}
