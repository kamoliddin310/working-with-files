#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
  FILE *file = fopen("data.txt", "r");
  if (file == NULL){
    printf("Faylni ochishda xatolik yuz berdi");
    return 1;
  }
  FILE *juft = fopen("juft.txt", "w");
  FILE *toq = fopen("toq.txt", "w");

  int number;
  while (fscanf(file, "%d", &number) == 1){
    if (number % 2 == 0){
      fprintf(juft, "%d ", number);
    }else {
      fprintf(toq, "%d ", number);
    }
  }
  fclose(file);
  fclose(juft);
  fclose(toq);
  
  return 0;
  
}