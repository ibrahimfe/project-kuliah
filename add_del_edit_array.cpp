#include <iostream>
using namespace std;

int main()
{
	int  B[10], jumlah, ganti, hapus, cari, ketemu = 0;

ulangi: //Label untuk goto statement

	// user memasukkan jumlah data yang akan dimasukkan
	cout << "Masukkan jumlah data : "; 
	cin >> jumlah;

	// jumlah data dibatasi 10 data, dari B[0] sampai B[9]
	if (jumlah > 9 )
	{
		//Jika data melebihi dari batas yang ditentukan maka tampilkan pesan
		cout << "\nMaaf, max jumlah data adalah 10!\n\n";

		//Kemudian meminta user mengulangi memasukkan jumlah data
		goto ulangi;
	}
	else
	{
		// jika jumlah data kurang atau sama dengan batas jumlah data maka user 
		// dapat memasukkan data satu-persatu sesuai jumlah data yang diminta
		for (int i = 0; i<jumlah; i++)
		{
			cout << "Masukkan data ke-" << i + 1 << " : "; 
			cin >> B[i];
		}

		// Menampilkan hasil inputan data user
		cout << "\nData yang telah dimasukkan : ";
		for (int j = 0; j<jumlah; j++)
		{
			cout << "\nB[" << j << "]= " << B[j];
		}
	}
	
	//EDIT ELEMEN ARRAY
	//user memasukan nilai data yang akan diedit
	cout << "\n\nMasukkan nilai data yang akan diubah = "; cin >> ganti;

	// Perulangan untuk mencari niai data yang sesuai dengan yang dimaksud user
	for (int g = 0; g<jumlah; g++)
	{
		if (B[g] == ganti)
		{
			//Jika nilai data yang dimasukkan user ada di salah satu index array
			//Maka minta user menuliskan data baru sebagai penggantinya
			cout << "Masukka nilai baru = "; cin >> B[g];
		}
	}

	//Menampilkan semua data baru setelah diedit/ dirubah
	cout << "\n\nData setelah diubah";
	for (int h = 0; h<jumlah; h++)
	{
		cout << "\nB[" << h << "]= " << B[h];
	}
	
	//MENGHAPUS ELEMEN ARRAY
	// User memasukkan nilai data yang akan dihapus
	cout << "\n\nMasukkan nilai data yang akan dihapus = "; 
	cin >> hapus;

	//Perulangan untuk mencari data yang di inputkan user di index array
	for (int j = 0; j < jumlah; j++)
	{
		if (hapus == B[j])
		{
			//Jika nilai yang di masukkan user sesuai dengan salah satu 
			//Nilai data di index array 
			for (int k = j /* dimulai dari index nilai yang ditemukan */ ; k < jumlah; k++)
			{
				//Menggeser niali data pada index array sampai jumlah maksimal data array
				B[k]/* Nilai index saat ini */ = B[k + 1] /* Nilai index selanjutnya */;
			}

			// Mengurangi jumlah array karena saah satu datanya telah dihapus
			jumlah -= 1;
			break;
		}
	}


	//Menampilkan data baru setelah salah satu index dihapus
	cout << "\n\nData Baru :";
	for (int p = 0; p<jumlah; p++)
	{
		cout << "\nB[" << p << "]= " << B[p];
	}
	
	//CARI ELEMEN ARRAY
	//User memasukkan nilai yang akan dicari
	cout << "\n\nMasukkan nilai data yang akan dicari = "; cin >> cari;

	//Perulangan muntuk mencari data yan cocok
	for (int n = 0; n<jumlah; n++) {
		if (cari == B[n]) {

			//Jika data cocok dengan nilai yang dicari user lanjutkan tampilkan pesan
			//Dimana index data ditemukan
			cout << "\nNilai " << cari << " ditemukan pada index = " << n <<endl;
			ketemu = 1; //tambahan untuk memastikan data telah ditemukan
			break;
		}
	}

	//Jika tidak ada data yang ditemukan Tampilkan pesan
	if (ketemu == 0) cout << "Maaf data yang Anda cari tidak ada";


	//Hanya user yang dapat menutup jendela konsole
	getc;//g++ == getch();
}
