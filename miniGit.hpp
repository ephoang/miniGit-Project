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
        void AddFile();
        void Remove File();
        void CommitCHanges();
        int counter(int);
};

#endif
