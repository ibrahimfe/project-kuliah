#include <iostream>
#include <stdlib.h>
#include <fstream>

using namespace std;
int menu, x, search, pencarian;
string search1,nama_peminjam;
int kode_peminjaman,tanggal_peminjaman;

class buku {
    public:
    string judul_buku, penerbit, penulis, tahun_terbit, kode;
    int stok;
    void create_buku();
    int input_buku();
    void lihat_buku();
    void output_buku();
    void hapus_buku();
    void pengembalian_buku();
    void peminjaman_buku();
    void cari_buku();

};

buku buku1;				//membuat object pada class buku

int buku::input_buku() {
    cout << "==== Input Data Buku ====" << endl;
    cout << "Masukkan Kode Buku \t: ";
    cin >> kode;
    cout << "Masukkan Judul Buku \t: ";
    cin >> judul_buku;
    cout << "Masukkan Penerbit Buku \t: ";
    cin >> penerbit;
    cout << "Masukkan tahun terbit \t: ";
    cin >> tahun_terbit;
    cout << "Masukkan Stok Buku \t: ";
    cin >> stok;
    return kode, judul_buku, penerbit, tahun_terbit, stok;
}

void buku::cari_buku() {
    fstream f;
    f.open("buku.txt");
    cout << "[1]. Cari Berdasarkan kode " << endl;
    cout << "[2]. Cari Berdasarkan Judul Buku " << endl;
    cout << "[3]. Cari Berdasarkan penerbit" << endl;
    cout << "[4]. Cari Berdasarkan tahun Terbit" << endl;
    cout << "Input :";
    cin >> pencarian;
    switch (pencarian) {
        case 1:
            cout << "Masukkan kode buku : ";
            cin >> kode;
            search1 = kode;
            break;
        case 2:
            cout << "Masukkan Judul Buku  : ";
            cin >> judul_buku;
            search1 = judul_buku;
            break;
        case 3:
            cout << "Masukkan Penerbit Buku : ";
            cin >> penerbit;
            search1 = penerbit;
            break;
        case 4:
            cout << "Masukkan Tahun Terbit Buku : ";
            cin >> tahun_terbit;
            search1 = tahun_terbit;
            break;
    }
    
    
    f >> kode;
    f >> judul_buku;
    f >> penerbit;
    f >> tahun_terbit;
    f >> stok;

    while (!f.eof()) 
    {
        switch (pencarian) {
            case 1 :
            if (search1 == kode) {
                 cout << "Kode buku " << kode << " Ditemukan !!" << endl;
                 buku1.output_buku();
                break;
            } else {
                cout << "Sedang Mencari Buku !!" << endl;
                break;
            }
            case 2 :
            if (search1 == judul_buku) {
                cout << "Judul Buku " << judul_buku << " Ditermukan !!" << endl;
                buku1.output_buku();
                break;
            } else {
                cout << "Sedang Mencari Buku !!" << endl;
                break;
            }
            case 3:
            if (search1 == penerbit) {
                cout << "Penerbit buku " << penerbit << " Ditemukan !!" << endl;
                buku1.output_buku();
                break;
            } else  {
                cout << "Sedang Mencari Buku !!"<< endl;
                break;
            }
            case 4:
            if (search1 == tahun_terbit) {
                cout << "Tahun Terbit Buku " << search1 << " Ditemukan" << endl;
                buku1.output_buku();
                break;
            } else {
                cout << "Sedang Mencari Buku !!" << endl;
                break;
            }
            }   
            f >> kode;
            f >> judul_buku;
            f >> penerbit;
            f >> tahun_terbit;
            f >> stok;
        }
        
       f.close();
     
    }


void buku::lihat_buku() {
    ifstream tdata;
    tdata.open("buku.txt");
    tdata >> kode ;
    tdata >> judul_buku ;
    tdata >> penerbit ;
    tdata >> tahun_terbit;
    tdata >> stok;

    while (!tdata.eof()) {
        buku1.output_buku();

        tdata >> kode ;
        tdata >> judul_buku ;
        tdata >> penerbit ;
        tdata >> tahun_terbit;
        tdata >> stok;
        }

        tdata.close();
}

 void buku::hapus_buku() {
    
    int h = 0;
    cout << "\n Apakah Kamu Ingin menghapus semua data buku : \n[1]. Ya \n[2]. Tidak \nInput : ";
    cin >> h;
    fstream r;
    ofstream z;
    r.open("buku.txt");
        
    while (!r.eof())
    {
        if (h == 1) 
        {
            
            z.open ("buku.txt");
            cout << "\n\t Semua Data Buku telah dihapus ";
           
        }
        break;
    }
    
    z.close();
    r.close();
}


