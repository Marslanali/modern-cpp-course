//
// Created by arslanali on 1/3/20.
//

#include <iostream>
#include <algorithm>
#include <vector>


bool match(std::string test) {
    //return test == "two";
    return test.size() == 3;
}

int countStrings(std::vector<std::string> &texts, bool (*match)(std::string) ) {

    int tally = 0;
    for(int i=0; i<texts.size(); i++) {
        if(match(texts[i])) {
            tally++;
        }
    }

    return tally;
}

int main(int main, char** argv) {
    std::vector<std::string> texts;
    texts.push_back("one");
    texts.push_back("two");
    texts.push_back("three");
    texts.push_back("two");
    texts.push_back("four");
    texts.push_back("two");
    texts.push_back("three");

    std::cout << match("one") << std::endl;

    std::cout << count_if(texts.begin(), texts.end(), match) << std::endl;

    std::cout << countStrings(texts, match) << std::endl;

    return 0;
}