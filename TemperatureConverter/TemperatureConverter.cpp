/* TemperatureConverter.cpp
 * Carter McCall
 * 6 September 2022
 * Purpose:
 *      Convert fahrenheit temperatures to celsius temperatures and vice versa
 */
#include <iostream>
using namespace std;

int main() {
    char repChar;
    string repeat;
    do
    {
        double convertedTemp, originalTemp;
        char conversion, charConversion;
        cout << "Would you like to convert F to C or C to F? ";
        cin >> conversion;
        charConversion = tolower(conversion);
        cout << "\nWhat temperature would you like to convert? ";
        cin >> originalTemp;
            if (charConversion == 'f')
            {
                convertedTemp = (originalTemp - 32) * 5 / 9;
            }
            else if (charConversion == 'c')
            {
                convertedTemp = (originalTemp * 9 / 5) + 32;
            }
        cout << "Your new temperature is " << convertedTemp << "!" << endl;
        cout << "\n" << endl;
        cout << "Would you like to make another conversion? (Y|N): ";
        cin >> repeat;
        repChar = tolower(repeat[0]);
    } while (repChar == 'y');        
}