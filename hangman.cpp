#include <iostream>

using namespace std;

int main() {
    string letter = "hello";
    string word[] = {"h", "e", "l", "l", "o"};
    string guessed[] = {};

    while (word != guessed) {
        cout << "Guess a letter: ";
        cin >> letter;
        if (letter in word) {
            cout << "Guessed Correctly";
        else {
            cout << "Guessed Wrongly";
        }
        }

    }


}