#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int findCountOfPoints (int x1, int y1, int r1, int x2, int y2, int r2); // Оголошення фукції (на цій строці коду прототип функції), яка буде рахувати кількість точок перетину

int main()
{
    int x1, y1, r1, x2, y2, r2; // Оголошення змінних точок

    printf("Enter the coordinates (x1, y1) and radius (r1) of the first circle:\n"); // Підказка для користувача, що треба ввести значення точок та радіуса для першого кола
    scanf("%d %d %d", &x1, &y1, &r1); // Зчитування з клавіатури

    printf("Enter the coordinates (x2, y2) and radius (r2) of the second circle:\n"); // Підказка для користувача, що треба ввести значення точок та радіуса для дургого кола
    scanf("%d %d %d", &x2, &y2, &r2); // Зчитування з клавіатури

    int intersectionCount = findCountOfPoints(x1, y1, r1, x2, y2, r2); // Оголошення змінної, значення якої буде залежити від функції, яка рахує кількість точок перетину

    if (intersectionCount == -1) // Якщо кола накладаються один на одного, то результатом програми буде даний текст
    {
        printf("The circles have infinite intersection points.\n"); // Вивід результату на екран
    }
    else // У випадку, коли точок декілька, то результатом програми буде цей текст
    {
        printf("The circles have %d intersection point(s).\n", intersectionCount); // Вивід результату на екран
    }

    return 0;
}

int findCountOfPoints (int x1, int y1, int r1, int x2, int y2, int r2) // Реалізація функції, яка рахує кількість точок перетину
{
    // Обчислення відстані між центрами кола
    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    // Перевірка випадків перетину
    if (distance > r1 + r2)
    {
        // Кола не перетинаються
        return 0;
    }
    else if (distance == r1 + r2)
    {
        // Одна точка перетину
        return 1;
    }
    else if (distance < fabs(r1 - r2))
    {
        // Кола містяться одне в одному, немає точок перетину
        return 0;
    }
    else if (distance == fabs(r1 - r2))
    {
        // Одна точка перетину на межі кола
        return 1;
    }
    else
    {
        // Дві точки перетину
        return 2;
    }

}
