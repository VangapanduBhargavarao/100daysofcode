#include<iostream>
using namespace std;
#include<cmath>
#include<vector>
#include <unordered_map>
#include<map>
#include <algorithm>
#include<climits>
#include<utility>
#include<set>
#include<utility>
//#include<bits>
/*int main(){
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}*/
/*int main(){
    int n;
    cout<<"enter";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}*/
/*int main(){
    int n;
    cout<<"enter";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}*/
/*int main(){
    int n;
    cout<<"enter";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}*/
/*int main(){
    int n;
    cout<<"enter";
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }

}*/
/*int main(){
    int n;
    cout<<"enter";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i+1;j++){
            cout<<j;
        }
        cout<<endl;
    }
}*/
/*int main(){
    int n;
    cout<<"enter";
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        for(int j=0;j<2*i+1;j++){
            cout<<"*";
        }
        cout<<endl;
    }

}
*/
/*int main(){
    int n;
    cout<<"enter";
    cin>>n;
    for(int i=n;i>0;i--){
        for(int j=0;j<n-i+1;j++){
            cout<<" ";
        }
        for(int j=0;j<2*i-1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}*/
/*int main(){
int n;
    cout<<"enter";
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        for(int j=0;j<2*i+1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=n;i>0;i--){
        for(int j=1;j<n-i+1;j++){
            cout<<" ";
        }
        for(int j=0;j<2*i-1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}*/
/*int main(){
    int n;
    cout<<"enter";
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=n-1;i>0;i--){
        for(int j=0;j<i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}*/
