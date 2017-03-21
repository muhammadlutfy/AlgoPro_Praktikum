#include <iostream>

using namespace std;
//prototype

  int tambahkan(int a, int b);
  void Pbaca();
  //definisi global

  int a, b ;

  //Proses Utama
  int main() {
    Pbaca();
    cout << "Hasil : " << tambahkan (a, b) << endl;
  return 0;}
  //Proses Baca

  void Pbaca() {
    cout << "Masukan nilai A : "; cin >> a;
    cout << "Masukan nilai B : "; cin >> b;

  }


int tambahkan (int a, int b) {
  return a+b;


}
