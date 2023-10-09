#include <iostream>
using namespace std;

void DaFuncy(int x, int div1, int div2){
    string A = "FIZZ";
    string B = "BUZZ";
    string C = "FIZZBUZZ";

    if(x % div2 == 0){
        if(x % div1 == 0){
            cout << C << endl;
        }
        else{
            cout << B << endl;
        }
    }
    else if(x % div1 == 0){
        cout << A << endl;
    }
    else{
        cout << x << endl;
    }
    return;
}

int main() {
    int div1 = 3;
    int div2 = 5;
    int maxCount;
    for (int i = 1; i <= maxCount; ++i) {
        DaFuncy(i, div1, div2);
    }
}