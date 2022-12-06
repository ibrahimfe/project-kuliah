#include <iostream>                 //ibrahim line 1-21

using namespace std;

int main () {
    char x[2][4] = {
        {'A', 'B', 'C', 'D'},
        {'E', 'F', 'G', 'H'}
    };

    for (int i = 0; i < 2; i++) {
        cout << "|";
        for (int j = 0; j<4; j++) {
            cout<<x[i][j];
            if (j != 3) {
                cout << " ";
            }
        }
        cout << "|" << endl;
    }
}
