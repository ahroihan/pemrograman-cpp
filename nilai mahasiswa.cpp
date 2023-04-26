#include <iostream>
#include <conio.h>
#include <cstring>
using namespace std;
int main()
{
    string nama;
    int tugas;
    int uts;
    int uas;

    cout<<"DAFTAR NILAI MAHASISWA"<<endl;
    cout<<endl;
    cout<<"Masukan Nama : ";
    cin>>nama;
    cout<<"Masukan Nilai Tugas : ";
    cin>>tugas;
    cout<<"Masukan Nilai UTS : ";
    cin>>uts;
    cout<<"Masukan Nilai UAS : ";
    cin>>uas;

    int ntugas=0.20*tugas;
    int nuts=0.30*uts;
    int nuas=0.50*uas;

    cout<<"________________________________________________"<<endl;
    cout<<"Nama        Nilai Tugas          Nilai UTS          Nilai UAS"<<endl;
    cout<<nama<<"  "<<tugas<<" x 20% = "<<ntugas<<" "<<uts<< x 30% = "<<uts<<"
    cout<<endl;
    cout<<endl;

    int total = ntugas+nuts+nuas;

    cout<<"--------------------------------------------------------"endl;
    cout<<"Total NIlai yang didapatkan = "<<total<<endl;
    cout<<"--------------------------------------------------------"endl;

    getch();
}
