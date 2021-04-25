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

    public:
        void AddFile(string);
        void RemoveFile(string);
        void CommitChange();
        int counter(int);
};

#endif
