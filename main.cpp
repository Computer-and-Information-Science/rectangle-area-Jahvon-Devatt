#include <iostream>
using namespace std;

int main() {

  const double length = 7.2;
  const double width = 1.3;

  cout << "Rectangle Properties: \n";
  cout << "Length = " << length << endl;
  cout << "Width = " << width << endl;

  double area = length * width;
  double perimeter = (2*length)+(2*width);

  cout << "Area = " << area << endl;
  cout << "Perimeter = " << perimeter << endl;

}