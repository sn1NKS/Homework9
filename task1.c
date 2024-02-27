#include <stdio.h>
#include <string.h>
#define SIZE 100

int main(void)
{

    char name_in[] = "input.txt";
    char name_out[] = "output.txt";

    FILE *f_in = fopen(name_in, "r");
    FILE *f_out = fopen(name_out, "w");

    char word1[SIZE];
    char word2[SIZE];

    fscanf(f_in, "%s%s", word1, word2);

    int alpha1[26] = {0};
    int alpha2[26] = {0};

    int counter = -1;

    while (word1[++counter] != '\0')
        ++alpha1[word1[counter] - 'a'];
    counter = -1;

    while (word2[++counter] != '\0')
        ++alpha2[word2[counter] - 'a'];

    for (int i = 0; i < 26; ++i)
        if (alpha1[i] == 1 && alpha2[i] == 1)
            fprintf(f_out, "%c ", i + 97);

    fclose(f_in);
    fclose(f_out);

    return 0;
}

