#include <stdio.h>
#define PR(x) printf(#x " = %d, *" #x " = %d, &" #x " = %p\n", x, *x, (void*)&x)
// Выполнить программу, иллюстрирующую разные операции с указателями. 
// Повторить эксперимент для разных типов данных

int main()
{
    int mas[] = { 100, 200, 300 };
    int* ptr1, * ptr2;
    ptr1 = mas;
    ptr2 = &mas[2];
    PR(ptr1);
    ptr1++;
    PR(ptr1);
    PR(ptr2);
    ++ptr2;
    printf("ptr2 - ptr1 = %ld\n", ptr2 - ptr1);

    return 0;
}
