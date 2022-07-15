#include<iostream>
using namespace std;
int main(){
    for (int i = 0; i < 5; i++)
    {
        int val=1;
        for (int j = 0; j <=i; j++)
        {
            cout<<val<<" ";//print the value first
            int val1=val*(i-j)/(j+1);//calculate the next value 
            val=val1;//update the val value 
        }
        cout<<endl;
    }
    
}