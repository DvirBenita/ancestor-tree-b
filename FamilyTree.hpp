#include <string>
#include <iostream>
#include <vector>
#include <cstring>
#include <exception>

using namespace std;

namespace family{
    //NODE -----------------

    class node{
        public:
        //constructor 
        node(string name);

        // destructor
        ~node();

        //methods
        void addF(string name);
        void addM(string name);
        
        //vars
        string name;
        node* mother;
        node* father;
        node* child;
        char sex;


    };

    //TREE -----------------------

    class Tree{
        public:
        //constructor
        Tree(string name);

        //destructor
        ~Tree();

        //methods
        Tree& addFather(string name,string father);
        Tree& addMother(string name,string mother);
        void search(string name,node** ptr);
        void display();
        string relation(string name);
        string find(string relation);
        void remove(string name);
        void inorderFind(node* root,string name,node** ptr);
        

        //vars
        node* root;

    };
    
    
}
