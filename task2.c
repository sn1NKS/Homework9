#include <stdio.h>
#include <string.h>
#define SIZE 1000

int main(void)
{
    FILE *f_in, *f_out;

    char name_in[] = "input.txt";
    char name_out[] = "output.txt";

    f_in = fopen(name_in, "r");
    f_out = fopen(name_out, "w");

    char str[SIZE];

    fscanf(f_in, "%[^\n]", str);

    int len = strlen(str);

    for (int i = 0; i < len; i++)
    {
        if (str[i] == 'a')
            str[i] = 'b';

        else if (str[i] == 'b')
            str[i] = 'a';

        if (str[i] == 'A')
            str[i] = 'B';

        else if (str[i] == 'B')
            str[i] = 'A';
    }
    fprintf(f_out, "%s", str);

    fclose(f_in);
    fclose(f_out);

    return 0;
}