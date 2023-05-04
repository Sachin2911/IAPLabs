#include <iostream>
using namespace std;

int main(){
    float avg = 0;
    float usrnum;
    int numinps = 0;
    do{
        cin >> usrnum;
        if(usrnum !=-1){
        if(avg==0){
            avg = usrnum;
            numinps = numinps +1;
        }else{
            avg = avg + usrnum;
            numinps = numinps +1;
        }
        }
    }while(usrnum != -1);
    // cout << avg;
    cout << avg/numinps;
    return 0;
}