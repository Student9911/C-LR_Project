#include <iostream>
#include <cstring>

using namespace std;

void processString(char* str);

// ������������ ������ �����. ��������� �������, ���������� � ���������� ������ � �������, ������������ ���� ������



//���� ��� ������� ������ �� ���� �����, ��������� �� � ����������, 
//��������� ������� processString � ������ ������ � ����������� 
//������ ����� ���������� ������.



int main() {
    setlocale(LC_ALL, "ru");
    const int numStrings = 3; // ���������� ����� � �������
    char** stringArray = new char* [numStrings];

    for (int i = 0; i < numStrings; ++i) {
        stringArray[i] = new char[100]; // �������� ������ ��� ������ ������
        cout << "������� ������ " << i + 1 << ": ";
        cin.getline(stringArray[i], 100); // ��������� ������
    }

    // ��������� ������� � ������ ������ � �������
    for (int i = 0; i < numStrings; ++i) {
        processString(stringArray[i]);
    }

    // ����������� ���������� ������
    for (int i = 0; i < numStrings; ++i) {
        delete[] stringArray[i];
    }
    delete[] stringArray;

    return 0;
}


void processString(char* str) {
    // ��������, ������ ������� ������    
    cout << str << endl;
}