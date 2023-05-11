#include <iostream>
using namespace std;

int main(){
    int mini;
    int usernum;
    int tested;
    mini = 999;
    do{
        cin >> usernum;
        if(usernum !=-1){
            if(usernum < mini){
            mini = usernum;
        }
        }
    }while(usernum != -1);
    cout << mini;
    return 0;
}