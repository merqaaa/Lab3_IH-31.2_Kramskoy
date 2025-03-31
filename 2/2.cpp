#include <stdio.h>

// Визначаємо значення ?, якщо воно не доступне
#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

int main() {
    double radius, area;

    // Зчитуємо рад?ус
    printf("Введ?ть рад?ус кола: ");
    scanf_s("%lf", &radius);

    // Обчислюємо площу
    area = M_PI * radius * radius;

    // Виводимо результат
    printf("Площа кола з рад?усом %.2f дор?внює %.2f\n", radius, area);

    return 0;
}
