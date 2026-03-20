//      **************************************************
//      Find the min, max among three values
//      Display three values in ascending order  min, other, max
//     **************************************************
#include <iostream>
using namespace std;
int main()
{
    int num1, num2, num3;
    int min, max, med;
    cout << "Enter three integer values: ";
    cin >> num1 >> num2 >> num3;

    min = num1;
    min = (num2 < min) ? num2 : min;
    min = (num3 < min) ? num3 : min;
    
    max = num1;
    max = (num2 > max) ? num2 : max;
    max = (num3 > max) ? num3 : max;

    if (num1 != min && num1 != max){
        med = num1;
    } else if (num2 != min && num2 != max){
        med= num2;
    } else med = num3;

    cout << min << " " << med << " " << max << endl;
}
