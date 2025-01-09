#include <stdio.h>

int main(){
    FILE *o = fopen("new.txt", "w");
    if (o == NULL){
        printf("Faylni ochishda xatolik yuz berdi\n");
        return 1;
    } 

    int n[5], s = 0;
    printf("5 ta son kiriting\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &n[i]);
        s += n[i];
    }

    for (int i = 0; i < 5; i++) {
        fprintf(o, "%d", n[i]);
        if (i < 4){
            fprintf(o, " + ");
        } else if(4 < 5){
            fprintf(o, " = %d\n", s);
        }
    }
    
    fclose(o);
    return 0;
}
