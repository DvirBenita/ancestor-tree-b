#include <string>
#include <iostream>
#include <vector>
#include <cstring>
#include <exception>

using namespace std;

namespace family{
    class node{
        public:
        
        node(string name);

        void addF(string name);
        void addM(string name);
        
        string name;
        node* mother;
        node* father;
        node* child;
        char sex;


    };
    class Tree{
        public:

        Tree(string name);
        ~Tree();
        Tree& addFather(string name,string father);
        Tree& addMother(string name,string mother);
        void search(string name,node** ptr);
        void display();
        string relation(string name);
        string find(string relation);
        void remove(string name);
        void inorderFind(node* root,string name,node** ptr);
        

        node* root;

    };

    
}
