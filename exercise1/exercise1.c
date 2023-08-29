#include <stdio.h>

int main()
{
    int t1, t2, t3; // Оголошуємо три змінні для часу, за який гості можуть з'їсти торт

    printf("Input 3 values:\n"); // Просимо користувача ввести три значення часу
    scanf("%d%d%d", &t1, &t2, &t3); // Зчитування значень з клавіатури

    if (t1 <= 0 || t1 > 10000) // Перевірка значення t1
    {
        printf("Invalid input! Time values must be between 1 and 10000.\n");

        do {
            printf("Input value for t1: ");
            scanf("%d", &t1);
        } while (t1 <= 0 || t1 > 10000); // Код виконується до того моменту, доки значення не буде вірним
    }

    if (t2 <= 0 || t2 > 10000) // Перевірка значення t2
    {
        printf("Invalid input! Time values must be between 1 and 10000.\n");

        do {
            printf("Input value for t2: ");
            scanf("%d", &t2);
        } while (t2 <= 0 || t2 > 10000); // Код виконується до того моменту, доки значення не буде вірним
    }
    
    if (t3 <= 0 || t3 > 10000) // Перевірка значення t3
    {
        printf("Invalid input! Time values must be between 1 and 10000.\n");

        do {
            printf("Input value for t3: ");
            scanf("%d", &t3);
        } while (t3 <= 0 || t3 > 10000); // Код виконується до того моменту, доки значення не буде вірним
    }
    
    float total_time = 1.0 / t1 + 1.0 / t2 + 1.0 / t3; // Переведення значень в години за формолую, вказаною в теоретичних відомостях
    printf("Time for eating cake: %.2f hours", total_time); // Вивід результату на екран
}