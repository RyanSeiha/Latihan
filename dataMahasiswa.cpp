#include <iostream>

using namespace std;

struct DataMahasiswa{
	string nama;
	string nim;
	string kelas;
};


int main()
{
	system("cls");
	DataMahasiswa ryan;

	ryan.nama;
	ryan.nim;
	ryan.kelas;

	cout << "Input Data Mahasiswa" << endl;
	cout << "Nama : ";
	getline(cin, ryan.nama);
	cout << "NIM : ";
	getline(cin, ryan.nim);
	cout << "Kelas : ";
	getline(cin, ryan.kelas);


	system("cls");
	cout << endl;
	cout << "Informasi Data Diri Anda" << endl;
	cout << "Nama  : " << ryan.nama << endl;
	cout << "Nim   : " << ryan.nim << endl;
	cout << "Kelas : " << ryan.kelas << endl;
	
	return 0;
}
