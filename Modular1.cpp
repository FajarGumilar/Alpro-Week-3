#include <iostream>
using namespace std;

// prototype

void prosesBaca () ;
int prosesTambah () ;
int prosesKurang () ;
void prosesTampil() ;

// variabel global 

int a, b, c;

//program utama 
int main () {
	prosesBaca ();
	prosesTampil ();
	return 0;
}

void prosesBaca () {

	cout << "Masukan nilai A : ";
	cin >> a;

	cout << "Masukan nilai B : ";
	cin >> b;

	cout << "Masukan nilai C : ";
	cin >> c;
}
//proses tambah 

int prosesTambah () {
	return a + b + c;
}
//proses kurang
int prosesKurang () {
	int hasil;
	hasil = a - b - c;
}
//proses tampil
void prosesTampil () {
	cout << "======================" << endl;
	cout << "Hasil Tambah : " <<prosesTambah () << endl;
	cout << "Hasil Kurang : " <<prosesKurang () << endl;

}