/*
 * File: P1Permutations.cpp
 */

#include <iostream>
#include "console.h"
#include "simpio.h"
#include "P1Permutations.h"
using namespace std;

/* Function definition */

int P1Permutations() {
   int n, k;
   cout << "Enter the number of objects (n): ";
   cin >> n;
   cout << "Enter the number to be chosen (k): ";
   cin >> k;
   cout << "permutations(n, k) = " << permutations(n, k) << endl;
   return 0;
}

/* Function definition */

int permutations(int n, int k) {
   // TODO

}
