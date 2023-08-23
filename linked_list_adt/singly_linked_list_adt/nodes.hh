
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