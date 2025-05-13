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

// dekralasi prosedur addNode
void addNode()
{
    // pembuatan node dan pemberian value untuk data noMhs dan name
    Node *newNode = new Node(); // step 1 buat node baru
    cout << "\nEnter the roll number of the student: ";
    cin >> newNode->noMhs; // Assign value to the data field of the new node
    cout << "\nEnter the name of the student: ";
    cin >> newNode->name; // Assign value o the data field of th

    // Insert the new node in the list
    // kondisi jika star == null atau noMhs node baru <= noMhs start
    if (START == NULL || newNode->noMhs <= START->noMhs)
    {
        // step2: insert the new node at the beginning
        // kondisi jika star tidak kosong dan noMhs node baru sama dengan noMhs
        if (START != NULL && newNode->noMhs == START->noMhs)
        {
            cout << "\033[31mDuplicate roll numbers not allowed\033[0m" << endl;
            return;
        }
