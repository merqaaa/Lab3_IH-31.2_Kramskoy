#include <stdio.h>

int main() {
    int total_seconds, hours, minutes, seconds;

    // ����� �?��?��� ᥪ㭤
    printf("����?�� �?��?��� ᥪ㭤: ");
    scanf_s("%d", &total_seconds);

    // ������ ������, 墨���� � ᥪ㭤�
    hours = total_seconds / 3600;
    minutes = (total_seconds % 3600) / 60;
    seconds = total_seconds % 60;

    // �������� १����
    printf("%d ᥪ㭤 = %d �����, %d 墨���, %d ᥪ㭤\n", total_seconds, hours, minutes, seconds);

    return 0;
}
