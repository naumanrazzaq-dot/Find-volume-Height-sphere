3#include <iostream>
#include <cmath>

using namespace std;

int main() {
const double PI = 3.14159;
double radius, height, volume;

cout << "Enter the radius";
cin >> radius;
cout << "Enter the height";
cin >> height;

volume = PI * pow(radius, 2) * height;

cout << "The radius of the cylinder is:" << radius << endl;
cout << "The height of the cylinder is:" << height << endl;
cout << "The volume of the cylinder is:" << volume << endl;

return 0;
}
