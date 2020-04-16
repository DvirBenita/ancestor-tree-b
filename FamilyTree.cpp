#include "FamilyTree.hpp"
#include<bits/stdc++.h> 
#define COUNT 10  
using namespace family;
string convertNumToString(int num , char sex);
void inorder(node* root,string name,node** ptr);
void print2D(node *root);
void deleteTree(node** node);  
//node constructor
node:: node(string name){
    this->name=name;
    this->father=NULL;
    this->mother=NULL;
    this->child=NULL;
}
//node methods
void node::addF(string name){
    if(this->father == NULL){
    this->father = new node(name);
    this->father->child=this;
    this->father->sex = 'm';
    }else{
        throw exception();
    }
    
}
void node::addM(string name){
    if(this->mother == NULL){
    this->mother = new node(name);
    this->mother->child=this;
    this->mother->sex = 'f';
    }else{
        throw exception();
    }
}




//Tree constructor

Tree::Tree(string name){
    this->root = new node(name);
    this->root->child=NULL;

}

//Tree destructor
Tree::~Tree(){
    deleteTree(&(this->root));  
    this->root=NULL;
}
//Tree methods

//add father method
Tree& Tree:: addFather(string name,string father){
    if(this->root->name == string(name)){
        root->addF(father);
          
    }else{
        node* ptr =NULL;
         search(name,&ptr);
        if(ptr != NULL){
            ptr->addF(father);
        
        }else{
           
            throw exception();
        }
    }
    return *this;
}
//add mother method
Tree& Tree:: addMother(string name,string mother){
    if(this->root->name == name){
        root->addM(mother);
      
    }else{
         node* ptr =NULL;
         search(name,&ptr);
        if(ptr != NULL){
            ptr->addM(mother);
        }else{
            
            throw exception();
        }
    }
    return *this;
}


void Tree::search(string name,node** ptr){
   
    inorder(this->root,name,ptr);
    
    return ;
}

void Tree::display(){
    print2D(this->root);
}


string Tree::relation(string name)
{
    node* ptr = NULL;
    search(name,&ptr);
     if(ptr == NULL){
        return string("unrelated");
    }
    char sex = ptr->sex;
    int counter = 0;
   

   
    while(ptr->child != NULL){
        counter++;
        ptr=ptr->child;
    }
   
    return convertNumToString(counter,sex);
}

//find method
string Tree::find(string relation){
    node* ptr =NULL;
    inorderFind(this->root,relation,&ptr);
    if(ptr != NULL){
        return ptr->name;
    }else{
       throw exception();
    }

}
//remove method
void Tree::remove(string name){
    
    if(this->root->name != string(name)){
        node* ptr = NULL;
        search(name,&ptr);
        if(ptr != NULL){
        deleteTree(&ptr);
        }else{
            throw exception();
        }
    }else{
        throw exception();
    }
    
}

//copy from https://www.geeksforgeeks.org/print-binary-tree-2-dimensions/

void print2DUtil(node *root, int space)  
{  
    // Base case  
    if (root == NULL)  
        return;  
  
    // Increase distance between levels  
    space += COUNT;  
  
    // Process right child first  
    print2DUtil(root->father, space);  
  
    // Print current node after space  
    // count  
    cout<<endl;  
    for (int i = COUNT; i < space; i++)  
        cout<<" ";  
    cout<<root->name<<"\n";  
  
    // Process left child  
    print2DUtil(root->mother, space);  
}  
  
// Wrapper over print2DUtil()  
void print2D(node *root)  
{  
    // Pass initial space count as 0  
    print2DUtil(root, 0);  
}  


//copy from geeeksforgeeks
void inorder(node* root,string name,node** ptr) 
{ 
    if (root == NULL) 
        return; 
  
    /* first recur on left child */
    inorder(root->mother,name,ptr); 
  
    
    if(*ptr==NULL){
        if(root->name == string(name)){
            *ptr=root;
        }
    }
  
    /* now recur on right child */
    inorder(root->father,name,ptr); 
} 

void Tree::inorderFind(node* root,string relation,node** ptr) 
{ 
    if (root == NULL) 
        return; 
  
    /* first recur on left child */
    inorderFind(root->mother,relation,ptr); 
  
 
    if(*ptr==NULL){
      
        if(this->relation(root->name) == string(relation)){
            *ptr=root;
        }
    }
  
    /* now recur on right child */
    inorderFind(root->father,relation,ptr); 
} 

string convertNumToString(int num , char sex){
    
   //grandmother/father
   if(num>1){
    int numOfGreat = num - 2;
    string great = "great-";
    string ans ="";
    //num of grets before 
    for(;numOfGreat>0;numOfGreat--){
        ans = ans+great;
    }
    switch (sex)
    {
     case 'm':
        
        return ans+"grandfather";
        break;
    case 'f':
        return ans+"grandmother";
        break;
    default:
        return "";
        break;
    }



    //father/mother
   }else if(num == 1){
       switch (sex)
       {
       case 'm':
           return string("father");
           break;
       case 'f':
            return string("mother");
            break;
       default:
           break;
       }
   }else{//me
       return string("me");
   }
    
    return " ";
}

//copy from https://stackoverflow.com/questions/42799209/fastest-way-to-delete-a-binary-tree-in-c
void _deleteTree(struct node* node)
{
       if (node->mother)
       {
             _deleteTree(node->mother);
            // node->mother->name="";
             free(node->mother);
             node->mother=NULL;
       }
       if (node->father)
       {
             _deleteTree(node->father);
            // node->father->name="";
             free(node->father);
             node->father=NULL;
       }
}

void deleteTree(node** node_ref)
{
     if (*node_ref)
     {
         
          _deleteTree(*node_ref);
          node* ptr = *node_ref;
          if(ptr->child != NULL){
              if(ptr->sex=='f'){
                  (ptr->child)->mother=NULL;
              }else{
                  (ptr->child)->father=NULL;
              }
          }
          free(*node_ref);
          
     }
}