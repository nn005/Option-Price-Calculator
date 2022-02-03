#ifndef LINKED_LIST_HPP_
#define LINKED_LIST_HPP_

#include <iostream>
#include <cmath>



class Node{ 


    public:

        Node(int value, char type);

        ~Node();

        int get_value() const;

        void set_value(int value);

        Node *get_next() const;

        void set_next(Node *p_next);

        char type;

    private:

        int value;

        Node* p_next;
};



class LinkedList{


    public:

        LinkedList();
        
        ~LinkedList();
        
        void insert(Node *new_node);
    
        void print();
        
        Node* get_head();

        void set_head(Node* new_head);


    private:

        Node *p_head;
};


#endif