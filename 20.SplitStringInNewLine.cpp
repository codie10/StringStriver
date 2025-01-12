#include <iostream>
#include <string>
#include <vector>
#include <sstream> 

std::vector<std::string> splitString(const std::string& str)
{
    std::vector<std::string> tokens;  
    std::stringstream ss(str);       
    std::string token;                
    
    while (std::getline(ss, token, '\n')) { 
        tokens.push_back(token);
    }
    return tokens;
}
 
int main()
{
    std::string str = "C\nC++\nJava";
 
    std::vector<std::string> tokens = splitString(str);
 
    for (const auto& token : tokens) {
        std::cout << token << std::endl;        
    }
 
    return 0;
}

