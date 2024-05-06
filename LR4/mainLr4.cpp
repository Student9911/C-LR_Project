#include<iostream>
#include<cstring>
using namespace std;

int dlina1(const char* str);
int dlina2(const char* str);
int dlina3(const char* str);
void kopir(char* dest, const char* src);
bool sravn(const char* str1, const char* str2);
void konkat(char* dest, const char* str1, const char* str2);


int main() {

    setlocale(LC_ALL, "ru");

    char str1[] = "qwerty";
    char str2[] = "1234567890";
    char str3[25];
    

    //cout << "длина str1 = " << dlina1(str1) << " , str2 = ";
    //cout << dlina1(str2) << endl;
    //cout << "длина str1 = " << dlina2(str1) << " , str2 = ";
    //cout << dlina2(str2) << endl;
    //cout << "длина str1 = " << dlina3(str1) << " , str2 = ";
    //cout << dlina3(str2) << endl;
    //kopir(str3, str2); //   вызов функции
    //cout << " результат копирования: str3 =  " << str3 << ", str2 = " << str2;  
    //konkat(str3, str1, str2);// вызов
    //cout << " результат сцепления "<< str3;
    cout << "результат ставнения " << sravn(str1, str2);
   
    

	return 0;
}

// 1) Определение длины строки
//Способ 1: Использование функции strlen() из библиотеки <cstring>```cpp
int dlina1(const char* str) {
    return strlen(str);
}

//Способ 2: Использование оператора sizeof()
int dlina2(const char* str) {   
    return sizeof(str) - 1;
}

//Способ 3: Перебор символов до нулевого терминатора
int dlina3(const char* str) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

// 2) Копирование строк
void kopir(char* dest, const char* src) {
    int i = 0;
    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
}

// 3) Сравнение строк
bool sravn(const char* str1, const char* str2) {
    int i = 0;
    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] < str2[i]) {
            return false;
        }
        else if (str1[i] > str2[i]) {
            return false;
        }
        i++;
    }
    if (str1[i] == '\0' && str2[i] != '\0') {
        return false;
    }
    else if (str1[i] != '\0' && str2[i] == '\0') {
        return false;
    }
    else {
        return true;
    }
}

// 4) Конкатенация строк
void konkat(char* dest, const char* str1, const char* str2) {
    int destLength = strlen(dest);
    int str1Length = strlen(str1);
    int str2Length = strlen(str2);

    for (int i = 0; i < str1Length; i++) {
        dest[i] = str1[i];
    }
    for (int i = 0; i < str2Length; i++) {
        dest[str1Length + i] = str2[i];
    }
    dest[str1Length + str2Length] = '\0';
}