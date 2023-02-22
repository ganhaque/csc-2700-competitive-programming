#include <iostream>
#include <stdio.h>

using namespace std;

int main() {

  char ch;
  bool open = true;
  while(scanf("%c", &ch) != EOF) {
    if (ch == '"') {
      if (open) {
        printf("``");
      }
      else {
        printf("''");
      }
      open = !open;
    }
    else {
      printf("%c", ch);
    }
  }

  return 0;
}

