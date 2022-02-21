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
        cout << "Select an option\n"
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
            // cout << n[0] << endl;
            // cout << n[size];
            for (int i = 0; i < size; i++)
            {
                cout << n[i-1] << " ";
            }
            cout << endl;
            continue;
        }
        // Searching
        else if (option == 'F')
        {
            cout << "Select sub-option"
                << "Enter P to check if value is present in array\n"
                << "Enter O to get all occurances of of value\n";
            cin >> option;
            int input;
            bool found = false;
            cout << "Enter the value you wish to check: ";
            cin >> input;
            if (option >= 'a')
            {
                option -= 'a' - 'A';
            }
            // Sub Option: Check presence only
            if (option == 'P')
            {
                for (int i = 0; i < size; i++)
                {
                    if (n[i] == input)
                    {
                        found = true;
                        cout << "Found " << input << " at index " << i << endl;
                        break;
                    }
                }
                if (!found)
                {
                    cout << "Value not found\n";
                }
                continue;    
            }
            // Sub Option: Check all occruances
            else if (option == 'O')
            {
                for (int i = 0; i < size; i++)
                {
                    if (n[i] == input)
                    {
                        found = true;
                        cout << i << " ";
                    }
                }
                if (found)
                {
                    cout << "are the indexes with the value: " << input << endl;
                }
                else 
                {
                    cout << "No value found in array\n";
                }
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
                int index = {},
                    value = {};
                cout << "Enter the index of the value you wish to update: ";
                cin >> index;
                while (index < 0 || index >= size)
                {
                    cout << "index should be in range " << 0 << " - " << size - 1 << endl;
                    cin >> index;
                }
                cout << "Enter the new value: ";
                cin >> value; 
                n[index] = value;
                continue;
            }
            // Sub option: unique value update
            else if (option == 'U')
            {
                int index = {},
                    unique = true,
                    value = {};
                cout << "Enter the index of the value you wish to update: ";
                cin >> index;
                while (index < 0 || index >= size)
                {
                    cout << "index should be in range " << 0 << " - " << size - 1 << endl;
                    cin >> index;
                }
                while (true)
                {
                    cout << "Enter the new value: ";
                    cin >> value; 
                    for (int i = 0; i < size; i++)
                    {
                        if (n[i] == value)
                        {
                            unique = false;
                            break;
                        }
                    }
                    if (unique)
                    {
                        break;
                    }
                    else 
                    {
                        cout << "Value is not unique. Please enter unique value\n";
                    }
                n[index] = value; 
                }
                continue;
            }
            // Sub Option: Value based update
            else if (option == 'V')
            {
                int prev_value = {},
                    new_value = {},
                    counter = 0;
                cout << "Enter value you want to update for: ";
                cin >> prev_value;
                cout << "Enter new value: ";
                cin >> new_value;
                for (int i = 0; i < size; i++)
                {
                    if (n[i] == prev_value)
                    {
                        n[i] = new_value;
                        counter++;
                    }
                }
                cout << counter << " instances of " << prev_value << " has/have been replaced\n"; 
            continue;
            }
        }
        // Delete
        else if (option == 'D')
        {
            if (!size)
            {
                cout << "There are no values to delete. Please add some values\n";
                continue;
            }
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
                int index = {},
                    value = {};
                cout << "Enter the index of the value you wish to delete: ";
                cin >> index;
                while (index < 0 || index >= size)
                {
                    cout << "index should be in range " << 0 << " - " << size - 1 << endl;
                    cin >> index;
                }
                for (int i = index; i < size - 1; i++)
                {
                    n[i] = n[i + 1];
                }
                size--;
                continue;
            }
            // Delete by value
            else if (option == 'V')
            {
                int del_value = {},
                    counter = 0;
                cout << "Enter value you want to delete: ";
                cin >> del_value;
                for (int i = 0; i < size; i++)
                {
                    if (n[i] == del_value)
                    {
                        for (int j = i; j < size; j++)
                        {
                            n[j] = n[j + 1];
                            cout << "x ";
                        }
                        cout << endl;
                        size--;
                        counter++;
                    }
                }
                cout << counter << " instances of " << del_value << " has/have been deleted\n";
                continue;
            }
        }
        // Add
        else if (option == 'A')
        {
            if (size == original_length)
            {
                cout << "The array is full. Please delete some values first\n";
                continue;
            }
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
                int new_value = {};
                cout << "Enter the new value: ";
                cin >> new_value;
                n[size] = new_value;
                size++;
                continue;
            }
            // Add unique value Only
            else if (option == 'U')
            {
                int index = {},
                    unique = true,
                    value = {};
                while (true)
                {
                    unique = true;
                    cout << "Enter a new unique value: ";
                    cin >> value; 
                    for (int i = 0; i < size; i++)
                    {
                        if (n[i] == value)
                        {
                            unique = false;
                            break;
                        }
                    }
                    if (unique)
                    {
                        n[size] = value;
                        size++;
                        break;
                    }
                    else 
                    {
                        cout << "Value is not unique. Please enter unique value\n";
                    }
                }
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
            for (int i = 0, j; i < size; i++)
            {
                temp = i;
                for (j = i + 1; j < size; j++)
                {
                    // For assending
                    if (option == 'A' && n[i] > n[j])
                    {
                        temp = j;
                    }
                    // For descending
                    else if (option == 'D' && n[i] < n[j])
                    {
                        temp = j;
                    }
                }
                j = n[temp];
                n[temp] = n[i];
                n[i] = j;
            }
        }
    }
}