#include <iostream>
#include <map>
using namespace std;

int main(){
    string user1;
    string user2;
    cin >> user1;
    cin >>user2;
    if (user1 == "rock" && user2 == "rock"){
        cout << "Tie";
    }
    if (user1 == "rock" && user2 == "paper"){
        cout << "Player 2 wins";
    }
    if (user1 == "rock" && user2 == "scissors"){
        cout << "Player 1 wins";
    }
    
    if (user1 == "paper" && user2 == "rock"){
        cout << "Player 1 wins";
    }
    if (user1 == "paper" && user2 == "paper"){
        cout << "Tie";
    }
    if (user1 == "paper" && user2 == "scissors"){
        cout << "Player 2 wins";
    }

    if (user1 == "scissors" && user2 == "rock"){
        cout << "Player 2 wins";
    }
    if (user1 == "scissors" && user2 == "paper"){
        cout << "Player 1 wins";
    }
    if (user1 == "scissors" && user2 == "scissors"){
        cout << "Tie";
    }
    
}