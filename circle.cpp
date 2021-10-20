#include<iostream>
using namespace std;
int main()
{
    float rad;
    cout<<"Enter the radius: ";
    cin>>rad;
    float circleArea = 3.14 * rad * rad;
    cout<<"Area of the circle of radius "<<rad<<"  is "<<circleArea;
    return 0;
}
