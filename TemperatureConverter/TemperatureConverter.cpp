/* TemperatureConverter.cpp
 * Carter McCall
 * 6 September 2022
 * Purpose:
 *      Convert fahrenheit temperatures to celsius temperatures and vice versa
 * Modified 7 September 2022
 *      Fix problems with repeat function
 */
#include <iostream>
#include <string>
using namespace std;

int main() {
    char repChar;
    do
    {
        string repeat;
        for (int i = 1; i > 0;)
        {
            double convertedTemp, originalTemp, conversion;
            cout << "Would you like to convert F to C (1) or C to F? (2) ";
            cin >> conversion;
            if (conversion == 1)
            {
                cout << "\nWhat temperature in fahrenheit would you like to convert? ";
                cin >> originalTemp;
                convertedTemp = (originalTemp - 32) * 5 / 9;
                i -= 1;
            }
            else if (conversion == 2)
            {
                cout << "\nWhat temperature in celsius would you like to convert? ";
                cin >> originalTemp;
                convertedTemp = (originalTemp * 9 / 5) + 32;
                i -= 1;
            }
            else
            {
                cout << "Please choose a valid conversion method!\n";
                continue;
            }
            cout << "Your new temperature is " << convertedTemp << "!" << endl;
        } 
        cout << "\n" << endl;
        cout << "Would you like to make another conversion? (Y|N): ";
        cin >> repeat;
        repChar = tolower(repeat[0]);
    } while (repChar == 'y');        
}