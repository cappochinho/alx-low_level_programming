#include "main.h"

/**
 * main - Generates a random password for 101-crackme
 * 
 * Return: Always 0, indicating success
 */

int main(void)
{   
    char letter[] = "abcdefghijklmnopqrstuvwxyz";
    char LETTER[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char numbers[] = "0123456789";
    char p[PASS_LEN];
    int i = 0, randomizer = 0;

    srand((unsigned int)(time(NULL)));
    while (i != (PASS_LEN-2))
    {
        randomizer = rand() % 3;
        switch (randomizer)
        {
            case 1:
                {
                    p[i] = letter[rand() % 26];
                    continue;
                }
            case 2:
                {
                    p[i] = LETTER[rand() % 26];
                    continue;
                }
            case 3:
                {
                    p[i] = numbers[rand() % 10];
                    continue;
                }
            default:
                break;
        }
        i++;
    }
    p[i] = '\0';
    printf("%s", p);

    return 0;
}
