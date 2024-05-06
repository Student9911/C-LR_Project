#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    setlocale(LC_ALL, "ru");
    ifstream inputFile("input.txt");
    ofstream outputFile("output.txt");

    string line;
    string pageNumber;
    int i = 0;

    while (getline(inputFile, line)) {
        if (line.find("\f") != string::npos) {
            cout << line[i] << " ������� ��������" << endl;
            // ����� ������� �������� �� ����� ��������, ��������� ����� �������� � �����
            outputFile << pageNumber << "\n";
            pageNumber.clear();  // ���������� ����� �������� ��� ��������� ��������
            i++;
        }

        else if (isdigit(line[0])) {
            // ����� ������ � ������� ��������, ��������� ���
            pageNumber = line;
            cout << pageNumber << " ��� ��������� ������� ������� �������� " << endl;
        }
        // ���������� ������ � ����
        outputFile << line << "\n";
        cout << line << " ��� ��������� ����� � ����� ����" << endl;
    }

    // ��������� ��������� ����� �������� (���� ���� �� ������������� �� \f)
    if (!pageNumber.empty()) {
        outputFile << pageNumber << "\n";
    }
    // ��������� �����
    inputFile.close(); 
    outputFile.close();

    return 0;
}
