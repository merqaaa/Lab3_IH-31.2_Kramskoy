#include <stdio.h>

int main() {
    float meters;

    printf("����?�� ������� � �����: ");
    scanf_s("%f", &meters); 

    printf("������� � ᠭ⨬����: %.2f �\n", meters * 100);
    printf("������� � �?�?�����: %.2f ��\n", meters * 1000);

    return 0;
}
