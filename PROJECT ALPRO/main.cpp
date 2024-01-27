#include <iostream>
#include <iomanip>

using namespace std;

void header();
void header2();
void barang();


void header ()
{
	cout << endl;
	cout << " \t UNIVERSITAS KOPERASI INDONESIA" << endl;
	cout << " \t Fakultas Sains dan Teknologi  " << endl;
	cout << "  \t     Prodi Sains Data" << endl;
	cout << endl;
	cout << "\t Kelompok         : 3 \n ";
	cout << "\t Anggota kelompok : Riyan putra pratama # Rafid Farhan zai # Rizwar syaefulloh # \n";
	cout << endl;
	cout << " ##### PROGRAM KASIR ##### \n";
	cout << endl;
	system("PAUSE");
	
	

}

void header2 ()
{
	system("cls");
	cout << endl;
	cout << "\t================ WELCOME TO IKOPIN ELEKTRONIC STORE ===============" << endl;
	cout << "\t------ MENJUAL BERBAGAI ALAT ELEKTRONIK DENGAN HARGA TERMURAH -----" << endl;
	cout << "\t===================================================================" << endl;
	cout << endl << endl;
	
	
}

void barang ()
{
	// Deklarasi variabel
	int jumlahBeli, bayar, diskon, jumlah[100], harga[100], subTotal[100];
	string namaBarang[100];
	int total;
	int i;
	total=0;
	
	cout << "Masukkan jumlah beli : ";
	cin >> jumlahBeli; //user menggunakan jumlah beli
	
	for ( i=0; i<jumlahBeli; i++)
	{
		cout << endl;
		cout << " Masukkan Barang ke- " <<i+1 << endl << endl;
		
		cout << " Nama Barang  : ";
		cin >> namaBarang[i];//user input nama barang disimpan pada array nama barang
		
		cout << " Jumlah       : ";
		cin >> jumlah[i];// user input jumlah disimpan pada array jumlah
		
		cout << " Harga        : " ;
		cin >> harga[i]; // user input harga disimpan pada array harga
		
		subTotal[i] = jumlah [i] * harga[i];//menjumlahkan harga sub total
		total += subTotal[i];	//menjumlahkan seluruh sub total barang
		
		
	}
	
	cout << endl;
	cout << "        STRUK BELANJA DI IKOPIN ELEKTRONIK STORE" << endl;
	cout << "--------------------------------------------------------------" << endl;
	cout << "Berikut rincian Pembelanjaan Anda : " << endl;
	cout << " No    Barang    Jumlah    Harga    sub Total" << endl;
	
	//menampilkan semua nilai array
	for (int j=0; j<jumlahBeli; j++ )
	{
		cout << " " <<j+1 <<setw(10) <<namaBarang[j] <<setw(10) <<jumlah[j] <<setw(10 )<<harga[j] << setw(10) <<subTotal[j] << endl;
		
	}
	cout<<"\n---------------------------------------------------------------" << endl;
	
	//kondisi untuk menentukan diskon yang di dapatkan berdasarakan total belanja
	if( total >=500000 )
	{
		diskon = 0.25 * total;
	}
	else if(total  >= 200000)
	{
		diskon = 0.10 * total;
	}
	else if( total >= 100000)
	{
		diskon = 0.5 * total; 
	}
	else{
		diskon = 0;
	}
	system("PAUSE");
	
	//menampilkan keterangan
	cout << endl;
	cout << " Jumlah Bayar : Rp." << total << endl;
	cout << " Diskon       : Rp." << diskon << endl;
	cout << " Total Bayar  : Rp." << total - diskon << endl;
	cout << " Bayar        : Rp.";
	cin >> bayar;
	cout << " Kembali      : Rp." << (bayar-(total-diskon))  << endl;

	
	
}

int main()
{
	char pil;
	
	header();
	header2();
	
	do
	{
		 
		 barang();
		 
		 cout << "\n Apakah anda Ingin melakukan transaksi lagi ? " << endl;
		 cin >> pil;
		 
		 
	}
	while ( pil == 'y' || pil == 'Y');
	cout << "\n\t ===== TERIMAKASIH ATAS KUNJUNGAN ANDA ===== ";
	cout << "\n\t --- SEMOGA ANDA PUAS DENGAN PRODUK KAMI --- ";
	cout << "\n\t ======= SELAMAT DATANG KEMBALI =============";
	
	return 0;
	
}
