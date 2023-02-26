#include <stdbool.h>
#include <stdio.h>

#define MAX 1000

void reverseWord(char* source, int sourceLen, char* target) {
  int wordLen = sourceLen;

  for (int i = wordLen - 1; i >= 0; --i) {
    target[wordLen - i - 1] = source[i - 1];
  }
}

int readWord(char* target) {
  char c;
  int i = 0;

  while ((c = getchar()) != '\n') {
    target[i++] = c;
  }
  return i + 1;
}

bool shouldQuit(char* in, int len) {
  return len == 0 ||
         (len > 0 && len <= 2 && (in[0] == 4 || in[0] == -1 || in[0] == 0));
}

int main() {
  char word[MAX];
  int size = 0;

  while (true) {
    size = readWord(word);

    if (shouldQuit(word, size - 1)) {
      break;
    }

    char reversed[size];
    reverseWord(word, size, reversed);

    printf("%s \n", reversed);
  };
}
