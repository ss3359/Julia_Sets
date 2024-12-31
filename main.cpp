//
//  main.cpp
//  SKELETON
//
//  Created by Owner on 11/18/24.
//

#include <iostream>
#include <vector>
#include <cmath>
#include <thread>
#include <random>
#include <complex>
#include <iomanip>

#include "Clavicle.hpp"


using namespace std;


int main(){
    COMPLEX z(0,-1);
    PleasePrintResults(z);
    
    return 0; 
}






//Excess Code:
/*
 
 
 struct Branch{
     int data;
     Branch* next=nullptr;
 };

 Branch* AddBrach(int d){
     Branch* result=nullptr;
     result->data=d;
     
     return result;
 }
 
 
 Linked List and Trees:
 
 struct List{
     int data;
     List *next;
 };

 struct Tree{
     int value;
     Tree* Left=nullptr;
     Tree* Right=nullptr;
 };
 List *CreateNode(int d){
     
     List *n=new List();
     n->data=d;
     return n;
 }

 void PrintList(List *n1){
     do{
         cout<<n1->data<<"->";
         n1=n1->next;
     }while(n1 != nullptr);
 }

 Tree *CreateBranch(int d){
     Tree *NewBranch=new Tree();
     NewBranch->value=d;
     
     return NewBranch;
 };
 int main(){
     Tree*r=new Tree();
     Tree*n1=new Tree();
     Tree*n2=new Tree();
     Tree*n3=new Tree();
     Tree*n4=new Tree();


     r->value=5; n1->value=6;
     n2->value=7; n3->value=8; n4->value=9;
     
     r->Left=n1;
     r->Left->Left=n2;
     r->Right=n3;
     r->Right->Left=n4;
 }

 
 
 int size=9;
 PrintShape(size);
 cout<<endl;
 return 0;
 
 //Linked List Code:
 List *root=new List(),*n1=new List(),*n2=new List(),*n3=new List();
 
 root->data=5;
 n1->data=10;
 n2->data=15;
 n3->data=20;
 
 root->next=n1;
 n1->next=n2;
 n2->next=n3;
 n3->next=nullptr;
 
 PrintList(root);
 
 */

