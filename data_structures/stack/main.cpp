#include <iostream>
#include <stack>


bool isBalanced(std::string p){
    std::stack<char> piller;
    int i;
    for (i =0; i<p.size(); i++){
        if (p[i] == '(' || p[i] == '[' || p[i] == '{'){
            piller.push(p[i]);
        }
        else{
            if (piller.empty()){
                return false;
            }

            else if (piller.top() == '(' && p[i] == ')'){
                piller.pop();
            } 
            else if (piller.top() == '{' && p[i] == '}'){
                piller.pop();
            } 
            else if (piller.top() == '[' && p[i] == ']'){
                piller.pop();
            } 
            else {return false;}
         
        }
    
    }
    return piller.empty();
    
}
int main(){
    std::string p = "()";
    if(isBalanced(p)){
        std::cout << " it is balanced" <<std::endl;

    }
    else{
        std::cout << "it is not balanced" << std::endl;
    }

}
