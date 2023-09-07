#include<iostream>
using namespace std;
struct player{
char name[20];
int average;
void setPlayerData(){
cin>>name;

cin>>average;
}
void getPlayerData(){
cout<<"The name of player is \n"<<name<<endl;
cout<<"avg is \n"<<average<<endl;
}
}s[5];
int main(){
player temp;
for(int j=0;j<5;j++){
s[j].setPlayerData();
}
for(int i=0;i<5;i++){
for(int j=i+i;j<5;j++){
if(s[i].average<s[j].average){
temp=s[j];
s[j]=s[i];
s[i]=temp;
}

}
    }
for(int j=0;j<5;j++){
  s[j].getPlayerData();
}

return 0;
}

