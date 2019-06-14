//
//  3 Longest Substring Without Repeating Characters.cpp
//  Leetcode_CPP
//
//  Created by Daniel.Lin on 2019/6/14.
//  Copyright © 2019 Daniel.Lin. All rights reserved.
//

#include <stdio.h>
#include <string>
#include <iostream>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int start=0;
        int maxLength=0;
        int index=0;
        int j=0;
        while (start+maxLength<s.length()) {
            for (; index<s.length(); index++) {
                for (j=start; j<index; j++) {
                    if(s[j]==s[index]){
                        if(maxLength<index-start) maxLength=index-start;
                        start=j+1;
                        break;
                    }
                }
                if(start!=j+1)
                    if(maxLength<index-start+1) maxLength=index-start+1;
            }
        }
        return maxLength;
    }
};

int main(){
    cout<<"hello"<<endl;
    string s="abdccabcklnn";
    Solution m=Solution();
    int k=m.lengthOfLongestSubstring(s);
    cout<<k<<endl;
    return 0;
}
