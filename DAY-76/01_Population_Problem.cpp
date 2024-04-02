/*
Aim = In a town, the percentage of men is 52.
The percentage of total literacy is 48.
If total percentage of literate men is 35 of the total population,
write a program to find the total number of illiterate men and women
if the population of the town is 80,000.


Given:

Total population = 80,000.
Total Percentage of Man = 52%.
Total Literacy rate = 48%.
Total Litrate rate of man = 35% of the total population ie 35% of 80,000.

Finding:
Total Litrate rate of Women = 48 - 35 = 13% of total population.
total illiterate men = 52% - 35% = 17% of the total population.
Total Percentage of Women = 100 - 52 = 48%.
Total illiterate Women = 48 - 13 = 35% of total population.


Author = Mehdiali (MK).
Date = 02 / April / 2024 - 08:59 PM.
*/

#include <iostream>
using namespace std;

int main()
{
    int percentageOfMen = 52, totalNumberOfMen, totalLiteracyRate = 48, percentageOfLiterateMen = 35, totalNumberOfLiterateMen, totalNumberOfLiterateWomen, percentageOfLiterateWomen = totalLiteracyRate - percentageOfLiterateMen, totalPopulation = 80000;

    totalNumberOfMen = ((percentageOfMen / 100.0) * totalPopulation);
    cout << "Total Number of Men = " << totalNumberOfMen;
    totalNumberOfLiterateMen = ((percentageOfLiterateMen / 100.0) * totalPopulation);
    cout << "\nTotal Number of Literate Men = " << totalNumberOfLiterateMen;
    cout << "\nTotal Number of Illiterate Men = " << totalNumberOfMen - totalNumberOfLiterateMen;

    cout << "\n\nTotal Number of Women = " << totalPopulation - totalNumberOfMen;
    totalNumberOfLiterateWomen = ((percentageOfLiterateWomen / 100.0) * totalPopulation);
    cout << "\nTotal Number of Literate Women = " << totalNumberOfLiterateWomen;
    cout << "\nTotal Number of Illiterate Women = " << ((totalPopulation - totalNumberOfMen) - totalNumberOfLiterateWomen);

    return 0;
}
