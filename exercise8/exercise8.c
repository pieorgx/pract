#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int factorial(int number);
int countAnagram(char *word);

int main()
{
    char word[15]; // Створення змінної для слова (символів в масиві 14+1, бо останім символом буде термінуючий нуль)

    printf("Enter a word: "); // Підказка для користувача, що треба ввести слово
    scanf("%s", &word); // Зчитування з клавіатури
    strupr(word); // Переведення слова в верхній реєстр, щоб обчислення було вірним

    int anagrams_counter = countAnagram(word); // Оголошення змінної, в яку буде передано кількість анограм

    printf("Numbers of anagrams: %d\n", anagrams_counter); // Виведення результату на екран

    return 0;
}

int factorial(int number) // Рекурсивна функція, яка виконує обчислення факторіалу
{
    if (number <= 1)
    {
        return 1;
    }
    else
        return number * factorial(number - 1);
    
}

int countAnagram(char *word) // Функція, яка рахує кількість анограм
{
    int len = strlen(word);
    
    // Обчислення кількості анаграм
    int anagramCount = factorial(len);
    
    // Обчислення кількості повторюючихся літер
    int letterCounts[26] = {0};
    for (int i = 0; i < len; i++)
    {
        letterCounts[word[i] - 'A']++;
    }
    
    // Застосування формули для врахування повторюючихся літер
    for (int i = 0; i < 26; i++)
    {
        if (letterCounts[i] >= 1)
        {
            anagramCount /= factorial(letterCounts[i]);
        }
    }
    
    return anagramCount;
}