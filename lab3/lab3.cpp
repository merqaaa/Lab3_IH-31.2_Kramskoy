#include <stdio.h>

int main() {
    float meters;

    printf("Введ?ть довжину в метрах: ");
    scanf_s("%f", &meters); 

    printf("Довжина у сантиметрах: %.2f см\n", meters * 100);
    printf("Довжина у м?л?метрах: %.2f мм\n", meters * 1000);

    return 0;
}
