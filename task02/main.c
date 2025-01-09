#include <stdio.h>
#include <string.h>

int main(){
    FILE *i = fopen("input.txt", "r");
    FILE *o = fopen("output.txt", "w");
    if(i == NULL || o == NULL){
        printf("Faylni ochishda xatolik yuz berdi\n");
        return 1;
    }
    char word[100], l[100] = "", sh[100] = "";
    int f = 1;
    while(fscanf(i, "%s", word) != EOF){
        if (f || strlen(word) > strlen(l)) strcpy(l, word);
        if (f || strlen(word) < strlen(sh)) strcpy(sh, word);
        f = 0;
    }

    fprintf(o, "uzun suz : %s\nqisqa suz: %s\n", l, sh);
    fclose(i);
    fclose(o);

    return 0;
}