/*int main(){
    int n;
    cout<<"enter";
    int start;
    cin>>n;
    for(int i=0;i<n;i++){
        if(i%2==0) start=1;
        else       start=0;
        for(int j=0;j<=i;j++){
            cout<<start<<" ";
            start=1-start;
        }
        cout<<endl;

    }

}*/
/*int main(){
    int n;
    cout<<"enter";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        for(int j=1;j<=(n-i)*2;j++){
            cout<<" ";
        }
        for(int j=i;j>=1;j--){
            cout<<j;
        }
        cout<<endl;
    }
}*/
/*int main(){
    int n;
    cout<<"enter";
    cin>>n;
    int k=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<k<<" ";
            k++;
        }
        cout<<endl;
    }
}*/
/*int main(){
    int n;
    cout<<"enter";
    cin>>n;
    for(int i=0;i<n;i++){
        char ch='A';
        for(int j=0;j<=i;j++){
            cout<<ch<<" ";
            ch++;
        }
        cout<<endl;
    }
}*/
/*int main(){
    int n;
    cout<<"enter";
    cin>>n;
    for(int i=0;i<n;i++){
        char ch='A';
        for(int j=n-i;j>0;j--){
            cout<<ch<<" ";
            ch++;
        }
        cout<<endl;
    }
}*/
/*int main(){
    int n;
    cout<<"enter";
    cin>>n;
    char ch='A';
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<ch<<" ";
        }
        ch++;
        cout<<endl;

    }
}*/
/*int main(){
    int n;
    cout<<"enter";
    cin>>n;
    for(int i=0;i<n;i++){
        char ch='A';
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        for(int j=0;j<=i;j++){
            cout<<ch;
            ch++;
        }
        ch=ch-2;
        for(int j=0;j<i;j++){
            cout<<ch;
            ch--;
           
        }
        cout<<endl;
    }
}*/
/* This one is pending slove after some time
int main(){
    int n;
    cout<<"enter";
    cin>>n;
    for(int i=0;i<n;i++){
       for(char ch = 'A' + i - 1; ch <= 'E'; ch++){
        cout<<ch;
    }
    cout<<endl;
}
}*/
/*int main(){
    int n;
    cout<<"enter";
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=n;j>i;j--){
            cout<<"*";
        }
        for(int j=0;j<2*i;j++){
            cout<<" ";
        }
        for(int j=n;j>i;j--){
            cout<<"*";
        }
        cout<<endl;

    }
    int inis=2*n-2;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        for(int j=0;j<inis;j++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        inis=inis-2;
        cout<<endl;

    }
}*/
/*int main(){
    int n;
    cout<<"enter";
    cin>>n;
    int inis=2*n-2;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        for(int j=0;j<inis;j++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        inis-=2;
        cout<<endl;
    }
    inis+=4;
    for(int i=1;i<n;i++){
        for(int j=n-1;j>=i;j--){
            cout<<"*";
        }
        for(int j=0;j<inis;j++){
            cout<<" ";
        }
        for(int j=n-1;j>=i;j--){
            cout<<"*";
        }
        cout<<endl;
        inis=inis+2;
    }
}*/
/*int main(){
    int n;
    cout<<"enter";
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==0||i==n-1||j==0||j==n-1){
                cout<<"*";
            }
            else cout<<" ";
        }
        cout<<endl;
    }
}*/
/*int main(){
    int n;
    cout<<"enter";
    cin>>n;

}*/
void countdigits(int n){
    int cnt=(int)(log10(n)+1);
    cout<<cnt;
}
void Reverse(int n){
    int rev=0;
    while(n!=0){
        int r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    cout<<rev;
}
void palindrome(int n){
    int num=n;
    int rev=0;
    while(n!=0){
        int r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    if(rev==num){
        cout<<"yes";
    }
    else{
        cout<<"NOO";
    }

}
void Armstrong(int n){
    int num=n;
    int cnt=(int)(log10(n)+1);
    int sum=0;
    while(n!=0){
        int r=n%10;
        //sum=sum+pow(r,cnt);
        sum += static_cast<int>(round(pow(r, cnt)));
        n=n/10;
    }
    if(sum==num){
        cout<<"yes";
    }
    else{
        cout<<"No";
    }
}
void GCD(int n1,int n2){
    int gcd=1;
    for(int i=1;i<=min(n1,n2);i++){
        if(n1%i==0 && n2%i==0 ){
            gcd=i;
        }
    }
    cout<<"gcd is"<<gcd;
}
void GCDoptimal(int n1,int n2){
    while(n1>0 && n2>0){
        if(n1>n2){
          n1=n1%n2;
        }
        else{
            n2=n2%n1;
        }
    }
    if(n1==0){
        cout<<n2;
    }
    else{
        cout<<n1;
    }
}
void CheckPrime(int n){
    int cnt=0;
    for(int i=1;i<=n;i++){
        if(n%i==0){
            cnt++;
        }
    }
    if(cnt==2){
        cout<<"yes";
    }
    else{
        cout<<"no";
    }
}
void Divisiors(int n){
    for(int i=1;i<=n;i++){
        if(n%i==0){
            cout<<i<<" ";
        }
    }

}
void SumofNumbers(int n){
    int sum=0;
    for(int i=1;i<=n;i++){
        sum=sum+i;
    }
    cout<<sum;
}
int Recursive(int n){
    if (n==0) return 0;
    return n+Recursive(n-1);
}
int ReverseArray(vector<int>& arr){
    int low=0;
    int high=arr.size()-1;
    while(low<=high){
        swap(arr[low],arr[high]);
        low++;
        high--;
    }
    for(int val:arr){
        cout<<val<<" ";
    }
}
void CountFrequency(vector<int>& arr){
    unordered_map<int, int> mpp;
    int maxfrquency=0;
    int minfrquency=arr.size();
    int maximumele=arr[0];
    int minimumele=arr[0];
    for(int i=0;i<arr.size();i++){
        mpp[arr[i]]++;
    }
    for(auto x:mpp){
        if(x.second>maxfrquency){
            maxfrquency=x.second;
            maximumele=x.first;
        }   
    }
    cout<<maximumele<<" "<<maxfrquency<<endl;

}
void selectionsort(vector<int>& arr){
    int n=arr.size();
    for(int i=0;i<n;i++){
        int min=i;
        for(int j=i;j<n;j++){
            if(arr[j]<arr[min]){
                min=j;
            }
        }
       /* int temp=arr[min];
        arr[min]=arr[i];
        arr[i]=temp;*/
        swap(arr[i],arr[min]);

    }
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }

}
void Bubblesort(vector<int>& arr){
    int n=arr.size();
    for(int i=0;i<n;i++){
        for(int j=0;j<=n-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}
void insertionsort(vector<int>& arr){
    int n=arr.size();
    for(int i=0;i<n;i++){
        int j=i;
        while(j>0 && arr[j-1]>arr[j]){
            swap(arr[j-1],arr[j]);
            j--;
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}
void LargeElement(vector<int>& arr){
     int n=arr.size();
     int large=arr[0];
     for(int i=0;i<n;i++){
        if(arr[i]>large){
            large=arr[i];
        }
     }
     cout<<"Large element is: "<<large;
}
void secondLargesmall(vector<int>& arr){
    int n=arr.size();
    if(n<=2){
        cout<<"not certain elements";
        return;
    }
    sort(arr.begin(),arr.end());
    cout<<"second small element is:"<<arr[1]<<"  "<<"second large is:"<<arr[n-2];
}
void secondlargesmallop(vector<int>& arr){
    int n=arr.size();
    int small=INT_MAX;
    int second_small=INT_MAX;
    if(n<2){
        cout<<-1<<endl;
        return;
    }
    for(int i=0;i<n;i++){
        if(arr[i]<small){
            second_small=small;
            small=arr[i];
        }
        else if(arr[i]<second_small && arr[i]!=small){
            second_small=arr[i];
        }
    }
    cout<<"small is:"<<small<<" "<<"second small is:"<<second_small;


}
void checkarraysorted(vector<int>& arr){
    int n=arr.size();
    bool value=false;
    for(int i=0;i<n-1;i++){
        if(arr[i]<=arr[i+1]){
            value=true;
        }
        else{
            value=false;
            break;
        }
    }
    cout<<boolalpha<<value<<" ";
}
void Removeduplicates(vector<int>& arr){
    int n=arr.size();
    vector<int> ans;
    for(int i=0;i<n-1;i++){
        if(arr[i]!=arr[i+1]){
            ans.push_back(arr[i]);
        }
    }
    ans.push_back(arr[n-1]);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<endl;
    }

}
void RemoveDuplicatesoptimal(vector<int>& arr){
    int n=arr.size();
    int i=0;
    for(int j=1;j<n;j++){
        if(arr[i]!=arr[j]){
            i++;
            arr[i]=arr[j];
        }
    }
    for(int j=0;j<i+1;j++){
        cout<<arr[j]<<endl;
    }
}
void Linearsearch(vector<int>& arr,int k){
    int n=arr.size();
    for(int i=0;i<n;i++){
        if(arr[i]==k){
            cout<<"element found at"<< i<<"th postion";
            return;
        }
    }
    cout<<"element not found";
}
void RotateByoneplace(vector<int>& arr){
    int n=arr.size();
    if(n<2){
        cout<<"only one element then no need to shift";
        return;
    }
    int ele=arr[0];
    arr.push_back(ele);
    for(int i=1;i<=n;i++){
        cout<<arr[i]<<endl;
    }

}
void Rotatearrayright(vector<int>& arr,int k){
    int n=arr.size();
    if(n==0) return;
    vector<int> ans;
    k=k%n;
    for(int i=n-k;i<n;i++){
        ans.push_back(arr[i]);
    }
    for(int i=0;i<n-k;i++){
        ans.push_back(arr[i]);
    }
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
    //Tc:O(n) && sc:O(n)
}
void MoveZerostoend(vector<int>& arr){
    int n= arr.size();
    int cnt=0;
    vector<int> ans;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            cnt++;
        }
        else{
            ans.push_back(arr[i]);

        }
    }
    for(int i=0;i<cnt;i++){
        ans.push_back(0);
    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<endl;
    }
    //Tc:O(n) && sc:O(n)
}
void Movezerosoptimal(vector<int>& arr){
    int n=arr.size();
    int i=0;
    for(int j=0;j<n;j++){
        if(arr[j]!=0){
            arr[i]=arr[j];
            i++;
        }
    }
    while(i<n){
        arr[i]=0;
        i++;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
}
void Maximumconsecutive(vector<int>& arr){
    int maxi=0;
    int sum=0;
    int n=arr.size();
    for(int i=0;i<n;i++){
        if(arr[i]==1){
            sum++;
        }
        else{
            maxi=max(maxi,sum);
            sum=0;
        }
    }
    maxi=max(sum,maxi);
    cout<<"maximum ones are"<<maxi<<endl;
    
}
void Numberappear(vector<int>& arr){
    int n=arr.size();
    int ans=0;
    for(int val:arr){
        ans=ans^val;
    }
    cout<<"answer is:"<<ans;
}
void Intersection(vector<int>& A,vector<int>& B){
     int Asize=A.size();
     int Bsize=B.size();
     vector<int> visited(Bsize,0);
     vector<int> ans;
     for(int i=0;i<Asize;i++){
        for(int j=0;j<Bsize;j++){
            if(A[i]==B[j] && visited[j]==0){
                ans.push_back(A[i]);
                visited[j]=1;
                break;
            }
        }
     }
     for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<endl;
     }
}
void Intersectionoptimal(vector<int>& A,vector<int>& B){
    int n1=A.size();
    int n2=B.size();
    int i=0;
    int j=0;
    vector<int> ans;
    while(i<n1 && j<n2){
        if(A[i]<B[j]){
            i++;
        }
        else if(A[i]>B[j]){
            j++;
        }
        else{
            ans.push_back(A[i]);
            i++;
            j++;
        }
    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}
void Longestsubarraysum(vector<int>& A,int k){
    int n=A.size();
    int sum=0;
    int cnt=0;
    int len=0;
    int value=k;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            sum=sum+A[j];
            cnt++;
            if(sum==value){
                len=max(len,j-i+1);
                
            }
        }

    }
    cout<<"Maximum is"<<len<<endl;
}
void search2delement(const vector<vector<int>>& matrix,int k){
    if(matrix.empty()|| matrix[0].empty()){
        cout<<-1<<"";
        return;
    }
    int rows=matrix.size();
    int cols=matrix[0].size();
    int value=k;
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            if(matrix[i][j]==value){
                cout<<"found"<<" ";
                return;
            }
        }
    }
    cout<<-1<<" ";
}
bool search2delementoptimal(const vector<vector<int>>& matrix,int k){
    if(matrix.empty()||matrix[0].empty()){
        cout<<"no elements";

    }
    int rows=matrix.size();
    int cols=matrix[0].size();
    int low=0;
    int target=k;
    int high=(rows*cols)-1;
    while(low<=high){
        int mid=(low+high)/2;
        int row=mid/cols;
        int col=mid%cols;
        if(matrix[row][col]==k){
           return true;
        }
        else if(matrix[row][col]<target){
            low=mid+1;
        }
        else{
            high=mid-1;
        }

    }
    return false;
    
}
void Twosum(const vector<int>& arr,int target){
    int n=arr.size();
    int i=0;
    int j=n-1;
    int sum=0;
    int k=target;
    while(i<j)
    {
        sum=arr[i]+arr[j];
        if(sum==k){
            cout<<i<<" "<<j;
            return;
        }
        else if(sum<k){
            i++;
        }
        else{
            j--;
        }
    }
    cout<<-1<<-1;

}
void sort0s(vector<int>& arr){
    int n=arr.size();
    int low=0,mid=0,high=n-1;
    while(mid<=high){
         if(arr[mid]==0){
            swap(arr[low],arr[mid]);
            low++;
            mid++;
        }
        else if(arr[mid]==1){
            mid++;
        }
        else{
            swap(arr[mid],arr[high]);
            high--;
        }

    }
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
}
void majorityelement(vector<int>& arr){
    int n=arr.size();
    int majorityele;
    vector<int> ans(n,0);
    for(int i=0;i<n;i++){
        ans[arr[i]]++;
    }
    for(int i=0;i<ans.size();i++){
        if(ans[i]>n/2){
            majorityele=i;
        }
    }
    cout<<majorityele;
}
void majorbetter(vector<int>& arr){
    int n=arr.size();
    if(arr.empty()){
        cout<<"no elements in array";
        return;
    }
    map<int,int> ans;
    for(int i=0;i<n;i++){
        ans[arr[i]]++;
    }
    for(auto it:ans){
        if(it.second>n/2){
            cout<<it.first;
        }
    }
}
void majorityoptimal(vector<int>& arr){
    int n=arr.size();
    int el;
    int cnt=0;
    for(int i=0;i<n;i++){
        if(cnt==0){
            cnt=1;
            el=arr[i];
        }
        else if(el==arr[i]){
            cnt++;
        }
        else{
            cnt--;
        }
    }
    int cnt1=0;
    for(int i=0;i<n;i++){
        if(arr[i]==el){
            cnt1++;
        }
    }
    if(cnt1>(n/2)){
        cout<<el;
    }
    else{
        cout<<-1;
    }
}
void maximumsubarraysum(vector<int>& arr){
    int maxi=INT_MIN;
    int n=arr.size();
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=i;j<n;j++){
            sum=sum+arr[j];
            maxi=max(sum,maxi);
        }
    }
    cout<<"maximum is:"<<maxi;

}
void Maximumsubarrayoptimal(vector<int>& arr){
    int n=arr.size();
    long long maxi=LONG_MIN;
    long long sum=0;
    for(auto val:arr){
        sum=sum+val;
        if(sum<0){
            sum=0;
        }
        maxi=max(sum,maxi);
    }
    cout<<maxi;
}
void maximumsubarrayequalsk(vector<int>& arr,int k){
    int n=arr.size();
    map<int,int> mapsum;
    int maxlen=0;
    int cnt=0;
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
        if(sum==k){
           // maxlen=max(maxlen,i+1);
           cnt++;
        }
        int rem=sum-k;
        if(mapsum.find(rem)!=mapsum.end()){
            int len=i-mapsum[rem];
            //maxlen=max(maxlen,len);
            cnt++;
        }
        if(mapsum.find(sum)==mapsum.end()){
            mapsum[sum]=i;
        }

    }
    cout<<"length is:"<<cnt;
}
void stockbuysell(vector<int>& arr){
    if(arr.empty()||arr.size()==1){
        return;
    }
    int n=arr.size();
    int buy=arr[0];
    int buyday;
    for(int i=0;i<n;i++){
        if(arr[i]<buy){
            buy=arr[i];
            buyday=i;
        }
    }
    int sellvalue=INT_MIN;
    for(int i=buyday;i<n;i++){
        if(arr[i]>sellvalue){
            sellvalue=arr[i];
        }
    }
    int profit=sellvalue-buy;
    if(profit>0){
        cout<<profit;
    }
    else{
        cout<<0;
    }
    
}
void Rearrangeelements(vector<int>& arr){
    int n=arr.size();
    vector<int> positive;
    vector<int> negitive;
    for(int i=0;i<n;i++){
        if(arr[i]>0){
            positive.push_back(arr[i]);
        }
        else{
            negitive.push_back(arr[i]);
        }

    }
    int k=0;
    for(int i=0;i<n;i=i+2){
        arr[i]=positive[k];
        k=k+1;
    }
     k=0;
    for(int i=1;i<n;i=i+2){
        arr[i]=negitive[k];
        k=k+1;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}
void Leadersinarray(vector<int>& arr){
    int n=arr.size();
    vector<int> ans;
    int leader=arr[n-1];
    for(int i=n-2;i>=0;i--){
        if(arr[i]>=leader){
            ans.push_back(leader);
            leader=arr[i];
        }
    }
    ans.push_back(leader);
    for(int i=ans.size()-1;i>=0;i--){
        cout<<ans[i]<<" ";
    }
}
void Longestconsecutive(vector<int>& arr){
    int n=arr.size();
    sort(arr.begin(),arr.end());
    int maxlen=0;
    int cnt=0;
    for(int i=0;i<n-1;i++){
        if((arr[i]+1)==arr[i+1]){
            cnt++;
        }
        else{
            maxlen=max(cnt,maxlen);
            cnt=0;
        }
    }
    maxlen++;
    cout<<maxlen;
}
void MajorityElement(vector<int>& arr){
    int n=arr.size();
    map<int,int> mapp;
    for(int i=0;i<n;i++){
        mapp[arr[i]]++;
    }
    for(auto it: mapp){
        if(it.second>(n/3)){
            cout<<it.first<<endl;
        }
    }
}
void Threesumproblem(vector<int>& arr){
    int n=arr.size();
    set<vector<int>> st;
    int sum=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                if(arr[i]+arr[j]+arr[k]==0){
                    vector<int> temp={arr[i],arr[j],arr[k]};
                    sort(temp.begin(),temp.end());
                    st.insert(temp);
                }
            }
        }
    }
    vector<vector<int>> ans(st.begin(), st.end());
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}
void countDigitsproduct(int n){
    vector<int> ans;
    while(n!=0){
        int r=n%10;
        ans.push_back(r);
        n=n/10;
    }
    int product=1;
    int maxproduct=INT_MIN;
    if(ans.size()<2){
        cout<<"Elements are less than 2";
        return;
    }
    for(int i=0;i<ans.size();i++){
        for(int j=i+1;j<ans.size();j++){
            product=ans[i]*ans[j];
            maxproduct=max(product,maxproduct);
        }
    }
    cout<<maxproduct;
}
void Maximumsubarrayzero(vector<int>& arr){
    int n=arr.size();
    vector<vector<int>> ans;
    for(int i=0;i<n;i++){
        int sum=arr[i];
        for(int j=i+1;j<n;j++){
            sum=sum+arr[j];
            if(sum==0){
                vector<int> temp;
                for(int z=i;z<=j;z++){
                    temp.push_back(arr[z]);

                }
                ans.push_back(temp);
            }
        }
    }
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}
int Maximumsubarrayoptimalzero(vector<int>& arr){
        int maxi=0;
        unordered_map<int,int> mpp;
        int n=arr.size();
        int sum=0;
        for(int i=0;i<n;i++){
            sum=sum+arr[i];
            if(sum==0){
                maxi=i+1;
            }
            else if(mpp.find(sum)!=mpp.end()){
                maxi=max(maxi,i-mpp[sum]);
            }
            else{
                mpp[sum]=i;
            }
            
        }
        return maxi;
    }
