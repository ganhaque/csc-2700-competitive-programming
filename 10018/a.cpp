#include<iostream>
#include<stdio.h>
#include <string>

using namespace std;

long long getPalindrome (long long n) {
  long long t = n;
  long long y = 0;

  while (t > 0) {
    // move to next
    y *= 10;
    // add
    y += t % 10;
    // update to next
    t /= 10;
  }

  return y;
}
// bool isNumPalindrome(int n) {
//   int y = getPalindrome(n);
//   return (n == y);
// }

int main() {
  long long a;
  int b,c,d,e;
  int i, j, k;

  scanf("%d", &c);
  // while(scanf("%d", &c) != EOF) {
  for (i = 0; i < c; i++) {
    scanf("%lld", &a);
    int counter = 0;
    while (a != getPalindrome(a)) {
      counter += 1;
      a += getPalindrome(a);
    }
    printf("%d %lld\n", counter, a);
  }
  // }

  return 0;
}

