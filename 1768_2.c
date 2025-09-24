#include <stdio.h>
#include <stdlib.h>

char *mergeString(char *word1, char *word2) {
  unsigned int index1 = 0;
  while (*(word1 + index1) != 0) {
    ++index1;
  }
  
  unsigned int index2 = 0;
  while (*(word2 + index2) != 0) {
    ++index2;
  }

  char *mergeStr = (char *)malloc((index1 + index2 + 1));

  unsigned int i = 0;
  while (*(word1 + i) != 0 && *(word2 + i) != 0) {
    *(mergeStr + (i << 1)) = *(word1 + i);
    *(mergeStr + (i << 1) + 1) = *(word2 + i);
    i++;
  }

  int j = i;

  if (*(word1 + i) == 0) {
    while (*(word2 + i) != 0) {
      *(mergeStr + i + j) = *(word2 + i);
      i++;      
    }
  } else {
    while (*(word1 + i) != 0) {
      *(mergeStr + i + j) = *(word1 + i);
      i++;      
    }
  }

  *(mergeStr + i + j) = 0;
  return mergeStr;  
}  
int main() {

  char *word1 = "chanh";
  char *word2 = "nhi";

  printf("%s\n", mergeString(word1, word2));
  
  return EXIT_SUCCESS;  
}  
