#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{   int length, breadth=0;
    printf("Enter length and Breadth");
    cin >> length >> breadth;
    int area = length * breadth;
    int peri = 2*(length + breadth);
    printf("Area = %d\nPerimeneter=%d\n",area,peri);
    return 0;
}