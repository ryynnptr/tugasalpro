#include <iostream>

using namespace std;

int main()
{
    cout << "Program Menghitung Gaji Karyawan" << endl;
    cout << endl;
    cout << "################################" << endl;

    string nama;
    char golongan;
    int jam_kerja;
    const int jam_normal = 48;
    const int upah_a = 5000, upah_b = 7000, upah_c =8000, upah_d = 10000;
    const int upah_lembur = 4000;

    cout << "Masukkan Nama Karyawan : ";
    cin >> nama;

    cout << "Input golongan (A, B, C) : ";
    cin >> golongan;

    cout << "Input Jumlah Jam Kerja : ";
    cin >> jam_kerja;

    int gaji;

    switch (golongan) {
        case 'A' :
        gaji = (jam_kerja <= jam_normal) ?
        jam_kerja*upah_a : jam_normal*upah_a + (jam_kerja - jam_normal)*upah_lembur;
        break;
        case 'B' :
        gaji = (jam_kerja <= jam_normal) ?
        jam_kerja*upah_b : jam_normal*upah_b + (jam_kerja - jam_normal)*upah_lembur;
        break;
        case 'C' :
        gaji = (jam_kerja <= jam_normal) ?
        jam_kerja*upah_c : jam_normal*upah_c + (jam_kerja - jam_normal)*upah_lembur;
        break;
        case 'D' :
        gaji = (jam_kerja <= jam_normal) ?
        jam_kerja*upah_d : jam_normal*upah_d + (jam_kerja - jam_normal)*upah_lembur;
        break;
        
        
        default :
        cout << "Golongan yang dimasukkan Tidak Valid!" ;
        return 1;
    }

    cout << endl;
    cout << "Nama Karyawan " << nama << endl;
    cout << "Gaji mingguan Rp. " << gaji << endl;

   
    return 0;
}
