#include <iostream>
using namespace std;

int main(){
    int y;
    cin >> y;
    bool leapYear = false;
    if (y%100 == 0 && y%400 == 0){
        leapYear = true;
    }
    if (y%100 != 0 && y%4 == 0){
        leapYear = true;
    }
    if (leapYear == true){
        cout << y << " is a leap year";
    }
    else{
        cout << y << " is not a leap year";
    }
    
}