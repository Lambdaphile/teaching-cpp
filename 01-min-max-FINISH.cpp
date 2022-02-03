/**
 * Exercise:
 *
 *   Write a program that reads from the console a series of
 *   integers and prints the smallest and largest of them.
 *
 * Solution & Guidelines:
 *
 *   First, declare and define the following variables:
 *     int n, sequence[100],
 *         currNum, minNum = INT_MAX, maxNum = INT_MIN;
 *
 *   And then:
 *     1. Read the count of numbers user wants to enter (int n).
 *     2. Consequently read the numbers and keep them in
 *        an one dimensional array (int sequence[100]).
 *     3. Iterate over the array and do the following operations:
 *        - if current number < min number then min number = current number
 *        - if current number > max number then max number = current number
 *     4. Print min and max numbers.
 *
 *   Please make sure the code is clean and readable.
 */

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    system("clear");

    int n, sequence[100],
        currNum, minNum = INT_MAX, maxNum = INT_MIN;

    cout << "Please, enter the count of numbers you wan to enter: ";
    cin >> n;
    cout << endl;

    for (int i = 0; i < n; i++) {
        cout << "Number " << i + 1 << ":  ";
        cin >> sequence[i];
    }

    for (int i = 0; i < n; i++) {
        currNum = sequence[i];

        if (currNum < minNum) {
            minNum = currNum;
        }
        if (currNum > maxNum) {
            maxNum = currNum;
        }
    }

    cout << "\nMin number: " << minNum << endl;
    cout << "Max number: " << maxNum << endl;

    return 0;
}
