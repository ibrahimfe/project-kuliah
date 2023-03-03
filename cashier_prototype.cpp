#include <iostream>

using namespace std;

int main() {
    int satuan[10], harga[10];
    int totalharga, tunai, a, b;
    string i;
    string barang[10];
    
    totalharga = 0;
    b = 0;
    
    cout << "apakah kamu ingin membeli barang (yes/no)" << endl;
    cin >> i;
    if (i == "yes" || i == "YES") {
        while (i == "yes" || i == "YES") {
            cout << "barang apa yang kamu beli? ";
            cin >> barang[b];
            cout << "berapa yang kamu beli?" << endl;
            cin >> satuan[b];
            cout << "Berapa harganya?" << endl;
            cin >> harga[b];
            cout << "apakah masih ada barang yang lain? (yes/no)" << endl;
            cin >> i;
            totalharga = totalharga + satuan[b] * harga[b];
            b = b + 1;
        }
        cout<< "Harga Jual : " << totalharga << endl
            << "Berapa uang pembayaran kamu?" << endl;
        cin >> tunai;
        if (tunai < totalharga) {
            cout << "maaf uang kamu kurang" << endl;
        } else {
            int c;
            
            c = 0;
            cout<< "-------------------------------------------------------------------"<<endl;
            for (c = 0; c <= b - 1; c++) {
                cout << barang[c] << "      " << satuan[c] << "     " << harga[c] << "      " <<satuan[c]*harga[c]<< endl;
            }
            cout<< "-------------------------------------------------------------------"<<endl
                << "--------------------------------"<<endl
                << "Total      : " << totalharga << endl
                << "Tunai      : " << tunai << endl
                << "Kembali    : " << tunai - totalharga << endl
                << "--------------------------------"<<endl;
        }
    } else {
        cout << "Terima kasih sudah mampir ke toko kami!" << endl;
    }
    return 0;
}
