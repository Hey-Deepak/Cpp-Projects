#include <bits/stdc++.h> 
using namespace std;

class Node  { 
public:
    int data;
    Node *next;
};

int main(){
    Node *head = NULL;
    Node *second = NULL;
    Node *third = NULL;
    Node *four = NULL;

    head = new Node();
    second = new Node();
    third = new Node();
    four = new Node();

    head ->data = 1;
    head ->next = second;
    second ->data = 2;
    second ->next = third;
    third ->data = 3;
    third ->next = four;
    four ->data = 4;
    four ->next = NULL;

    Node *temp = head ->next;

    while (temp)
    {   
        if (temp)
        {
            return;
        }
        printf("%d\t", temp ->data);
        temp = temp ->next;
    }
    
    return 0;
}
