#include <stdio.h>  // �������� ����������� ���������� �����/������

int main(void) {
    // ��������� ���������� ��� ������� � ������ �������� ��� ����� �����
    char ch, name[50];

    // ��������� ���� ��� ������ � ������� fopen_s
    FILE* in;
    errno_t err = fopen_s(&in, "F:\MyFile2.txt", "r");

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

    // ��������� ����
    fclose(in);

    return 0;
}