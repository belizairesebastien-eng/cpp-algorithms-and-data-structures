#include <iostream>
#include <string>
#include "doubly_linked_list.h"

int main(){
    DoublyLinkList t;

    t.push_front(1);
    t.push_front(2);
    t.push_front(3);
    t.push_front(4);
    t.push_front(5);
    t.push_front(6);
    t.push_front(7);
    t.push_front(8);
    t.push_front(9);
    t.push_front(10);
    t.push_front(11);
    t.push_back(0);
    t.push_back(-1);
    t.push_back(-2);
    t.push_back(-3);
    t.push_back(-4);

  
    t.display();
    t.display_inverse();
    t.remove_front();
    t.display();
    t.remove_front();
    t.display();
    std::cout << "The head of the list is: " << t.getHead() << std::endl;
    std::cout << "The tail of the list is: " << t.getTail() << std::endl;

 }
