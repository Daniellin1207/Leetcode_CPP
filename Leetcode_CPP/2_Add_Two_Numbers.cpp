//
//  2_Add_Two_Numbers.cpp
//  Leetcode_CPP
//
//  Created by Daniel.Lin on 2019/6/11.
//  Copyright © 2019 Daniel.Lin. All rights reserved.
//

#include <stdio.h>

//Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *node=NULL,**m=&node;
        int v=0,t=0,x=0,y=0;
        while (l1!=NULL || l2!=NULL) {
            if(l1!=NULL){
                x=l1->val;
                l1=l1->next;
            }else{
                x=0;
            }
            if(l2!=NULL){
                y=l2->val;
                l2=l2->next;
            }else{
                y=0;
            }
            v=(x+y+t)%10;
            t=(x+y+t)/10;
            ListNode *k=new ListNode(v);
            *m=k;
            m=&k->next;
        }
        if(t>0){
            ListNode *k=new ListNode(t%10);
            *m=k;
        }
        return node;
    }
};

// 本来想尝试将m的**改为*，但是发现更改后返回的node并没有被修改过，返回值为NULL
