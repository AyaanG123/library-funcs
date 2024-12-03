//Ayaan Gill
//12-3-24
//library functions
#include <iostream>
#include <cmath>
using namespace std;//using std

int main() {
    //The height of a building is 15 feet, and the shadow is 8 feet long. What is the hypotenuse of the shadow?
    double a = 15;
    double b = 8;
    double c = sqrt(pow(a,2.0) + pow(b,2.0));//this finds the square root of the  2 numbers squared
    cout<<"The hypotenuse of the shadow is "<<c<<endl;
    
    //John's front door code is 4 digits. The first is the absolute value of the square root of 16. The second is the absolute value of -2. The third is 6.5 rounded to the nearest whole number. The fourth is 6.4 rounded to the nearest whole number. What is his door code?
    double dig1 = abs(sqrt(16));//finding the absoulte value of the square root
    double dig2 = abs(-2);
    double dig3 = round(6.5);
    double dig4 = round(6.4);
    cout<<"His door code is "<<dig1<<dig2<<dig3<<dig4<<endl;
    
    //Atharva is investing in stocks in which the value squares every day. If he starts with 12 dollars, how much money will he have the next day?
    
    double tafaMoney = pow(12.0, 2);
    cout<<"Atharva will have $"<<tafaMoney<<endl;

    return 0;
}
