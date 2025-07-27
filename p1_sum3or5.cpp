// PROBLEM STATEMENT: If we list all the natural numbers below 10
// that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.

// Find the sum of all the multiples of 3 or 5 below 1000.

// Naive approach:

#include <iostream>
#include <cmath>
using namespace std;

int naive_approach() {
    int sum = 0;
    for (int i = 0; i < 1000; i++) {
        if (i % 3 == 0 || i % 5 == 0)
            sum += i;
    }
    
    return sum;
}

int series_approach() {
    const int max_num = 1000;
    const int multiples_of_three = floor((max_num - 1)/3);
    const int multiples_of_five = floor((max_num - 1)/5);
    const int multiples_of_fifteen = floor((max_num - 1)/15);

    const int sum_three = 3 * (multiples_of_three*(multiples_of_three + 1)/2);
    const int sum_five = 5 * (multiples_of_five*(multiples_of_five + 1)/2);
    const int sum_fifteen = 15 * (multiples_of_fifteen*(multiples_of_fifteen + 1)/2);

    return sum_three + sum_five - sum_fifteen;
}

int main() {
    cout << "Naive Approach, O(n): " << naive_approach() << endl;
    cout << "Series Approach, O(1): " << series_approach() << endl;
    return 0;
} 