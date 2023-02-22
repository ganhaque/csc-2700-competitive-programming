#include <cmath>
#include<iostream>
#include<stdio.h>
#include <bits/stdc++.h>
#include <string>
#include <map>
#include <vector>
#include <algorithm>
#include <cctype>

using namespace std;

int countChar(string str, int startIndex) {
  int counter = 0;

  for (int i = startIndex; i < str.length() && i < startIndex + 4; i++) {
    if (str[i] == ' ') {
      break;
    }
    counter += 1;
  }

  // printf("%d\n",counter);
  return counter;
}

int main() {
  map<string, string> dictionary;
  vector<string> vector1;
  vector<int> vector2;
  int a,b,c,d,e;
  int sum = 0;
  int i, j, k;
  int counter1;
  int counter2;
  int counter3;
  string line;
  char char1;
  char char2;

  // while (getline(cin, line)) {
  getline(cin, line);
    for (int i = 0; i < line.length(); i++) {
      bool continueWord = true;
      char1 = line[i];
      if (char1 == ' ') {
        continueWord = false;
        continue;
      }
      a = char1 - 'a' + 1;
      // printf("before sum: %d\n", sum);
      // sum += a + countChar(line, i) * 32;
      sum += pow(32, countChar(line, i + 1)) * a;
      // printf("%f\n", pow(32, countChar(line, i + 1)) * a);
      printf("after sum: %d\n", sum);
    }
    // }

    printf("%s \n", line.c_str());
    printf("%d \n", sum);

    return 0;
}

