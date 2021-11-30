// Includes header file
#include "header.h"

int main() 
{
    // Creates vector of objects
    vector<Name_value> nameList;

    // Calls function to fill up vector with list of names and scores
    addName(nameList);

    // Calls function to print all objects
    printNames(nameList);

    return 0;
}

void addName (vector<Name_value>& nameList)
{
    // Data dictionary
    string newName;
    int newValue;
    int i;
    int size;
    int nameFlag = 0;
    int whileFlag = 0;

    // While loop that ends if NoName and 0 are entered
    while (whileFlag == 0)
    {
        nameFlag = 0;
        size = nameList.size();

        // While loop that ends if a name is entered that is not duplicate
        while (nameFlag == 0)
        {
            nameFlag = 1;

            // Asks for user input of score
            cout << "Please enter a name: \n"; 
            cin >> newName;

            for (i = 0; i < size; i++)
            {
                if (nameList[i].getName() == newName)
                {
                    // Repeats loop if name entered is duplicate
                    cout << "This name has already been entered.\n"; 
                    nameFlag = 0;
                }

            }
        }

        // Asks for user input of score
        cout << "Please enter a score: \n"; 
        cin >> newValue;
        cout << "\n"; 

        // Breaks out of while loop and stops asking for names and scores if NoName and 0 are entered
        if (newName == "NoName" && newValue == 0)
        {
            whileFlag = 1;
            break;
        }

        // Adds new object with new name and new scoreand adds it to vector
        Name_value newItem(newName, newValue);
        nameList.push_back(newItem);
    }

    cout << "\n"; 
}

void printNames(vector<Name_value>& nameList)
{
    int size = nameList.size();
    int i;

    // Prints each name and score
    cout << "List:\n\n"; 

    for (i = 0; i < size; i++)
    {
        cout << "(" << nameList[i].getName() << ", " << nameList[i].getValue() << ")\n"; 
    }
} 