int greeting() {
	cout << endl << "==============================================" << endl;
    cout << "* SELAMAT DATANG DI PERPUSTAKAAN KAMI !! *" << endl;
    cout << "==============================================" << endl;

    cout << "[1]. Input Data Buku " << endl;
    cout << "[2]. Lihat Data Buku " << endl;
    cout << "[3]. Hapus Data Buku " << endl;
    cout << "[4]. Peminjaman Buku " << endl;
    cout << "[5]. Pengembalian Buku " << endl;
    cout << "[6]. Cari Data Buku " << endl;
    cout << "[7]. Keluar Dari Program " << endl;

    cout << "Pilih Menu : " ;
    cin >>  menu;

    return menu;
}
void buku::output_buku() {
     cout << "Kode buku \t: " << kode << endl;
     cout << "Judul buku \t: " << judul_buku << endl;
     cout << "Penerbit \t: " << penerbit << endl;
     cout << "Tahun Terbit \t: "<< tahun_terbit << endl;
     cout << "Stok buku \t: " << stok << endl;

     cout << "==============================================" << endl;
}

void buku::create_buku() {
    fstream sdata;
    sdata.open("buku.txt", ios::app);
    sdata << kode << endl;
    sdata << judul_buku << endl;
    sdata << penerbit << endl;
    sdata << tahun_terbit << endl;
    sdata << stok << endl << endl;

    sdata.close();
}

void buku::peminjaman_buku(){ 
    	int input_buku, jumlah, tanggal, tanggalPengembalian;
	ifstream notepad;
	notepad.open("buku.txt");
system ("cls");
cout << "\t==============================================" << endl;
cout << "\t\t\tPEMINJAMAN BUKU\t\t\t" << endl;
cout << "\t==============================================" << endl;
cout << endl;
cout << "Daftar Buku yang tersedia di Perpustakaan ini" << endl;
buku1.lihat_buku();
int kode_pinjaman;
cout << "Masukkan kode pinjaman : ";
cin >> kode_pinjaman;
char nama[20];
cout << "\tNama = ";
cin >> nama;
cout << "\tInput Tanggal peminjaman (1-31 hari) = ";
cin >> tanggal;
if ((tanggal < 0) || (tanggal > 31)){
	cout << "\tInput tanggal salah!" << endl;
} else 
	if (tanggal < 25)
	{ tanggalPengembalian = tanggal + 7;}
	if (tanggal >= 25)
	{
		tanggalPengembalian = (tanggal +7)-30;
	}
	cout << "\tBUKTI PEMINJAMAN BUKU DI PERPUSTAKAAN	  " << endl;
	cout << "\t----------------------------------------" << endl;
	cout << "\tNama Peminjam		          	= " << nama << endl;
	cout << "\tBuku yang dipinjam            = " << endl;
	buku1.cari_buku();
	cout << "\tTanggal Peminjaman			= " << tanggal << endl;
	cout << "\tTanggal Pengembalian			= " << tanggalPengembalian << endl;
	cout << "\t----------------------------------------" << endl;
	cout << "\n -NB = JIKA PEMINJAMAN TIDAK DIKEMBALIKAN SESUAI DENGAN PERJANJIAN MAKA AKAN DIKENAKAN DENDA" << endl;
	nama_peminjam=nama;
	tanggal_peminjaman=tanggal;
	kode_peminjaman=kode_pinjaman;
	}

void buku::pengembalian_buku(){
	int kode_pinjaman,tanggal_pengembalian, keterlambatan;
	
	cout<<"Masukkan kode pinjaman : ";
	cin>>kode_pinjaman;
	
	if(kode_pinjaman==kode_peminjaman){
		cout<<"Nama                      : "<< nama_peminjam <<endl;
		cout<<"Tanggal peminjaman buku   : "<< tanggal_peminjaman <<endl;
		cout<<"Tanggal pengembalian buku : ";
		cin>>tanggal_pengembalian;
		cout << "Keterlambatan pengembalian : ";
		cin >> keterlambatan;
		if(keterlambatan==0){
			cout<<"Buku telah dikembalikan, terimakasih banyak !!!"<<endl;
		}else{
			cout<<"Anda terkena denda sebesar Rp. "<< 5000 * keterlambatan << endl;
		}
	}
}
      
void end_program() {
	cout << endl << "==========================================" << endl;
  cout << "Terima Kasih sudah menggunakan kode kami!!" << endl;
  cout << "==========================================" << endl;
}

int main () {
    loop:
    greeting();

    switch (menu) {
        case 1:
            buku1.input_buku();
            buku1.create_buku();
            goto loop;
            break;
        case 2:
            cout << "==== Lihat Data Buku ====" << endl;
            buku1.lihat_buku();
            goto loop;
            break;
        case 3:
            cout << "==== Hapus Data Buku ====" << endl;
            buku1.hapus_buku();
            goto loop;
            break;
        case 4:
            cout << "==== Peminjaman Buku ====" << endl;
            buku1.peminjaman_buku();
            goto loop;
            break;
        case 5:
            cout << "==== Pengembalian Buku ====" << endl;
            buku1.pengembalian_buku();
            goto loop;
            break;
        case 6:
            cout << "==== Cari Data Buku ====" << endl;
            buku1.cari_buku();
            goto loop;
            break;
        default :
        		end_program();
            break;
    }
    return 0;
}

