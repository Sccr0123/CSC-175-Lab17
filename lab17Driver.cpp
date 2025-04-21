#include <iostream>
#include <string>
#include "./lab17.cpp"
using namespace std;



int main() {
    int index;

    // find high value and index position with array of doubles
    double fpData[] = {76.25, 85.45, -45.90, 99.34, 72.20, -65.90, 66.33, 99.77, 88.5,
          -44.12, 45.75, 57.77, -88.42, 99.47, 75.75, 88.45, 65.64, 77.21, -24, 62};
    double fpHigh = fpData[0];
    findHigh(fpData,sizeof(fpData)/sizeof(double),index,fpHigh);
    cout << "The highest value is at index " << index << " and is " << fpHigh << endl;

    // find high value and index position with array of integers
    int intData[] = {35, 45, 55, 20, 30, 50};
    int intHigh = intData[0];
    findHigh(intData,sizeof(intData)/sizeof(int),index,intHigh);
    cout << "The highest value is at index " << index << " and is " << intHigh << endl;

    // find high value and index position with array of strings
    string stringData[] = {"Apple", "apple1", "apple10", "apples", "apple", "1apple"};
    string stringHigh = stringData[0];
    findHigh(stringData,sizeof(stringData)/sizeof(stringData[0]),index,stringHigh);
    cout << "The highest value is at index " << index << " and is " << stringHigh << endl;

    // find high value and index position with array of characters
    char charData[] = {'e', 'a', '3', 'K', 'z', '*', ';', 'Z' };
    char charHigh = charData[0];
    findHigh(charData,sizeof(charData)/sizeof(charData[0]),index,charHigh);
    cout << "The highest value is at index " << index << " and is " << charHigh << endl;

    return 0;
}
