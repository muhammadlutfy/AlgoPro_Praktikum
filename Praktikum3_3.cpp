#include <iostream>

using namespace std;
//prototype

  void Pbaca ();
  int Ptambah();
  int Pkurang();
  void Ptampil ();

  //definisi global
  int a,b;

  //Proses Utama
  int main() {

	   Pbaca ();
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


	//proses tambah

	int Ptambah () {
	return a + b;
	}

  //proses Kurang

  int Pkurang () {
    int hasil; //definisi lokal

    hasil = a - b;

  return hasil;
  }

	//proses tampil

	void Ptampil () {
    cout << "Hasil Tambah : " << Ptambah ();
    cout << "Hasil Kurang : " << Pkurang ();

			}
