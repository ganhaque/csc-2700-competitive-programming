#include<iostream>
#include<stdio.h>
#include <string>

using namespace std;

int process(int n) {
  if (n < 10) {
    return n;
  }
  int t = n;
  int sum = 0;
  while (t > 0) {
    sum += t % 10;
    t /= 10;
  }

  return process(sum);
}

int main() {
  int a;
  int b,c,d,e;
  int i, j, k;

  while(scanf("%d", &c) != EOF && c != 0) {
  // for (i = 0; i < c; i++) {
    printf("%d\n", process(c));
  // }
  }

  return 0;
}

