#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

int main() {
  // int a,b,c;
  // int i;
  // cin >> c;
  // scanf("%d", &c);

  // char line[1000];
  string line;
  while(getline(cin, line)) {
    bool open = true;
    for (int i = 0; i < line.length(); i++) {
      if (line[i] == '"') {
        if (open) {
          // line.replace(i, 1, "''");
          printf("``");
        }
        else {
          // line.replace(i, 1, "``");
          printf("''");
        }
        open = !open;
      }
      else {
        printf("%c", line[i]);
      }
    }
    printf("\n");
    // printf("%s\n", line.c_str());
  }

  return 0;
}

