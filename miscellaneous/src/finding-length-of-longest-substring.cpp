
//
// Created by arslan on 28/01/19.
//

#include <iostream>
#include <set>
#include <string>
#include <vector>

int longest_substring (std::string str){

    int  begin = 0;
    int end = 0;
    int maxSize = 0;
    int n = str.length();

    std::set<char> set;
    for (int i = 0; i < n; ++i) {
        set.insert(str[i]);
    }

    while (end < str.length()){
        if(set.find(str[end]) != set.end()){
            set.insert(str[end]);
            end++;
            maxSize = set.size();

        }

        else{
            set.erase(set.find(str[begin]));
            begin++;

        }
    }

    return maxSize;


}




int main() {

    std::string name1, name2, name3, name4;
    name1 = "abcabcbb"; // it should be 3
    name2 = "bbbbbb";  // it shoould be 1
    name3 = "abcabcabcdefgaaababca";  // it should be 7
    name4 = "keekew";  // it should be 3


    int maxSize1 = longest_substring(name1);
    int maxSize2 = longest_substring(name2);
    int maxSize3 = longest_substring(name3);
    int maxSize4 = longest_substring(name4);

    std::cout<<maxSize1<<"\n"<<maxSize2<<"\n"<<maxSize3<<"\n"<<maxSize4<<std::endl;

    return 0;
}