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
    char special[] = "!.@#$^&*?><(";
    char numbers[] = "0123456789";
    char p[PASS_LEN];
    int i = 0, randomizer = 0;

    srand((unsigned int)(time(NULL)));
    while (i != (PASS_LEN-1))
    {
        randomizer = rand() % 4;
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
                    p[i] = special[rand() % 12];
                    continue;
                }
            case 4:
                {
                    p[i] = numbers[rand() % 10];
                    continue;
                }
            default:
                break;
        }
        i++;
    }
    for (i = 0; i < PASS_LEN; i++)
        printf("%c", p[i]);

    return 0;
}
