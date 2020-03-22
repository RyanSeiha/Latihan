#include <iostream>

using namespace std;

struct DataMahasiswa{
	string nama[100];
	string nim[100];
	string kelas[100];
};


int main()
{
	system("cls");
	DataMahasiswa ryan;

	ryan.nama[100];
	ryan.nim[100];
	ryan.kelas[100];
	int banyakMahasiswa;

	cout << "Input Data Mahasiswa" << endl;
	cout << "Masukan Banyaknya Mahasiswa : ";
	cin >> banyakMahasiswa;

	for (int i = 0; i < banyakMahasiswa; i++)
	{
		cout << "Nama : ";
		cin.ignore();
		getline(cin, ryan.nama[i]);
		cout << "NIM : ";
		getline(cin, ryan.nim[i]);
		cout << "Kelas : ";
		getline(cin, ryan.kelas[i]);	
	}

	system("cls");
	cout << endl;
	cout << "Informasi Data Diri Mahasiswa : " << endl;
	for (int i = 0; i < banyakMahasiswa; i++)
	{
		cout << "Mahasiswa " << i+1 << endl;
		cout << "Nama  : " << ryan.nama[i] << endl;
		cout << "Nim   : " << ryan.nim[i] << endl;
		cout << "Kelas : " << ryan.kelas[i] << endl;
		cout << endl;	
	}

	
	
	return 0;
}
