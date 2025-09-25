#include <stdio.h>
#include <stdlib.h>

typedef struct Roman {
  char roman_key;
  int number;
} Roman;

Roman roman[7] = {{'I', 1},   {'V', 5},   {'X', 10},  {'L', 50},
                  {'C', 100}, {'D', 500}, {'M', 1000}};

int findNum(char roman_char) {
  for (int i = 0; i < 7; i++) {
    if (roman[i].roman_key == roman_char) {
      return roman[i].number;      
    }
  }
  return -1;
}

int converted(char *str) {
  int size = 0;
  while (*(str + size) != 0) {
    size++;
  }

  int sum = 0;
  int remember = 0;
  
  for (int i = size - 1; i >= 0; i--) {
    if (remember <= findNum(str[i])) {
      sum += findNum(str[i]);      
      remember = findNum(str[i]);
    } else {
      sum -= findNum(str[i]);      
      remember = findNum(str[i]);      
    }
  }
  return sum;
}

int main() {

  char *roman = "T";

  printf("%d", converted(roman));  
  return EXIT_SUCCESS;  
}  
