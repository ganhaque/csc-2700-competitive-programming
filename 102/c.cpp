#include<iostream>
#include<stdio.h>
#include <string>

using namespace std;

int calculateMovement() {
  return -1;
}

int main() {
  int a,b;
  int i, j, k;

  // scanf("%d", &a);
  // for (i = 0; i < a; i++) {
  int arr[9];
  while(scanf("%d", &arr[0]) != EOF) {
    // brown, green, clear
    for (i = 1; i < 9; i++) {
      scanf("%d", &arr[i]);
    }
    int b1 = arr[3] + arr[6];
    int g1 = arr[4] + arr[7];
    int c1 = arr[5] + arr[8];

    int b2 = arr[0] + arr[6];
    int g2 = arr[1] + arr[7];
    int c2 = arr[2] + arr[8];

    int b3 = arr[0] + arr[3];
    int g3 = arr[1] + arr[4];
    int c3 = arr[2] + arr[5];

    int min = b1 + g2 + c3;
    string ans = "BGC";
    // printf("%d", c1 + b2 + g3);
    if (b1 + c2 + g3 <= min) {
      // printf("%s %d", "BCG", b1 + c2 + g3);
      ans = "BCG";
      min = b1 + c2 + g3;
    }
    if (c1 + b2 + g3 < min) {
      // printf("%s %d", "CBG", c1 + b2 + g3);
      ans = "CBG";
      min = c1 + b2 + g3;
    }
    if (c1 + g2 + b3 < min) {
      // printf("%s %d", "CGB", c1 + g2 + b3);
      ans = "CGB";
      min = c1 + g2 + b3;
    }
    if (g1 + b2 + c3 < min) {
      // printf("%s %d", "GBC", g1 + b2 + c3);
      ans = "GBC";
      min = g1 + b2 + c3;
    }
    if (g1 + c2 + b3 < min) {
      // printf("%s %d", "GCB", g1 + c2 + b3);
      ans = "GCB";
      min = g1 + c2 + b3;
    }

    printf("%s %d\n", ans.c_str(), min);

  }

  return 0;
}