void CountReversepairs(vector<int>& arr){
    
}
void CountInversions(vector<int>& arr){
    int n=arr.size();
    int cnt=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                cnt++;
            }

        }
    }
    cout<<"count is"<<cnt;
}
void mergetwosortedarrays(vector<int>& arr1,vector<int>& arr2){
    int n1=arr1.size();
    int n2=arr2.size();
    vector<int> temp;
    int i=0,j=0;
    while(i<n1 && j<n2){
        if(arr1[i]<arr2[j]){
            temp.push_back(arr1[i]);
            i++;
        }
        else{
            temp.push_back(arr2[j]);
            j++;
        }
    }
    while(i<n1){
            temp.push_back(arr1[i]);
            i++;
    }
    while(j<n2){
        temp.push_back(arr2[j]);
          j++;
    }
    for(int i=0;i<temp.size();i++){
        cout<<temp[i]<<" ";
    }
}
void RepatAndMissing(vector<int>& arr){
    int n=arr.size();
    int value=1;
    int repeated=INT_MIN;
    sort(arr.begin(),arr.end());
    for(int i=0;i<n;i++){
        if(arr[i]==value){
            value++;
        }
        else{
            repeated=arr[i];
            break;
            
        }
    }
    int originalsum=n*(n+1)/2;
    int duplicatesum=0;
    for(int val:arr){
         duplicatesum+=val;
    }
    int missing=originalsum-duplicatesum+repeated;
    cout<<"Repated value is :"<<repeated<<" missing value is: "<<missing;
} 
int main()
{
    /*int n;
    cout<<"enter";
    cin>>n;*/
    //countdigits(n);
    //Reverse(n);
    //palindrome(n);
    //Armstrong(n);
    //GCDoptimal(20,15);
    //CheckPrime(n);
    //Divisiors(n);
    //SumofNumbers(n);
    //Recursive(n);
    /*vector<int> arr={1,2,3,4,5};
    ReverseArray(arr);*/
    vector<int> A={0,0,0,0,0,0};
    vector<int> B={2,3,5,6,7};
    //selectionsort(arr);,6,7
    //Bubblesort(arr);
    //insertionsort(arr);
    //LargeElement(arr);
    //secondlargesmallop(arr);
    //checkarraysorted(arr);
    //Removeduplicates(arr);
    //RemoveDuplicatesoptimal(arr);
    //Linearsearch(arr,0);
    //RotateByoneplace(arr);
    //Rotatearrayright(arr,2);
    //MoveZerostoend(arr);
    //Movezerosoptimal(arr);
    //Maximumconsecutive(arr);
    //Numberappear(arr);
    //Intersection(A,B);
    //Intersectionoptimal(A,B);
    //Longestsubarraysum(A,4);
    vector<vector<int>> matx={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    vector<vector<int>> mati={};
   // bool value=search2delementoptimal(matrix,100);
    vector<int> matrix={2,6,5,8,11};
    //Twosum(matrix,8);
    vector<int> arro={2,2,2,0,1,1,1,0,1,1,1,0,0};
    //sort0s(arro);
    vector<int> ari={3,1,2,5,4,6,7,5};
    //Maximumsubarrayoptimal(ari);
    //majorityelement(ar);
    //majorityoptimal(ar);
    //maximumsubarraysum(ar);
    //maximumsubarrayequalsk(ari,0);
   // stockbuysell(ari);
  // Rearrangeelements(ari);
   //Leadersinarray(ari);
   //Longestconsecutive(ari);
   //MajorityElement(ari);
   //Threesumproblem(ari);
  // countDigitsproduct(7);
 // Maximumsubarrayzero(ari);
 //cout<<Maximumsubarrayoptimalzero(ari);
   //CountInversions(ari);
   RepatAndMissing(ari);
    
}
