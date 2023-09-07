#include<iostream>
using namespace std;

int main(){
		
	string removeVowels(string s) 
	{
	    //Your code goes here
	    int n = s.size();
	    int j=0;
	    
	    for(int i=0 ; i<n ; i++)
	    {
	        if(s[i]!='a' && s[i]!='e' && s[i]!='i' && s[i]!='o' && s[i]!='u')
	        s[j++]=s[i];
	    }
	    
	    return s.substr(0,j);
	}

	string k= removeVowels("Do you know? There are 7 days in a week! ");
	return 0;
}
