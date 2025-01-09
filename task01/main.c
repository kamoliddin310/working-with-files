#include <stdio.h>

int main(){
    FILE *f = fopen("data.txt", "r");
    if(f == NULL){
        printf("Faylni ochishda xatolik yuz berdi");
        return 1;
    }
    int num, count = 0;
    float s = 0;
    while(fscanf(f, "%d", &num) != EOF){
        s += num;
        count++;
    }
    fclose(f);

        float avg = s / count;
        printf("%.2f\n", avg);
        
    return 0;
}