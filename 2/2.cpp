#include <stdio.h>

// ������� ���祭�� ?, �� ���� �� ����㯭�
#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

int main() {
    double radius, area;

    // ����� ࠤ?��
    printf("����?�� ࠤ?�� ����: ");
    scanf_s("%lf", &radius);

    // ������ �����
    area = M_PI * radius * radius;

    // �������� १����
    printf("���� ���� � ࠤ?�ᮬ %.2f ���?���� %.2f\n", radius, area);

    return 0;
}
