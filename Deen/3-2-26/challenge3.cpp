#include <iostream>
#include <sstream>
#include <iomanip>
using namespace std;

int main(){
    cout<<"Enter a sentence: ";
    string input;
    getline(cin, input);

    ostringstream out;

    out << left << setw(20) << input << endl;
    out << right << setw(20) << input << endl;
    out << setfill('*') << setw(20) << input << endl;

    cout << "\nFormatted text:\n";
    cout << out.str();

    return 0;
}