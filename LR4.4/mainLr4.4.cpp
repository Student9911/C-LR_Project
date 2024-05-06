#include <iostream>
#include <cstring>

using namespace std;

void processString(char* str);

// Организовать массив строк. Применить функции, написанные в предыдущем пункте к строкам, составляющим этот массив



//Этот код создает массив из трех строк, считывает их с клавиатуры, 
//применяет функцию processString к каждой строке и освобождает 
//память после завершения работы.



int main() {
    setlocale(LC_ALL, "ru");
    const int numStrings = 3; // Количество строк в массиве
    char** stringArray = new char* [numStrings];

    for (int i = 0; i < numStrings; ++i) {
        stringArray[i] = new char[100]; // Выделяем память под каждую строку
        cout << "Введите строку " << i + 1 << ": ";
        cin.getline(stringArray[i], 100); // Считываем строку
    }

    // Применяем функцию к каждой строке в массиве
    for (int i = 0; i < numStrings; ++i) {
        processString(stringArray[i]);
    }

    // Освобождаем выделенную память
    for (int i = 0; i < numStrings; ++i) {
        delete[] stringArray[i];
    }
    delete[] stringArray;

    return 0;
}


void processString(char* str) {
    // Например, просто выводим строку    
    cout << str << endl;
}