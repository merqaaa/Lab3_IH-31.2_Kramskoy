#include <stdio.h>

int main() {
    int number;

    // ����� �᫮
    printf("����?�� �?�� �᫮: ");
    scanf_s("%d", &number);

    // ��ॢ?���, � � �᫮ ��୨�
    if (number % 2 == 0) {
        printf("��᫮ %d ��୥.\n", number);
    }
    else {
        printf("��᫮ %d ����୥.\n", number);
    }

    return 0;
}
