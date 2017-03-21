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
  //Proses Baca
    cout << "Masukan nilai A : "; cin>> a;
  	cout << "Masukan nilai B : ";	cin>> b;

    //Proses tukar
      temp = b;
      b = a;
      a = temp;

      //Proses Tampil
        cout << "=================="<<endl;
        cout << "Nilai A sekarang : " <<a<< endl;
        cout << "Nilai A sekarang : " <<b;

	return 0;

	}
