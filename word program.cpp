#include<bits/stdc++.h>
using namespace std;
int main()
{

    int a=0;

   std::string s = "This is a Program";
    std::vector<std::string> result;
    std::istringstream iss(s);
    for(std::string s; iss >> s; ){
        result.push_back(s);
        ++a;
    }


    string d="Program";
    for(int i=0;i<a;++i){
        if(result[i]==d){
            cout<<"found ";
        }
    }


}
