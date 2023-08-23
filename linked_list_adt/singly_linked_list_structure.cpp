#include <bits/stdc++.h>
using namespace std;

struct node{
    int val;
    node * next;
    

    node(){
        next=nullptr;
        val=0;
    }
    node(int i){
        val=i;
    }

    node(int i, node * nxt)
    {
        val=i;
        next=nxt;
        this->next->next=nullptr;
    }
};

int main(int argc, char const *argv[])
{
    node * head = new node(4);
    node * cpy= head;
    cpy->next=new node(6);

    cout<<head->val<<" "<<head->next->val<<endl;
    return 0;
}
