#include<iostream>
#include<stdio.h>
#include <string>

using namespace std;

int findMax(int a, int b, int c) {
  int max = a;
  if (b > max) {
    max = b;
  }
  if (c > max) {
    max = c;
  }
  return max;
}

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
    // int idealB, idealG, idealC;
    // char one, two, three;
    for (i = 1; i < 9; i++) {
      scanf("%d", &arr[i]);
    }
    // idealB = findMax(arr[0], arr[3], arr[6]);
    // idealG = findMax(arr[1], arr[4], arr[7]);
    // idealC = findMax(arr[2], arr[5], arr[8]);

    // int orderingFirst = findMax(idealB, idealG, idealC);
    // for (i = 0; i < 3; i++) {
    //   int offset = 0;
    //   if (orderingFirst == idealG) {
    //     offset = 1;
    //   }
    //   else if (orderingFirst == idealC) {
    //     offset = 2;
    //   }
    // }
  }

  return 0;
}

