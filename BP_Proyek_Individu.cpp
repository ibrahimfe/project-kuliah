#include <iostream>
#include <string>

using namespace std;

string pilihan,x;

class hotel{
    public:             //Access Specifiers
        string nama;
        string bulan;
        string nama_hotel;
        int bayar;
        int tanggal;
        int malam;
        int data();                 //method
        void cetak (string nama_hotel,int bayar);  //method with parameters
        hotel() {
            cout << "     _   _____________   ____________  "<< endl;
            cout << "    / | / / ____/  _/ | / / ____/ __ \ "<< endl;
            cout << "   /  |/ / / __ / //  |/ / __/ / /_/ / "<< endl;
            cout << "  / /|  / /_/ // // /|  / /___/ ____/  "<< endl;
            cout << " /_/ |_/\____/___/_/ |_/_____/_/       "<< endl;
        }
};
int hotel::data() {
            cout << "inputkan nama              : "; cin >> nama;
            cout << "Inputkan tanggal booking   : "; cin >> tanggal;
            cout << "inputkan bulan             : "; cin >> bulan;
            cout << "Inputkan berapa malam menginap : "; cin >> malam;
            cout << "------------------------------------------"<< endl;
            return nama, bulan, tanggal, malam;
        }
        
void hotel ::cetak(string nama_hotel,int bayar) {
            cout << "\nTerima Kasih Sudah Memesan Kamar di Hotel Kami!\n";
            cout << "Nama Hotel            : " << nama_hotel << endl;
            cout << "Nama pemesan          : " << nama << endl;
            cout << "tanggal booking       : " << tanggal << " " << bulan << endl;
            cout << "Akan menginap sebanyak " << malam << " malam" << endl;
            cout << "Ini biaya yang harus kamu bayarkan : " << bayar*malam;
            cout << "\n";
        }

string bertanya() {
    cout << "apakah kamu ingin memesan Hotel (ya/tidak) : ";
    cin >> x;
    return x;
}
string pilihan_hotel (){
    cout << "A. Elite \nB. Standar \nC. Murah \nHotel mana yang kamu pilih (A/B/C) : ";
    cin >> pilihan;
    return pilihan;
}
void nevermind() {
    cout << "\n-------------------------------------------------------------------------\n";
    cout << "Terima Kasih!. Kami bersedia Membantu jika anda memiliki pertanyaan.\n";
    cout << "-------------------------------------------------------------------------\n";
}

int main()
{

    bertanya();
    if (x == "ya") {
    while (x == "ya") {
        pilihan_hotel();
        if (pilihan == "A") {
            hotel elite;        //Object
            elite.data();
            elite.cetak("Burj Khalifa", 5000000);
        } else if (pilihan == "B") {
            hotel standar;      //Object
            standar.data();
            standar.cetak("Grand Hotel",1000000);
        } else if (pilihan == "C") {
            hotel murah;        //Object
            murah.data();
            murah.cetak("My Fathers Hotel",0);
        } else {
            break;
        }
        bertanya();
    }
    }
        nevermind();
    return 0;
}





