#include <iostream>

using namespace std;

int kalkulator(int a, int b){
	int c = a + b;
	int d = a - b;
	int e = a * b;
	float f = a / b;

	cout << "Penjumlahan : " << c << endl;
	cout << "Pengurangan : " << d << endl;
	cout << "Perkalian   : " << e << endl;
	cout << "Pembagian   : " << f << endl;

	return c, d, e, f;
}

int main()
{
	int angka1, angka2;

	cout << "Pembuatan aplikasi kalkulator" << endl;
	cout << endl;

	cout << "Masukan angka 1 : " ;
	cin >> angka1;

	cout << "Masukan angka 2 : ";
	cin >> angka2;
	

	cout << endl;
	kalkulator(angka1, angka2);

	return 0;
}
