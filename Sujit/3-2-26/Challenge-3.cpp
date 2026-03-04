#include <iostream>
#include <iomanip>
#include <sstream>
using namespace std;

int main() {
    char input[100];
    cout << "Enter text: ";
    cin.getline(input, 100);

    ostringstream oss;
    // 3 Manipulators: left, setw, and setfill
    oss << left << setw(30) << setfill('_') << input;

    cout << oss.str() << endl;
    return 0;
}