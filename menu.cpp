#include <iostream>
using namespace std;

int main ()
{
    // Declaration
    const int original_length = 10;
    int size = 10;
    int n[original_length] = {1,2,3,4,5,};
    char option = {};
    while (true)
    {
        cout << "\nSelect an option\n"
            << "Enter F to search\n"
            << "Enter P to print\n"
            << "Enter U to update\n"
            << "Enter D to delete\n"
            << "Enter A to add\n"
            << "Enter S to sort\n"
            << "Enter E to Exit\n";
        cin >> option;
        if (option >= 'a')
        {
            option -= 'a' - 'A';
        }
        // Exit
        if (option == 'E')
        {
            break;
        }
        // Printing:
        else if (option == 'P')
        {
            cout << "Printing Logic\n" << endl;
            continue;
        }
        // Searching
        else if (option == 'F')
        {
            cout << "Select sub-option\n"
                << "Enter P to check if value is present in array\n"
                << "Enter O to get all occurances of of value\n";
            cin >> option;
            if (option >= 'a')
            {
                option -= 'a' - 'A';
            }
            // Sub Option: Check presence only
            if (option == 'P')
            {
                cout << "Single value Logic\n" << endl;
                continue;
            }
            // Sub Option: Check all occruances
            else if (option == 'O')
            {
                cout << "Multiple value search logic\n" << endl;
                continue;
            }
        }
        // Update
        else if (option == 'U')
        {
            cout << "Select sub-option\n"
                << "Enter I to update by index\n"
                << "Enter U to update by index and only a unique value\n"
                << "Enter V update by value\n";
            cin >> option;
            if (option >= 'a')
            {
                option -= 'a' - 'A';
            }
            // Sub option: Index based update 
            if (option == 'I')
            {
                cout << "Update by Index logic\n";
                continue;
            }
            // Sub option: unique value update
            else if (option == 'U')
            {
                cout << "Unique Value Uptate Logic\n";
                continue;
            }
            // Sub Option: Value based update
            else if (option == 'V')
            {
                cout << "Replace by Value logic\n";
                continue;
            }
        }
        // Delete
        else if (option == 'D')
        {
            cout << "Select Sub-option\n"
                << "Enter I to delete by index\n"
                << "Enter V to delete by value\n";
            cin >> option;
            if (option >= 'a')
            {
                option -= 'a' - 'A';
            }
            // Delete by index
            if (option == 'I')
            {
                cout << "Delete by index Logic\n";
                continue;
            }
            // Delete by value
            else if (option == 'V')
            {
                cout << "Delete by value logic\n";
                continue;
            }
        }
        // Add
        else if (option == 'A')
        {
            cout << "Select Sub-option\n"
                << "Enter N to add new value\n"
                << "Enter U to add a new unique value\n";
            cin >> option;
            if (option >= 'a')
            {
                option -= 'a' - 'A';
            }
            // Add any new value
            if (option == 'N')
            {
                cout << "New Value Logic\n";
                continue;
            }
            // Add unique value Only
            else if (option == 'U')
            {
                cout << "Unique Value Addition Logic\n";
                continue;
            }
        }
        // Sort
        else if (option == 'S')
        {
            int temp = {};
            cout << "Select sub-option\n"
                << "Enter A to sort assendingly\n"
                << "Enter D to to sort descendingly\n";
            cin >> option;
            if (option >= 'a')
            {
                option -= 'a' - 'A';
            }
            cout << "Assending And Descending Logic\n";
        }
    }
}