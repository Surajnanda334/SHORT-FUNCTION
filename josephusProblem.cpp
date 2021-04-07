#include<iostream>
#include<vector>

using namespace std;

void josephus(int n,int k,vector<int> &circle,int &ans,int &index);      //function prototype

int main() 
{
    int n,k,ans=0,index=0;      //integer values to store number of people in circle, the ingterval after which one person is to killed, answer and index value
    cout<<"Enter the number of people in the circle :";
    cin>>n;
    cout<<"Enter the value of the interval :";
    cin>>k;
    vector<int> circle;     //vector to store the people
    for (int i = 0; i < n; i++)
    {
        circle.push_back(i+1);      //push 1 to n in the vector will be helpful in numbering every person
    }
    josephus(n,k-1,circle,ans,index);       //calling the function
    cout<<"last preson standing is "<<ans;      // The number of the last person standing will be stored in ans and is displayed
    return 0;
}

void josephus(int n,int k,vector<int> &circle,int &ans,int &index)      // The actual function deefination
{
    if(circle.size()==1)        // When there is only one person remaining 
    {
        ans=circle[0];      //assign the number to answer
        return;
    }
    index=(index+k)%circle.size();      //The main part where we decide which element to delete index= index + k 
    cout<<circle[index]<<" is executed"<<"\n";      //message that so n so person is executed
    circle.erase(circle.begin()+index);     //after the person is killed erase his data from vector
    josephus(n-1,k,circle,ans,index);        //recursive call for n-1 people
    return;
}
