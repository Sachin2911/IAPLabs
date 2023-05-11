#include <iostream>
using namespace std;

int main(){
    int mark;
    cin >> mark;
    if (mark>=75){
        cout << "First";
    }
    if (mark>=70 && mark<=74){
        cout << "Upper second";
    }
    if (mark>=60 && mark<=69){
        cout << "Lower second";
    }
    if (mark>=50 && mark<=59){
        cout << "Third";
    }
    if (mark<50){
        cout << "Fail";
    }

}