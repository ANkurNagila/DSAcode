#include<iostream>
#include<string>

using namespace std;

int main(){
    string s1 = "nincompoop";

     //find() --> it direct return the index of element we are finding 
    //this is important change

    cout<< s1.find("poo") <<endl;
    return 0;
}
