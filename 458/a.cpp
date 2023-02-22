#include<iostream>
#include<stdio.h>
#include <string>

using namespace std;

int main() {
  int a,b,c,d,e;
  int i, j, k;
  string line;
  char char1;
  char char2;

  while (getline(cin, line)) {
    for (i = 0; i < line.length(); i++) {
      printf("%c", line[i] - 7);
    }
    printf("\n");
  }
  return 0;
}

