#include<iostream>
using namespace std;
int main()
{
    int total, a,b,c, count=0;
    cin >> total;
    for(int i=0; i<total; i++) {
        cin >> a >> b >> c;
        if(a+b+c >=2) count++;
    }
    cout << count;
}
