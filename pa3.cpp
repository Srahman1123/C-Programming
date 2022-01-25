
//Shamsur Rahman

#include <iostream>

#include<iomanip>

using namespace std;

char * gradeGenerator(int * arr, int size) {

char * grades = new char[25];

for (int i = 0; i < size; i++) {

if (arr[i] >= 90 && arr[i] <= 100) {

grades[i] = 'A';

} else if (arr[i] >= 80 && arr[i] < 90) {

grades[i] = 'B';

} else if (arr[i] >= 70 && arr[i] < 80) {

grades[i] = 'C';

} else if (arr[i] >= 60 && arr[i] < 70)

grades[i] = 'D';

else

grades[i] = 'F';

}

return grades;

}

double avg(int * arr, int size) {

int sum = 0;

int min = arr[0];

int max = arr[0];

for (int i = 0; i < 25; i++) {

sum = sum + arr[i];

if (min > arr[i])

min = arr[i];

if (max < arr[i])

max = arr[i];

}

sum = sum - (min + max);

return (sum / 23);

}

int main() {

int arr[25];

int * ptr = & arr[0];

for (int i = 0; i < 25; i++) {

cout << "Enter marks of " << i + 1 << " Student" << endl;

int temp;

cin >> temp;

while (temp < 0 || temp > 100) {

cout << "Invalid input!! Please Enter score in 0 to 100 inclusive\n";

cin >> temp;

}

arr[i] = temp;

}

char * grade;

grade = gradeGenerator(ptr, 25);

double average = avg(ptr, 25);

// Genertaing the output

cout << "--------------------------------------" << endl << endl;

cout << "S.No. " << setw(10) << "Score" << setw(10) << "Grade\n";

for (int i = 0; i < 25; i++) {

cout << "Student No. " << i + 1 << setw(10) << ptr[i] << setw(10) << grade[i] << endl;

}

cout<<endl;

cout<<"----------------------------------------------\n";

cout << "Average " << average << endl;

cout<<"----------------------------------------------\n";

}
