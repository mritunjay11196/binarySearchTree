#include <iostream>
#include "treeBody.h"

int main()
{
    insert(10);
    insert(5);
    insert(15);
    
    bool x = search(11);
    
    std::cout<<x<<" \n";
    
    
    
    //inOrder(root);
    //std::cout<<"\n";
}
