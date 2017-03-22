#include <iostream>



using namespace std;

//Prototype
  void Pcek1(/*Pengecekan -999*/);
  void Pbaca(/* Input Nama Dan Nilai */);
  void PTampilValid(/* Input Validasi dan Tampil*/);

//deklarasi global
    int pilihan;
    float ip;
    char siswa[10];

  //Program Utama
    int main() {
      Pcek1();
      menu:
        cout << endl;
        cout<<"========INPUT DATA ANDA========" <<endl;
        cout<<"1. Masukan Data"<<endl ;
        cout<<"2. Cetak Data"<<endl;
        cout<<"Masukan Pilihan : "; cin>>pilihan;

          switch (pilihan) {
            case 1:
              Pbaca();
              goto menu;
            case 2:
              PTampilValid();
              goto menu;
          }

        cin.get();
        return 0;
    }
    //Pengecekan -999
      void Pcek1(/*Pengecekan -999*/) {
        int cek1;
        while (cek1!=-999) {
          cout << "Masukan Angka (-999) : "; cin >> cek1;
          }
      }

    //Proses Baca
      void Pbaca(/*Input Data Mahasiswa*/) {
        cout << "Masukan Nama Mahasiswa : "; cin>>siswa;
        cout << "Masukan Nilai IP       : "; cin>>ip;
      }

          //Proses Validasi dan Tampil
      void PTampilValid() {
        cout<<"Nama   : " << siswa << endl;
        cout<<"IP     : " << ip << endl;

          if (ip<=2.75 && ip>=0) {
            cout<<"Status : Tidak Lulus" << endl<<endl;
          }
            else if (ip<=4 && ip>=2.76) {
              cout<<"Status : Lulus" << endl<<endl;
            }
              else
                cout << "Status : IP Tidak Valid" <<endl<<endl;
      }
