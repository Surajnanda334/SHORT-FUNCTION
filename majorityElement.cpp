#include<iostream>

using namespace std;

int majorityElement(int arr[],int size);    //Function prototype

int main()
{
  int arr[] = {2,2,2,4,5,5,2};
  int count=0;
  int size = sizeof(arr)/sizeof(arr[0]);
  int element=majorityElement(arr,size);
  for(int i :arr)   //Find the frequency of the most occured element in the array
  {
    if(element==arr[i])
      count++;              
  }
  if (count>size/2)
    cout<<"Majority element in the array is :"<<element;
  else
    cout<<"There is no majority element in the array";
}

// Find thr most occured Element by using moore's voting algorithm
int majorityElement(int arr[],int size)
{
  int element;
  int count=0;
  for(int i=0;i<size;i++)
  {
    if(count==0)
    {  
      element=arr[i]; count=1;
    }
    if(arr[i]==element)
      count++;
    else
      count--;
  }
  return element;
}