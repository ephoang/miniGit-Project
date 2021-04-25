#include "miniGit"
#include <iostream>
using namespace std;

bool miniGit::search(string file)
{
    singlyNode* curr = head;
    while(curr != NULL)
    {
        if(curr->key = file)
        {
            return true;
        }
        curr = curr->next;
    }
    return false;
}

void miniGit::AddRepostitory(string repname)
{
    int *commitNumber = 0;
}

void miniGit::RemoveRepostitory(string repname)
{
}

string filePrompt()
{
    //Prompt user to enter file name
    string fileName;
    cout "Enter the file name: " << endl;
    cin >> fileName;
    return fileName;
}    

void miniGit::AddFile()
{
    //Prompt user to enter file name
    //Check whether the file with the given name exists in the current directory. If not, keep prompting the user to enter a valid vile name
    bool exists = false;
    while (exists == false)
    {
        string fileName;
        fileName = filePrompt();
        exists = search(head, fileName);
        if (exists == false)
        {
            cout << "File does not exist in directory." << endl;
        }
    }
    
    //The SLL is checked to see whether the file has already been added. A file by the same name cannot be added twice
    //A new SLL node gets added containing the name of the input file, the name of the repository file, as well as a pointer to the next node. 
}

void miniGit::RemoveFile(singlyNode* node, string filename)
{
    singlyNode* prev;
    bool found = search(*head, filename);
    
    if(found == true)
    {
        while (node->next != NULL)
        {
            node->data = node->next->fileName;//check if fileName is that right thing to put
            prev = node;
            node = node->next;
        }
        prev->next = NULL;
        cout << "File Deleted." << endl;
    }
    else
    {
        cout << "File not found in current directory." << endl;
    }
}

void miniGit::CommitChange()
{
    
}

int miniGit::counter(int commitNumber)//probably needs to be passed by reference
{
    commitNumber++;
    return commitNumber;
}
