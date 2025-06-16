#include <iostream>
#include "clsDblLinkedList.h"

using namespace std;

int main()
{
    clsDblLinkedList <int> MydblLinkedList;

    MydblLinkedList.InsertAtBeginning(5);
    MydblLinkedList.InsertAtBeginning(4);
    MydblLinkedList.InsertAtBeginning(3);
    MydblLinkedList.InsertAtBeginning(2);
    MydblLinkedList.InsertAtBeginning(1);

    cout << "\nLinked List Content:\n";
    MydblLinkedList.PrintList();

    MydblLinkedList.InsertAfter(4, 500);

    cout << "\nAfter Insert:\n";
    MydblLinkedList.PrintList();

    system("pause"); // Or use: cin.get(); if you're using Linux/Mac
    return 0;
}