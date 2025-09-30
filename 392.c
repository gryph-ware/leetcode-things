#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool isSubsequence(char *s, char *t) {
  unsigned int size1, size2;
  size1 = size2 = 0;

  while (*(s + size1) || *(t + size2)) {
    if (*(s + size1) != '\0') {
      size1++;
    }
    if (*(t + size2) != '\0') {
      size2++;
    }
  }

  if (size1 == 0) {
    return true;
  }

  if (size2 == 0) {
    return false;
  }
  
  unsigned int index = 0;
  
  for (size_t i = 0; i < size2; i++) {
    if (s[index] == t[i]) {
      index++;
    }
    if (index == size1) {
      return true;      
    }      
  }    
  return false;  
}  

int main() {

  char *s = "ace";
  char *t = "abcde";

  printf("%d", isSubsequence(s, t));
  
  return EXIT_SUCCESS;  
}  
