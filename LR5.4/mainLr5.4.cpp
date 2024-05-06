#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {

    setlocale(LC_ALL, "ru");

    string inputFileName = "input";
    string outputFileName = "outputFile.txt";
    string key = "10";
    //otputFile.txt
    //input.txt
    cout << "������� ��� ����� " << endl;
    cin >> inputFileName;
    inputFileName = inputFileName + +".txt";
    if (inputFileName == outputFileName)
    {
        outputFileName = "decrypte.txt";

    }
    cout << "������� ���� ��� ���������� " << endl;
    cin >> key;
    ifstream inputFile(inputFileName);
    ofstream outputFile(outputFileName);

    if (!inputFile.is_open()) {
        cerr << "�� ���� ������ ����" << endl;
        return 1;
    }

    if (!outputFile.is_open()) {
        cerr << "�� ���� ������� ���� ��� ����������" << endl;
        return 1;
    }

    size_t keyLength = key.length();
    size_t keyIndex = 0;

    char ch;
    while (inputFile.get(ch)) {
        ch = ch ^ key[keyIndex];  // ��������� �������� XOR � �������� �����

        outputFile.put(ch);

        
        
    }

    inputFile.close();
    outputFile.close();

    cout << "������ � ����� ����������� " << outputFileName << endl;

    return 0;
}
