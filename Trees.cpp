#include <iostream>
#include <string>
using namespace std;
class node{
    public:
    int data;
    node*left;
    node*right;
    node(int f){
        this->data=f;
        this->left=NULL;
        this->right=NULL;
    }
};
node*Buildtree(node*&rootnode){
//Building tree recursively//

}
int main(){
    //Basic Terms for trees//
    /*
    Node
    Root-Topmost node is root
    Childeren
    Sibling
    Ancestor
    Descedents
    Leaf node=No children
    */
   node*rootnode=NULL;
   rootnode=Buildtree();
  
}