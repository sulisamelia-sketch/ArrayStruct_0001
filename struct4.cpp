#include <iostream>
#include <string>
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
    mahasiswa mhs[3];

    //Mengisi data
    for (int i = 0; i <= 2; i++)
    {
    cout << "Isikan data nama : ";
    getline (cin, mhs[1].nama);
    cout << "Isikan data kota : ";
    getline (cin, mhs[1].alamat.kota);
    cout << "Isikan data desa : ";
    getline (cin, mhs[1].alamat.desa);
    cout << "Isikan data umur : ";
    cin >> mhs[1].umur;
    cin.ignore();
    
    }

    
}
