#include <iostream>
#include <string>
using namespace std;

// Функція для підрахунку кількості входжень символів з слова "BASIC" у рядку
int CountBasicCharacters(const string& s) {
    int count = 0;
    for (char ch : s) {
        if (ch == 'B' || ch == 'A' || ch == 'S' || ch == 'I' || ch == 'C') {
            count++;
        }
    }
    return count;
}

// Функція для заміни кожного слова "BASIC" на "Delphi" в рядку
string ReplaceBasicWithDelphi(string s) {
    size_t pos = 0;
    while ((pos = s.find("BASIC", pos)) != string::npos) {
        s.replace(pos, 5, "Delphi");
        pos += 6; // Зміщуємо позицію на довжину слова "Delphi" після заміни
    }
    return s;
}

int main() {
    string str;
    cout << "Enter string:" << endl;
    getline(cin, str);

    int basicCount = CountBasicCharacters(str);
    cout << "Number of 'BASIC' letters in the string: " << basicCount << endl;

    string modifiedStr = ReplaceBasicWithDelphi(str);
    cout << "Modified string: " << modifiedStr << endl;

    return 0;
}
