#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n; // Створення змінної

    printf("Input natural number\n*This number must be from 1 to 150*\nYour number: "); // Підказка для користувача, що треба ввести натуральне число від 1 до 150
    scanf("%d", &n); // Зчитування з клавіатури

    while (n < 1 || n > 150) // Перевірка на валідність даних. Перевірка буде до того моменту, доки число не буде підходящим
    {
        printf("!!!Invalid value!!!\n*This number must be from 1 to 150*\nYour number:");
        scanf("%d", &n);
    }

    int counter; // Оголошення змінної, яка буде рахувати кількість рівних дільників

    for (int m = 1; m <= n; m++) // Перевірка кожного значення через цикл
    {
        if (n % m == n / m) // Якщо умова вірна, то змінна, яка рахує кількість рівних дільників, збільшується на 1
        {
            counter++;
        }
    }
    
    printf("The number of equal divisors of %d: %d", n, counter); // Виведення на екран результату програми

}