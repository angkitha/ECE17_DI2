#include <iostream>
using namespace std;

void fizzBuzz(int divisorOne, int divisorTwo, int currentNumber) {
    if(currentNumber%divisorOne == 0 && currentNumber%divisorTwo == 0){
        cout << "FizzBuzz, ";
    }
    else if(currentNumber%divisorOne == 0){
        cout << "Fizz, ";
    }
    else if(currentNumber%divisorTwo == 0){
        cout << "Buzz, ";
    }
    else{
        cout << to_string(currentNumber) + ", ";
    }
}
int main() {
    int currentDivisorOne = 3;
    int currentDivisorTwo = 5;

    int count = 2;
    int limit = 500;
    
    for (int i = 1; i <= limit; i = i + count) {
        fizzBuzz(currentDivisorOne, currentDivisorTwo, i);
    }
}
