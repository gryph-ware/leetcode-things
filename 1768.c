#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *mergeString(char *word1, char *word2) {
  unsigned int size1 = strlen(word1);
  unsigned int size2 = strlen(word2);

  char *merged = malloc((size1 + size2) * sizeof(char));

  unsigned int max = (size1 > size2) ? size1 : size2;

  int index = 0;
  
  for (size_t i = 0; i < max; i++) {
    if (i < size1)
      merged[index++] = word1[i];
    if (i < size2)
      merged[index++] = word2[i];
  }

  merged[index] = '\0';
  
  return merged;
}

int main() {

  char *word1 = "chanh";
  char *word2 = "nhi";

  printf("%s", mergeString(word1, word2));
  
  return EXIT_SUCCESS;  
}  
