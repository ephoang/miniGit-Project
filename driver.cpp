#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
using namespace std;

void PrintMenu()
{
    cout << "0 - Displays menu options" << endl;
    cout << "1 - Adds a file to the repository" << endl;
    cout << "2 - Removes a file from the repository" << endl;
    cout << "3 - Commit your changes to the file" << endl;
    cout << "4 - Checkout previous versions of the repository" << endl;
    cout << "5 - Leave the program" << endl;
    cout << endl;
    cout << "Enter your selection: " << endl;
}

void Checkout()
{
    int input;

    cout << "Enter commit number: " << endl;
    //if(valid commit)
        //overwrite files by files in directory
}

void Commit()
{
    // traverse SLL in .cpp
    //if doesn't exist in directory
        //copy file to into directory, intialize
    //does exist in directory
        //check if it has been changed
            //not changed; break
            //changed, copy into directory, intialize and update SLL node
}

void RemoveFile()
{
    string fileName;

    cout << "Enter name of file you want to delete: " << endl;
    cin >> fileName;
    //check SLL for file name in current directory
    // if found
        //delete node
        // cout << "File Deleted." << endl;
    // if not found
        // cout << "File not found in current directory." << endl;
}

void AddFile()
{
    string fileName;

    cout << "Enter name of file you want to create:" << endl;
    cin >> fileName;
    
    //some loop to check if file name is unique
        // new SLL node with fil, repository, version number
    // if not unique
        //cout << "That name is already in the directory. Please chose a different name" << endl;
        //cin >> fileName;
}

int main()
{
    int userInput;
    string changeMind;
    
    
    cout << "Welcome to miniGit! Please enter your selction below." << endl;
    PrintMenu();
    cin >> userInput;
    
    while(userInput != 5)
    {
        switch(userInput)
        {
            case 0:
                PrintMenu();
                cin >> userInput;
            case 1:
                void AddFile();
                PrintMenu();
                cin >> userInput;
            case 2:
                void RemoveFile();
                PrintMenu();
                cin >> userInput;
            case 3:
                void Commit();
                PrintMenu();
                cin >> userInput;
            case 4:
                cout << "You will lose any local changes if you haven't made a commit. Do you want to continue?\n yes or no" << endl;
                cin >> changeMind;
                if(changeMind == "yes" || changeMind =="Yes")
                {
                    void Checkout();
                }
                PrintMenu();
                cin >> userInput;
            default:
                cout << "Invalid option. Please slect a valid option." << endl;
                PrintMenu();
                cin >> userInput;
                cout << "edit test" << endl;
        }
    }

    cout << "Thank you for visting. Goodbye!" << endl;

    return 0;
}
