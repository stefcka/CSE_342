#include <iostream>
using namespace std;

void MySwap(std::string &word1, std::string &word2)
// void MySwap(string name1, string name2) 
int main () {
    string name1 = "sue";
    string name2 = "ravi";
    cout << name1 << " " << name2 << endl;
    MySwap(name1, name2);
    cout << name1 << " " << name2 << endl;
}
void MySwap(string& word1, string& word2) {
    string temp = word1;
    word1 = word2;
    word2 = temp;
}