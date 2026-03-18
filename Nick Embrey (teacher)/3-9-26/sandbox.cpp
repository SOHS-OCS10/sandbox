#include <iostream>
#include <string>

using namespace std;

void reverse(char word[], int index);

int main() {
    char word[5] = {'H','e','l','l','o'};
    reverse(word, 4);
    return 0;
}

void reverse(char word[], int index) {
    if(index < 0) {
        return;
    } else {
        cout << word[index] << endl;
        reverse(word, index-1);
    }
}