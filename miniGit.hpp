#ifndef MINIGIT
#define MINIGIT
#include <iostream>
#include <string>
#include <fstream>
#include <cstring>
#include <sstream>
using namespace std;

struct doublyNode{
    int commitNumber;
    singlyNode * head;
    doublyNode * previous;
    doublyNode * next;
};

struct singlyNode{
    string fileName;
    string fileVersion;
    singlyNode * next;
};

class miniGit{
    private:
        singlyNode* head;

    public:
        bool search(string file);
        void AddRepoitory(string);
        void RemoveRpository(string);//probally need to call memory, same as addrepository
        void AddFile(string);// call memory? from SLL
        void RemoveFile(string);
        void CommitChange();// def call memory
        int counter(int);
};

#endif
