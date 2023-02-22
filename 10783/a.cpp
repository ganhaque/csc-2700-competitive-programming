#include<iostream>
#include<stdio.h>

using namespace std;

int calculateOddSum1(int a, int b) {
  int sum = 0;
  for (int i = a; i <= b; i++) {
    if (i % 2 != 0) {
      sum += i;
    }
  }
  return sum;
}

int main() {
  // int a,b,c,d;
  int d;
  int i, j, k;
  scanf("%d", &d);

  // while(scanf("%d ", &a) != EOF) {
  for (i = 0; i < d * 2; i += 2) {
    int a, b;
    scanf("%d %d", &a, &b);
    // printf("%d %d", a, b);
    printf("Case %d: %d\n", i / 2 + 1, calculateOddSum1(a, b));
  }

  return 0;
}

