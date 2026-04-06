#include <iostream>
using namespace std;

struct alamatDetail
{
    string desa;
    string kota;

};

struct mahasiswa 
{
    string nama;
    alamatDetail alamat;
    int umur;
};

int main ()
{
    //Deklarasi variabel struct
    mahasiswa mhs;
    //Mengisi data
    cout << "Isikan data nama : ";
    cin >> mhs.nama;
    cout << "Isikan data kota : ";
    cin >> mhs.alamat.kota;
    cout << "Isikan data kota : ";
    cin >> mhs.alamat.desa;
    cout << "Isikan data umur : ";
    cin >> mhs.umur;

    cout << "Data Mahasiswa" << endl;
    cout << "Nama : " << mhs.nama << endl;
    cout << "Kota : " << mhs.alamat.kota << endl;
    cout << "Desa : " << mhs.alamat.desa << endl;
    cout << "Umur : " << mhs.umur << endl;
}
