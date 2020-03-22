#include <iostream>

using namespace std;

int keliling(double a, double b){
	double c ;
	c = a * b;

	return c;

}

int main()
{
	double panjang, lebar;

	cout << "Mencari keliling persegi " << endl;
	cout << "Masukan Panjang : " ;
	cin >> panjang;
	cout << "Masukan Lebar : ";
	cin >> lebar;

	cout << endl;
	cout << "Hasil : " << keliling(panjang, lebar) << endl; 

	return 0;
}
