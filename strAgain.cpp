#include<iostream>
using namespace std;

int main() {
    int c = 1, bindsize;
    cin >> bindsize; // 5
    for (int i = 1; i <= bindsize; i++) {
        for(int j = 1; j <= bindsize; j++) {
            if(bindsize%2==0) {
                if(c%2 == 0) cout << "#";
                else cout << " ";
                c += 1;
            } else {    // 4-' 5-#
                c++;
                if(c%2 != 0) cout << "#";
                else cout << " ";
            }
        }
        cout << endl;
        if(bindsize%2==0) {
            c++;
        }
    }
}
