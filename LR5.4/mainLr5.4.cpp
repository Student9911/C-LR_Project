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
    cout << "Введите имя файла " << endl;
    cin >> inputFileName;
    inputFileName = inputFileName + +".txt";
    if (inputFileName == outputFileName)
    {
        outputFileName = "decrypte.txt";

    }
    cout << "Введите ключ для шифрования " << endl;
    cin >> key;
    ifstream inputFile(inputFileName);
    ofstream outputFile(outputFileName);

    if (!inputFile.is_open()) {
        cerr << "не могу открыт файл" << endl;
        return 1;
    }

    if (!outputFile.is_open()) {
        cerr << "не могу создать файл для сохранения" << endl;
        return 1;
    }

    size_t keyLength = key.length();
    size_t keyIndex = 0;

    char ch;
    while (inputFile.get(ch)) {
        ch = ch ^ key[keyIndex];  // Применяем операцию XOR с символом ключа

        outputFile.put(ch);

        
        
    }

    inputFile.close();
    outputFile.close();

    cout << "данные в файле зашифрованы " << outputFileName << endl;

    return 0;
}
