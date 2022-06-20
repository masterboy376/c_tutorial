#include <stdio.h>
/*conversion of units*/

void invertedPattern(int n)
{
    for(int i=n; i>=1;i--){
        for(int j=1; j<i; j++){
            printf("*");
        }
        printf("*\n");
    }
}
void erectPattern(int n)
{
    for(int i=1; i<=n;i++){
        for(int j=1; j<i; j++){
            printf("*");
        }
        printf("*\n");
    }
}

int main()
{

    char input;
    int length;

    while (1)
    {
        printf("Enter the input character. q to quit\n 0. to print erect pattern\n 1. to print inverted pattern\n");
        scanf(" %c", &input);

        switch (input)
        {
        case 'q':
            printf("Quitting the program...");
            goto end;
            break;

        case '0':
        printf("Enter the length of pattern: ");
        scanf("%d", &length);
            printf("the erect pattern of length %d\n", length);
            erectPattern(length);
            break;

        case '1':
        printf("Enter the length of pattern: ");
        scanf("%d", &length);
            printf("the inverted pattern of length %d\n", length);
            invertedPattern(length);
            break;

        default:
            printf("please choos ethe correct option: ");
            scanf("%c", &input);
            break;
        }
    }
end:
    printf("Program ended.");

    return 0;
}