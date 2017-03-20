#include <iostream>
using namespace std;

//prototype
void langkah1();
void langkah2();
void langkah3();

// variabel global 
 int a, b, temp;

 // program utama 

 int main () {
 	langkah1();
 	langkah2();
 	langkah3();

 	return 0;
 }
 
	// proses membaca
void langkah1 () {

	cout << "Masukan nilai A : ";
	cin >> a;

	cout << "Masukan nilai B : ";
	cin >> b;
}
	// proses tukar
void langkah2 () {

	temp = b;
	b = a;
	a = temp;
}

	//proses tampil
void langkah3 () {

	cout <<"==========================" << endl;
	cout << "Nilai A Sekarang : " << a << endl;
	cout << "Nilai B Sekarang : " << b << endl;

}