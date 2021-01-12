#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
    int x = 0;
    string i[] = {"A","B+","B","C+","C","D+","D","F","W"};
    srand(time(0));
    cout << "Press Enter 3 times to reveal your future.";
    for(int a = 0; a < 3; a++){
        cin.get();
    }
    x = rand() % 9;
    cout << "You will get "<< i[x] <<" in this 261102.";
}