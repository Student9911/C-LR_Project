#include <stdio.h>
#include <cstring>
#include <iostream>
#include <stdlib.h>
#include <tchar.h>
using namespace std;

int countEmptyAndNonEmptyChars(FILE* in);
int findSubstring(FILE* in, char* substring);

int main(void) {
    char ch, substring[50];
    setlocale(LC_ALL, "ru");

    char name[] = "MyFile3.txt";
    FILE* in;
    errno_t err = fopen_s(&in, name, "r");

    // ���������, ������� �� ������� ����
    if (err != 0) {
        printf("���� %s �� ������", name);
    }
    else {
        // ������ ������� �� ����� �� ������ � ������� �� �� �����
        while (!feof(in)) {
            ch = getc(in);
            putchar(ch);
        }
    }
    //FILE* in;
    fopen_s(&in, name, "r");

    
    if (in == NULL) {
        printf("���� %s �� ������", name);
    }
    else {
        printf("������� ������� ���������: ");
        scanf_s("%s", substring, _countof(substring));

        int matchIndex = findSubstring(in, substring);
        if (matchIndex == -1) {
            printf("��������� �� �������\n");
        }
        else {
            printf("��������� ������� �� ������� %d\n", matchIndex);

            FILE* out;
            fopen_s(&out, "output.txt", "w");
            if (out == NULL) {
                printf("�� ������� ������� ���� output.txt\n");
            }
            else {
                fprintf(out, "��������� ������� �� ������� %d\n", matchIndex);
                fclose(out);
            }
        }

        countEmptyAndNonEmptyChars(in);
    }

    fclose(in);

    return 0;
}

int countEmptyAndNonEmptyChars(FILE* in) {
    int emptyCharsCount = 0;
    int nonEmptyCharsCount = 0;
    char ch;
    while ((ch = getc(in)) != EOF) {
        if (ch == ' ' || ch == '\t' || ch == '\n') {
            emptyCharsCount++;
        }
        else {
            nonEmptyCharsCount++;
        }
    }
    printf("���������� ������ ��������: %d\n", emptyCharsCount);
    printf("���������� �� ������ ��������: %d\n", nonEmptyCharsCount);
    return 0;
}

int findSubstring(FILE* in, char* substring) {
    char ch;
    int matchIndex = -1;
    int startIndex = 0;
    while ((ch = getc(in)) != EOF) {
        if (ch == substring[startIndex]) {
            if (startIndex == 0) {
                matchIndex = ftell(in) - 1;
            }
            startIndex++;
            if (startIndex == strlen(substring)) {
                return matchIndex;
            }
        }
        else {
            startIndex = 0;
            matchIndex = -1;
        }
    }
    return matchIndex;
}