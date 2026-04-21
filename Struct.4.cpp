#include <iostream>
using namespace std;

struct Mahasiswa
{
    string NIM;
    string Nama;
    string Alamat;
    int Umur;
}

int main()
{
    Mahasiswa mhs;
    cout << "Nomor Mahasiswa: ";
    cin >> mhs.NIM;
    cout << "Nama Mahasiswa: ";
    cin.ignore();
    getline(cin, mhs.Nama);
    cout << "Alamat Mahasiswa: ";
    getline(cin, mhs.Alamat);
    cout << "Umur Mahasiswa: ";
    cin >> mhs.Umur;
}