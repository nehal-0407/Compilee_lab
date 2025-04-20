#include <iostream>
#include <string>
using namespace std;

bool isOnlyA(const string& str) {
    return str == "a";
}

bool isAPlusBPlus(const string& str) {
    int i = 0;
    int n = str.length();

  
    while (i < n && str[i] == 'a') {
        i++;
    }

    
    if (i == 0) return false;

    
    int bStart = i;
    while (i < n && str[i] == 'b') {
        i++;
    }

   
    return (bStart < n) && (i == n);
}

bool isExactlyAbb(const string& str) {
    return str == "abb";
}

int main() {
    string input;
    cout << "Enter a string: ";
    cin >> input;

    if (isOnlyA(input)) {
        cout << "String matches: a" << endl;
    } else if (isAPlusBPlus(input)) {
        cout << "String matches: a+b+" << endl;
    } else if (isExactlyAbb(input)) {
        cout << "String matches: abb" << endl;
    } else {
        cout << "String does not match any pattern." << endl;
    }

    return 0;
}
