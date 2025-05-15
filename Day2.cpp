#include<stdio.h>
#include<iostream>
#include<vector>
#include<climits>
using namespace std;
void Maximumsubarraysumsizek(vector<int> arr,int k){
    int i=0,j=0;
    int length=arr.size();
    int sum=0;
    int maxi=INT_MIN;
    while(j<length){
        sum=sum+arr[j];
        if(j-i+1<k){
            
            j++;
        }
        else if(j-i+1==k){
            maxi=max(sum,maxi);
            sum=sum-arr[i];
            j++;i++;
        }
    }
    cout<<"sum is :"<<maxi;

}
int main(){
    vector<int> arr={2,5,1,8,2,9,1};
    Maximumsubarraysumsizek(arr,3);
}