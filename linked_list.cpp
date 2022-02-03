#include "linked_list.hpp"

#include <iostream>

//List

LinkedList::LinkedList(){
    p_head = nullptr;
}

LinkedList::~LinkedList(){

    if (this->p_head == nullptr){

    } else{

        Node *p_curr = p_head;
        Node *p_next = p_head;

        while(p_curr != nullptr){
            p_next = p_curr;
            p_curr = p_curr->get_next();
            delete p_next;
            p_next = nullptr;
        }
        delete p_curr;
        p_curr = nullptr;
    }
}

void LinkedList::insert(Node* new_node)
{
    if (p_head == nullptr)
    {
        new_node->set_next(p_head);
        p_head = new_node;
    }

    else
    {
        Node* i{ p_head };

        for (; i->get_next() != nullptr ; i=i->get_next()){}
        i->set_next(new_node);
    }
    new_node->set_next(nullptr);

}

void LinkedList::print(){

    if(this->p_head == nullptr){
        return;
    }
    else{

        Node *p_next = p_head;
        while(p_next != nullptr){
            std::cout << "Type: "<< p_next->type<<"  "<< "Price: "<<p_next->get_value()<< std::endl;
            p_next = p_next->get_next();
        }

    }


    return;
}


//TO DO
//Also implement list in main
Node* LinkedList::get_head(){

    return p_head;

}

void LinkedList::set_head(Node* new_head){

    this->p_head = new_head;

}

//Node

Node::Node(int value, char type){

    this->value = value;
    this->type = type;
    this->p_next = nullptr;

}

Node::~Node(){

}

int Node::get_value() const {

    return this->value;
}

void Node::set_value(int value) {

    this->value = value;
}

Node* Node::get_next() const{

    return this->p_next;
}

void Node::set_next(Node *p_next){

    this->p_next = p_next;
}