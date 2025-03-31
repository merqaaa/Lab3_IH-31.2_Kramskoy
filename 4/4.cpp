#include <stdio.h>

int main() {
    int number;

    // Зчитуємо число
    printf("Введ?ть ц?ле число: ");
    scanf_s("%d", &number);

    // Перев?ряємо, чи є число парним
    if (number % 2 == 0) {
        printf("Число %d парне.\n", number);
    }
    else {
        printf("Число %d непарне.\n", number);
    }

    return 0;
}
