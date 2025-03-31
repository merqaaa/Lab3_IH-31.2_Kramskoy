#include <stdio.h>

int main() {
    int total_seconds, hours, minutes, seconds;

    // Зчитуємо к?льк?сть секунд
    printf("Введ?ть к?льк?сть секунд: ");
    scanf_s("%d", &total_seconds);

    // Обчислюємо години, хвилини та секунди
    hours = total_seconds / 3600;
    minutes = (total_seconds % 3600) / 60;
    seconds = total_seconds % 60;

    // Виводимо результат
    printf("%d секунд = %d годин, %d хвилин, %d секунд\n", total_seconds, hours, minutes, seconds);

    return 0;
}
