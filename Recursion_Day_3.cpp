#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void printTheSubsequence(string s,int index,string ans,vector<string> &soln){
if(s.length()==index){
   soln.push_back(ans);
    return;
}
 printTheSubsequence(s,index+1,ans+s[index],soln);
 printTheSubsequence(s,index+1,ans,soln); 
}
int main()
{
    string s="abc";
    vector<string> soln;
    printTheSubsequence(s,0,"",soln);
    cout<<soln.size()<<endl;
    for(auto i:soln){
        cout<<i<<endl;
    }
}