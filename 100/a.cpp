#include<iostream>
#include<stdio.h>
#include <bits/stdc++.h>

using namespace std;

int main() {
  // cout << "lol";
  int a,b,n,m;
  int i, j, k;
  int counter;
  int counter2;

  while(scanf("%d %d", &a, &b) == 2) {
    // print the input
    counter2 = 1;
    // cout << a << " " << b << " ";
    printf("%d %d ", a, b);

    //ensure a is always smaller than b
    if (a > b) {
      swap(a, b);
    }

    // go through a to b
    for(i = a; i <= b; i++) {
      counter = 1;
      j = i;

      while(j > 1) {
        if (j % 2 == 0) {
          j /= 2;
        }
        else {
          j = 3 * j + 1;
        }
        counter += 1;
      }

      //check max
      counter2 = max(counter2, counter);
    }


    // cout << counter2 << "\n";
    printf("%d\n", counter2);

  }

  return 0;
}
