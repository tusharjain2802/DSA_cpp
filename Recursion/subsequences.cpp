#include <iostream>
#include <string>
using namespace std;
void printKeypad(int num, string options[], string output){
    if(num==0){
        cout<<output<<endl;
    }
    for(int i=0;i<options[num%10].size();i++) {
        printKeypad(num/10,options,options[num%10][i]+output);
    }
}
void printKeypad(int num){
    string options[]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    string output;
    printKeypad(num,options,output);
}

int main(){
    printKeypad(23);
    return 0;
}