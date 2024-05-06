#include <stdio.h>  // Включает стандартную библиотеку ввода/вывода

int main(void) {
    // Объявляем переменную для символа и массив символов для имени файла
    char ch, name[50];

    // Открываем файл для чтения с помощью fopen_s
    FILE* in;
    errno_t err = fopen_s(&in, "F:\MyFile2.txt", "r");

    // Проверяем, удалось ли открыть файл
    if (err != 0) {
        printf("Файл %s не открыт", name);
    }
    else {
        // Читаем символы из файла по одному и выводим их на экран
        while (!feof(in)) {
            ch = getc(in);
            putchar(ch);
        }
    }

    // Закрываем файл
    fclose(in);

    return 0;
}