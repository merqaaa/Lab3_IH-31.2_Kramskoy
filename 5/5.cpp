#include <stdio.h>

int main() {
    char letter;

    // ����� ���� �?���
    printf("����?�� ���� �?��� ����?��쪮�� ��䠢?��: ");
    scanf_s("%c", &letter);

    // ���⢮��� �� ������ �?���
    if (letter >= 'a' && letter <= 'z') {
        letter = letter - 'a' + 'A';
        printf("������ �?��: %c\n", letter);
    }
    else {
        printf("�� ����� �� ���� �?���.\n");
    }

    return 0;
}
