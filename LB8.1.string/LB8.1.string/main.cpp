#include <iostream>
#include <string>
using namespace std;

// ������� ��� ��������� ������� �������� ������� � ����� "BASIC" � �����
int CountBasicCharacters(const string& s) {
    int count = 0;
    for (char ch : s) {
        if (ch == 'B' || ch == 'A' || ch == 'S' || ch == 'I' || ch == 'C') {
            count++;
        }
    }
    return count;
}

// ������� ��� ����� ������� ����� "BASIC" �� "Delphi" � �����
string ReplaceBasicWithDelphi(string s) {
    size_t pos = 0;
    while ((pos = s.find("BASIC", pos)) != string::npos) {
        s.replace(pos, 5, "Delphi");
        pos += 6; // ������ ������� �� ������� ����� "Delphi" ���� �����
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
