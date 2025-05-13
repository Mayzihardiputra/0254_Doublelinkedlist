// 0254_DoublelinkedList
#include <iostream>
using namespace std;

// membuat struktur untuk object double linkedlist
struct Node
{
    // dekralasi noMhs dan name untuk menampung data
    int noMhs;
    string name;
    // dekralasi pointer next dan pref untuk penunjukan data sebelum dan sesudah
    Node *next;
    Node *prev;
};

// dekralasi pointer START dan pemberian nilai
Node *START = NULL;
