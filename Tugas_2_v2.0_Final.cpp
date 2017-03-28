#include <iostream>
#include <conio.h>

using namespace std;

//prototype
  bool isWithinRange(float ip, int min, int max);
  void pcek(/*Proses penghitungan ip lulus atau tidak dan seluruh ip*/);
  void ptampil(/*Proses Penampilan Semua yg di butuhkan*/);

//definisi global
  float ip, jumlah=0;
  int semua=0, lulus=0, tlulus=0;

  //Proses Utama
  int main() {
    do {
      cout << "Masukan nilai IP : "; cin >> ip;
      pcek();
    } while(ip!=-999);

        ptampil();
    return 0;
    cin.get();
  }



//Proses validasi ip
bool isWithinRange (float ip,int min, int max) {
  bool status;
  if (ip>=min&&ip<=max) {
    status=true;
  }
    else {
      status=false;
    }
  return status;
}
  //Proses Pengecekan & Rata-rata
  void pcek(/*Proses penghitungan ip lulus atau tidak dan seluruh ip*/){
    if (isWithinRange (ip, 0, 4)){
      if (ip>=2.75){
        lulus++;
      }
        else /*if (ip<=2.74)*/{
          tlulus++;
        }
    semua++;
    jumlah=jumlah+ip;
    }
  }
    //Proses Tampil
    void ptampil() {
      if (semua==0){
        cout<<"Tidak Ada IP yang Valid !!!";
      }
        else {
          cout<<"______________Data IP_______________"<<endl;
          cout<<"Jumlah IP yang Terdaftar   : "<<semua<<endl;
          cout<<"Jumlah IP yang Tidak Lulus : "<<tlulus<<endl;
          cout<<"Jumlah IP yang Lulus       : "<<lulus<<endl;
          cout<<"Rata - rata Nilai IP       : "<<jumlah/semua<<endl;
        }
    }
