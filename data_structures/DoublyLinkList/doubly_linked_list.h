#pragma once
#include <iostream>
struct node{
    int value;
    node* next;
    node* previous;
    node(){}
    node(int value, node*n = nullptr, node* p = nullptr):value(value), next(n), previous(p){}

};

class DoublyLinkList {
public:
    DoublyLinkList();
    int getHead();
    int getTail();
    void push_front(int item);
    void push_back(int m);
    void remove_front();
    void remove_back();
    void display();
    void display_inverse();
private:
    node* head;
    node* tail;
};