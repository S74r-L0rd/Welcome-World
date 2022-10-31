#include <iostream>
using namespace std;

int main() 
{
   int square_area, square_side, a, b;

   cout << "Enter the side of square:";
   cin >> square_side;

   square_area = square_side * square_side;

   cout << "Area of Square: " << square_area << endl;
   
   cout<<"Enter the sides of rectangle:";
   cin>>a>>b;
   cout<<"Area of rectangle: "<<a*b<<endl;
   
   return 0;
}
