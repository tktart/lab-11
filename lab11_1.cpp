#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
 
int main(){
    string grade[]= {"A","B+","B","C+","C","D+","D","F","W"};

    srand(time(0));
    cout << "Press Enter 3 times to reveal your future.\n";
    for(int i = 0; i < 3;i++){
        cin.ignore();
    }

    string a = grade[rand() % 9];
    cout << "\nYou will get "<< a <<" in this 261102.\n";
    
    return 0;
}

// cout << "Press Enter 3 times to reveal your future.";
// cout << "You will get A in this 261102.";
