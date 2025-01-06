#include <stdio.h>

int main(){

    FILE *f = fopen("data.txt", "r");

    char word1[100], word2[100];

    fscanf(f, "%s", word1);
    puts(word1);

    fscanf(f, "%s", word2);
    puts(word2);
    
    if (feof(f)) {
        printf("stream is done..\n");
    } else {
        printf("Stream is not done..\n");
    }

    return 0;
}
