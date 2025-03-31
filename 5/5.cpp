#include <stdio.h>

int main() {
    char letter;

    // Зчитуємо малу л?теру
    printf("Введ?ть малу л?теру англ?йського алфав?ту: ");
    scanf_s("%c", &letter);

    // Перетворюємо на велику л?теру
    if (letter >= 'a' && letter <= 'z') {
        letter = letter - 'a' + 'A';
        printf("Велика л?тера: %c\n", letter);
    }
    else {
        printf("Ви ввели не малу л?теру.\n");
    }

    return 0;
}
