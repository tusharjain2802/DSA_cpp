#include <string>
using namespace std;
int keypad(int num, string output[],string options[]){
    if(num<=0){
        output[0]= "";
        //options[0]="";
        return 1;
    }
     string smallout[1000];
    int ans=keypad(num/10,smallout,options);
    string temp=options[num%10];int k=0;
    for(int i=0;i<ans;i++){
        for(int j=0;j<temp.size();j++){
            output[k++]=smallout[i]+temp[j];
        }
    }
    return k;
    
    
}
int keypad(int num, string output[]){
    string options[]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    keypad(num,output,options);
}