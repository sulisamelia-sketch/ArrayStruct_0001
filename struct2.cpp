#include <iostream>
using namespace std;

struct mahasiswa
{
    string nama;
    string alamat;
    int umur;
};

int main()
{
    //Deklarasi variabel struct
    mahasiswa mhs;
    //Mengisi data
    cout << "Isikan data nama : ";
    cin >> mhs.nama;
    cout << "Isikan data alamt : ";
    cin >> mhs.alamat;
    cout << "Isikan data umur : ";
    cin >> mhs.umur;

    cout << "Data Mahasiswa" << endl;
    cout << "Nama : " << mhs.nama << endl;
    cout << "Alamat : " << mhs.alamat << endl;
    cout << "Umur : " << mhs.umur << endl;
}
