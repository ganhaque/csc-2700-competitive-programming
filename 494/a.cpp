#include <cctype>
#include<iostream>
#include<stdio.h>
#include <string>

using namespace std;


int main() {
  int a,b;
  int i, j, k;
  string line;

  while (getline(cin, line)) {
    int counter = 0;
    bool inWord = false;

    // for (i = 0; i < line.length(); i++) {
    for (char c : line) {
      // if is valid letters
      // if (!isWord && ((64 < line[i] && line[i] < 91) || (96 < line[i] && line[i] < 123))) {
      if (isalpha(c)) {
        // printf("found letter: %d\n", c);
        if (!inWord) {
          counter += 1;
        }
        inWord = true;
      }
      // if is space
      // if ((int) c == 32) {
      else {
        inWord = false;
      }
      // }
    }
    printf("%d\n", counter);
    }

    return 0;
  }
