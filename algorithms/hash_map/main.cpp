#include <iostream>
#include <unordered_map>

std::unordered_map<char, int> FrequencyCounter(std::string words){
    std::unordered_map<char, int> map;
    for(char c: words){
        if (c != ' ' && map.find(c)!= map.end()){
            auto it = map.find(c);
            it->second +=1;            
        }
        else if(c != ' ' && map.find(c)== map.end()){
            map.insert({c, 1});
        }
        else{
            continue;
        }
    }
    auto temp = map;
    for (char c:words){
        if (temp.find(c)!= temp.end()){
            auto that = temp.find(c);
            std::cout << that->first << " : " << that->second <<", ";
            temp.erase(c);
        }
       }
    
    std::cout << std::endl;
    return map;
}

void First_non_reapeting_Char(std::string words){
    auto map = FrequencyCounter(words);
    for(char cha: words){
        auto it = map.find(cha);
        if (it->second ==1){
            std::cout << "The first nonrepeating character is: " << it->first << std::endl;
            return;
        }
    }
    std::cout << "We were not able to find non_repeating char";
}


bool AnagramChecker(std::string words, std::string owords){
    auto map = FrequencyCounter(words);
    auto map2 = FrequencyCounter(owords);
    if (words.size() == owords.size()){
         for (char c:words){
            auto it = map.find(c);
            auto it2 = map2.find(c);
            if(map2.find(c) != map2.end()){
                if(it->second != it2->second){
                return false;
            }
            }
        }
    }
    else{
        return false;
    }
   
    return true;
}



int main(){
    std::string c = "listen";
    std::string d = "silent";
    std::string b = "Hello";
    std::string a = "world";

    std::cout << AnagramChecker(c,d) << std::endl;
    std::cout << AnagramChecker(a,b) << std::endl;

}




