#include<iostream>
#include<stdio.h>
#include <string>

using namespace std;

int main() {
  int a,b;
  int i, j, k;

  while(scanf("%d %d", &a, &b)) {
    if (a == 0 && b == 0) {
      break;
    }

    int carry = 0;
    int carryCounter = 0;

    // string alpha = to_string(a);
    // string beta = to_string(b);

    // neg if a > b
    // pos if a < b
    // int imbalance = abs(alpha.length() - beta.length());

    // if(imbalance == 0) {
    // for(i = alpha.length() - 1; i >= 0; i++) {
    //   if (i + imbalance < 0) {
    //
    //   }
    //   int sum = (int) alpha[i] - '0' + (int) beta[i] - '0' + carry;
    //   if ( sum > 9) {
    //     carryCounter += 1;
    //     carry = 1;
    //   }
    //   // reset carry
    //   else {
    //     carry = 0;
    //   }
    // }
    // }

    while (a > 0 || b > 0) {
      int aDigit = a % 10;
      int bDigit = b % 10;

      int sum = aDigit + bDigit + carry;

      if (sum > 9) {
        carryCounter += 1;
        carry = 1;
      }
      else {
        carry = 0;
      }

      a /= 10;
      b /= 10;
    }

    if (carryCounter == 1) {
      printf("%d carry operation.\n", carryCounter);
    }
    else if (carryCounter == 0) {
      printf("No carry operation.\n");
    }
    else {
      printf("%d carry operations.\n", carryCounter);
    }
  }

  return 0;
}

