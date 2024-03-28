#include <stdio.h>
#define PR(x) printf(#x " = %f, *" #x " = %f, &" #x " = %p\n", x, *x, (void*)&x)

int main()
{
    double mas[] = { 100.0, 200.0, 300.0 };
    double* ptr1, * ptr2;
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