#include <iostream>
using namespace std;

int main(){
    string usrname;
    string newstr;
    cin >> usrname;
    for(int i = 0; i<usrname.length(); i++){
        cout << char(int(usrname[i])+1);
    }
    cout << newstr;
}