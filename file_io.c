#include <stdio.h>

// r+ : read and append at start. 
// w+ : read and write after clearing previous data. 
// a+ : read and append at end. 

int main()
{
    FILE *ptr = NULL;
    char string[] = "This content was produced by c language";

    // ****** Reading a file ******
    // ptr = fopen("myfile.txt", "r");
    // fscanf(ptr, "%s", string);
    // printf("The content of this file has %s\n",string );
    // char c =fgetc(ptr);
    // printf("%c\n", c );
    // c =fgetc(ptr);
    // printf("%c\n", c );
    // char str[4];
    // fgets(str, 3, ptr);
    // printf("%s\n", str );


    // ****** Writing a file ******
    ptr = fopen("myfile.txt", "a");
    // fprintf(ptr, "%s", string);
    fputc('o',ptr);
    fputs("123456",ptr);

    fclose(ptr);
    return 0;
}