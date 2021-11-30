#include "header.h"

int main() 
{
    vector<Name_value> nameList;

    addName(nameList);

    printNames(nameList);

    return 0;
}

void addName (vector<Name_value>& nameList)
{
    string newName;
    int newValue;
    int i;
    int size;
    int nameFlag = 0;
    int whileFlag = 0;

    while (whileFlag == 0)
    {
        nameFlag = 0;
        size = nameList.size();

        while (nameFlag == 0)
        {
            nameFlag = 1;
            cout << "Please enter a name: \n"; 
            cin >> newName;

            for (i = 0; i < size; i++)
            {
                if (nameList[i].getName() == newName)
                {
                    cout << "This name has already been entered.\n"; 
                    nameFlag = 0;
                }

            }
        }

        cout << "Please enter a score: \n"; 
        cin >> newValue;
        cout << "\n"; 

        if (newName == "NoName" && newValue == 0)
        {
            whileFlag = 1;
            break;
        }

        Name_value newItem(newName, newValue);
        nameList.push_back(newItem);
    }

    cout << "\n"; 
}

void printNames(vector<Name_value>& nameList)
{
    int size = nameList.size();
    int i;

    cout << "List:\n\n"; 

    for (i = 0; i < size; i++)
    {
        cout << "(" << nameList[i].getName() << ", " << nameList[i].getValue() << ")\n"; 
    }
} 