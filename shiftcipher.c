#include <stdio.h>
#include <stdlib.h>

main()
{
    char input[1000], check;
    int i, shift, choice;

    printf("\nPress 1 for encryption or Press 2 for decryption. ");
    scanf("%d", &choice);

    if (choice == 1)
    {
        printf("\nEnter the message to encrypt : ");
        gets(input);

        printf("\nEnter the shift : ");
        scanf("%d", &shift);

        for (i = 0; input[i] != '\0'; ++i)
        {
            check = input[i];
            if (check >= 'a' && check <= 'z')
            {
                check += shift;
                if (check > 'z')
                {
                    check -= 'z' + 'a' - 1;
                }
                input[i] = check;
            }
            else if (check >= 'A' && check <= 'Z')
            {
                check += shift;
                if (check > 'Z')
                {
                    check -= 'Z' + 'A' - 1;
                }
                input[i] = check;
            }
        }
        printf("\nThe encrypted message is : %s ", input);
    }
    else if (choice == 2)
    {
        printf("\nEnter the message to decrypt : ");
        gets(input);

        printf("\nEnter the shift : ");
        scanf("%d", &shift);

        for (i = 0; input[i] != '\0'; ++i)
        {
            check = input[i];
            if (check >= 'a' && check <= 'z')
            {
                check -= shift;
                if (check < 'a')
                {
                    check += 'z' - 'a' + 1;
                }
                input[i] = check;
            }
            else if (check >= 'A' && check <= 'Z')
            {
                check -= shift;
                if (check < 'A')
                {
                    check += 'Z' - 'A' + 1;
                }
                input[i] = check;
            }
        }
        printf("\nThe decrypted message is : %s ", input);
    }
    else
        printf("\nWrong input");
}