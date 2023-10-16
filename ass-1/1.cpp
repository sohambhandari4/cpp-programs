//1. Write a C++ program to find area of circle.

//C++ program to calculate area of the circle
#include <iostream>
using namespace std;

 int main() {
   float radius, area_circle;

   // take radius as input
   cout << "Enter the radius of circle: ";
   cin >> radius;

   area_circle = 3.14 * radius * radius;
   cout << "Area of circle: " << area_circle << endl;

   return 0;
}