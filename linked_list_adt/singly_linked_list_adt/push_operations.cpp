#include <bits/stdc++.h>
#include "nodes.hh"

using namespace std;

void printlist(node * hd){
    while(hd!=nullptr){
        cout<<hd->val<<" ";
        hd=hd->next;
    }
    cout<<endl;
}

int size(node * head){
    int count=0;
    while(head!=nullptr){
        count++;
        head=head->next;
    }
    return count;
}


void pushfront(node ** hd ,int x){
    node * temp = new node(x);
    temp->next=(*hd);
    (*hd)=temp;
}

int main(int argc, char const *argv[])
{
    int k;
    cin>>k;
    node * head = nullptr;

    for(int i=0;i<k;i++){
        int t;
        cin>>t;
        pushfront(&head,t);
    }
    printlist(head);
    return 0;
}
