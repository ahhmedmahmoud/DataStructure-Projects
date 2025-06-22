#include <iostream>
#include "clsDoubleLinkedList.h"
using namespace std;

int main()
{

    clsDoubleLinkedList <int> MydblLinkedList;

    MydblLinkedList.InsertAtBeginning(5);
    MydblLinkedList.InsertAtBeginning(4);
    MydblLinkedList.InsertAtBeginning(3);
    MydblLinkedList.InsertAtBeginning(2);
    MydblLinkedList.InsertAtBeginning(1);

    cout << "\nLinked List Contenet:\n";
    MydblLinkedList.PrintList();

    MydblLinkedList.Reverse();

    cout << "\nLinked List Contenet after reverse:\n";
    MydblLinkedList.PrintList();
    clsDoubleLinkedList <int> ::Node* node;
    node = MydblLinkedList.GetNode(3);
    cout << "\nNode Value is: " << node->value;
    system("pause>0");
}
