#include <iostream>

using namespace std;


int main() {
    string name, final2;
    int huruf, final;
    cout << "Masukkan Sebuah Kata " << endl;
    getline(cin,name);
    
    
    for (int i=0; i < name.length(); i++) {
    	huruf = (int) name[i];
    if (huruf > 77) {
        final = huruf - 13;
        final2 = (char) final;
        cout << final2;
    } else {
        final = huruf + 13;
        final2 = (char) final;
        cout << final2;
    }	
    
}
    cout << endl;
    return 0;
}

