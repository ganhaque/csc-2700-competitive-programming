#include<iostream>
#include<stdio.h>
#include <string>

using namespace std;

int calculate(int n) {
  n *= 567;
  n /= 9;
  n += 7492;
  n *= 235;
  n /= 47;
  n -= 498;
  n /= 10;
  return abs(n % 10);
}

int main() {
  int c;
  long long a;
  int i;

  while(scanf("%d", &c) != EOF) {
    for (i = 0; i < c; i++) {
      scanf("%lld", &a);
      printf("%d\n", calculate(a));
    }
  }

  return 0;
}

