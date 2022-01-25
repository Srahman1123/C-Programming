
//Shamsur Rahman.

#include<bits/stdc++.h>

using namespace std;

/********* Searching algos **********/

// Linear Search

int linear_search(int a[120], int key) {

int comparisons = 0;

for (int i = 0; i < 120; i++) {

if (a[i] == key)

return comparisons + 1;

else

comparisons++;

}

return comparisons;

}

// binary Search

int binary_search(int a[120], int key) {

int first = 0;

int last = 119;

int comparisons = 0;

while (first <= last) {

int mid = first + (last - first) / 2;

if (key < a[mid]) {

comparisons++;

last = mid - 1;

} else if (key > a[mid]) {

comparisons++;

first = mid + 1;

} else {

return comparisons + 1;

}

}

return comparisons;

}

/********* Sorting algos **********/

//Bubble Sort

void bubble_sort(int a[120], int & comparisons, int & swaps) {

int i, j;

for (i = 0; i < 119; i++) {

for (j = 0; j < 119 - i; j++) {

comparisons++;

if (a[j] > a[j + 1]) {

swap(a[j], a[j + 1]);

swaps++;

}

}

}

}

// Selection Sort

void selection_sort(int a[120], int & comparisons, int & swaps) {

int i, j, min_pos;

for (i = 0; i < 119; i++) {

min_pos = i;

for (j = i + 1; j < 120; j++) {

comparisons++;

if (a[j] < a[min_pos])

min_pos = j;

}

swaps++;

swap(a[min_pos], a[i]);

}

}

int main() {

int sorted[120];

for (int i = 0; i < 120; i++) {

sorted[i] = i * 2;

}

cout << "********** Searching algos ************\n";

cout << "Linear Search : " << linear_search(sorted, 100) << " comparisons" << endl;

cout << "Binary Search : " << binary_search(sorted, 100) << " comparisons" << endl;

int unSorted1[120];

for (int i = 0; i < 120; i++) {

unSorted1[i] = rand() % 100;

}

int unSorted2[120];

for (int i = 0; i < 120; i++) {

unSorted2[i] = unSorted1[i];

}

cout << endl << endl;

cout << "********** Sorting algos ************\n";

cout << "Bubble Sort : ";

int comparisons = 0;

int swaps = 0;

bubble_sort(unSorted1, comparisons, swaps);

cout << comparisons << " comparisons and " << swaps << " swaps\n";

cout << "Selection Sort : ";

int comparisons2 = 0;

int swaps2 = 0;

selection_sort(unSorted2, comparisons2, swaps2);

cout << comparisons2 << " comparisons and " << swaps2 << " swaps\n";

}
