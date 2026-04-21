#include <iostream>
using namespace std;

struct Mahasiswa
{
    string NIM;
    string Nama;
    string Alamat;
    int Umur;
};

int main()
{
    Mahasiswa mhs;
    cout << "Nomor Mahasiswa: ";
    cin >> mhs.NIM;
    cout << "Nama Mahasiswa: ";
    cin >> mhs.Nama;
    cout << "Alamat Mahasiswa: ";
    cin >> mhs.Alamat;
    cout << "Umur Mahasiswa: ";
    cin >> mhs.Umur;

    cout << endl;
    cout <<"\n NIM: " << mhs.NIM;
    cout <<"\n Nama: " << mhs.Nama;
    cout <<"\n Alamat: " << mhs.Alamat;
    cout <<"\n Umur: " << mhs.Umur;
}