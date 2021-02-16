#include <iostream>
using namespace std;

int main() {
  const int MAX_SIZE = 100;
  int grades[MAX_SIZE]; // this is to store the max number of grades.
  int numberOfGrades; // the number of grades read.

  cout << "Please input the number of grades to be read:\n";
  cin >> numberOfGrades; // the number of grades the user chooses to enter.
  cout << "Please input grades from 1 to 100\n";
  for (int i = 0; i < numberOfGrades; i++) 
  {
    cin >> grades[i]; // this is to show that how many different grades were added for example if the user inputs 4 then this will store 4 grades.
  }

  int sum = 0;
  int average = 0;
  int highest = 0;
  int lowest = 0;
  cout << endl;
  for (int i = 0; i < numberOfGrades; i++) // basically outputting the number of grades in order inputed.

{
    cout << "Element " << i+1 << " is " << grades[i] << endl; 
    sum = sum + grades[i];  // this is to calculate the sum of the grades in total.
    average = sum / numberOfGrades;
}
  cout << "The sum of the " << numberOfGrades << " numbers is " << sum << endl; // this is the output statement for how many grades there are and the sum of them.
  
  cout << "The average of the " << numberOfGrades <<" numbers is " << average << endl;

  cout <<"The highest grade entered is " << highest << endl;

  cout << "The lowest grade entered is " << lowest << endl;



}


