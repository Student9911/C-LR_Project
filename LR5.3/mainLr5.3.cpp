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
            cout << line[i] << " переход страницы" << endl;
            // Нашли признак перехода на новую страницу, добавляем номер страницы в конец
            outputFile << pageNumber << "\n";
            pageNumber.clear();  // Сбрасываем номер страницы для следующей страницы
            i++;
        }

        else if (isdigit(line[0])) {
            // Нашли строку с номером страницы, сохраняем его
            pageNumber = line;
            cout << pageNumber << " это программа считает номером страницы " << endl;
        }
        // Записываем строку в файл
        outputFile << line << "\n";
        cout << line << " это программа пишет в новый файл" << endl;
    }

    // Добавляем последний номер страницы (если файл не заканчивается на \f)
    if (!pageNumber.empty()) {
        outputFile << pageNumber << "\n";
    }
    // закрываем файлы
    inputFile.close(); 
    outputFile.close();

    return 0;
}
