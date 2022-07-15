#include<iostream>
#include<vector>
#include<string>
using namespace std;
void display(vector<int> t){
    for (int i = 0; i < t.size(); i++)
    {
        cout<<t[i]<<" ";
    }
    cout<<endl;
}
vector<int> solve(string str1){
    vector<int> t;
    for(int i=0;str1[i]!='\0';i++){
        int count=1;
        for(int j=i+1;str1[j]!='\0';j++){
            if(str1[i]==str1[j]){
                count++;
            }
        }
        t.push_back(count);
    }
    return t;
}
int main(){
    vector<int> q;
    q=solve("arfardarb");
    display(q);
}