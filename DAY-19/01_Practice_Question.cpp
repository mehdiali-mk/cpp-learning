/*
 Aim = To practice the question.
 Author = Mehdiali (MK).
 Date = 03 / February / 2024 - 04:01 PM.
*/

#include <iostream>
#include <vector>
#include <string>
#include <conio.h>
using namespace std;

int main()
{
    int numberOfItems{};
    float grandTotal{};
    vector<string> itemName{};
    vector<float> itemPrice{};
    vector<float> itemQuantity{};
    vector<float> itemMRP{};

    cout << "Enter the number of items = ";
    cin >> numberOfItems;

    for (size_t i{0}; i < numberOfItems; i++)
    {
        string name{};
        float price{}, quantity{}, mrp{};
        cout << "\n\nItem name = ";
        cin >> name;
        // getline(cin, name);
        cout << "Item price = ";
        cin >> price;
        cout << "Item quantity = ";
        cin >> quantity;
        mrp = price * quantity;

        itemName.push_back(name);
        itemPrice.push_back(price);
        itemQuantity.push_back(quantity);
        itemMRP.push_back(mrp);
    }

    cout << "\n\n\n-------------------------------------------------------" << endl;
    cout << "Name\t\tPrice\t\tQty\t\tMRP." << endl;
    cout << "-------------------------------------------------------";
    for (size_t i{0}; i < numberOfItems; i++)
    {
        cout << "\n"
             << itemName.at(i) << "\t\t" << itemPrice.at(i) << "\t\t" << itemQuantity.at(i) << "\t\t" << itemMRP.at(i) << "/rs.";
        grandTotal += itemMRP.at(i);
    }
    cout << "\n-------------------------------------------------------" << endl;
    cout << "Grand Total\t\t\t\t\t" << grandTotal << "/rs.";
    cout << "\n-------------------------------------------------------" << endl;
    return 0;
}