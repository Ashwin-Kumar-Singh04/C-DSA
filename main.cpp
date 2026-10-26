#include <iostream>
#include<algorithm>
#include <cmath>
#include <vector>
using namespace std;
/// recursive program for factorial
/*int fact(int n){
    if(n==1){
        return 1;
    }
    int ans=n*fact(n-1);
    return ans;
}
int main()
{
    int i=fact(5);
    cout<<i;
    return 0;
}*/
/// recursive program for fibonacci
/*int fib(int n){
    if (n==1 ||n==0) return n;
    return fib(n-1)+fib(n-2);
}
int main(){
    int result=fib(5);
    cout<<result;
    return 0;
}*/
/// recursive program for sum of digits of a integer
/*int sumdig(int n){
    if(n==0) return 0;
    int s=n%10;
    return s+sumdig(n/10);
}

int main(){
    int n;
    cin>>n;
    int result=sumdig(n);
    cout<<result;
    return 0;
}*/
///recursive program for calculating p^q
/*int f(int p,int q){
    if(q==0) return 1;
    return p*f(p,q-1);
}
int main(){
    int n,m;
    cin>>n>>m;
    cout<<f(n,m);
    return 0;
}*/
///recursive program array
/// traversing a array
/*void f(int *arr,int idx,int n){
    //base case
    if(idx==n) return;
    cout<<arr[idx];
    f(arr,idx+1,n);
}
int main(){
    int arr[4]={1,2,3,4,5};
    int n=5;
    f(arr,0,n);
    return 0;
}*/
///recursive approach on an array to get the max  element of the array
/*int f(int *arr,int idx,int n){
    if(idx==n-1) return arr[idx];//base case
    return max(arr[idx],f(arr,idx+1,n));
}
int main(){
    int arr[]={1,2,50,8,6};
    int n=5;
    cout<<f(arr,0,n);
    return 0;
}*/
///recursive approach on an array to get the sum of element of the array
/*int f(int *arr,int idx,int n){
    if(idx==n-1) return arr[idx];//base case
    return arr[idx]+f(arr,idx+1,n);
}
int main(){
    int arr[]={9,11,10,7,3};
    int n=5;
    cout<<f(arr,0,n);
    return 0;
}*/
///recursion on string
///removing all the occurence of a and returning it
/*string f(string &s,int idx,int n){
    if(idx==n) return"";
    string curr="";
    curr+=s[idx];
    return (s[idx]=='a'?"":curr)+f(s,idx+1,n);
}
int main(){
    string s="abacus";
    int n=6;
    cout<<f(s,0,n);
    return 0;
}*/
///program on finding a number is palindrome or not using recursion
/*bool f(int num,int *temp){
//base case
    if(num>=0 && num<=9){
        int lastdigitoftemp=(*temp)%10;
        (*temp)/=10;
        return (num==lastdigitoftemp);
    }
    bool result=(f(num/10,temp) and (num)%10==(*temp%10));
    (*temp)/=10;
    return result;

}
int main(){
    int num=121;
    int anothernum=num;
    int *temp=&anothernum;
    cout<<f(num,temp);
    return 0;

}*/
///printing the number in decreasing order
/*void f(int num){
    if (num==1){
        cout<<num;
        return;
    }
    cout<<num;
    f(num-1);
}
int main(){
    int a=4;
    f(a);
    return 0;
}*/
///printing the number in ascending order
///Method-1
/*void f(int num,int *ptr){
    //int s=num;
    if(*ptr==num){
        cout<<*ptr;
        return;
    }
    cout<<*ptr;
    *ptr=*ptr+1;
    f(num,ptr);
}
int main(){
    int num=4;
    int t=1;
    int *ptr=&t;
    f(num,ptr);
    return 0;
}*/
///Method-2
/*void f(int n){
    if(n<1){
        return;
    }
    f(n-1);
    cout<<n<<" ";
}
int main(){
    int num;
    cin>>num;
    f(num);
    return 0;
}*/
///printing k multiple of  a given  number
/*void f(int num,int k){
    //base case
    if(k==0) return;
    //assumption that the given function can give k-1 multiple of the number
    f(num,k-1);
    cout<<num*k<<" ";
}
int main(){
    int num;
    cin>>num;
    int k;
    cin>>k;
    f(num,k);
    return 0;
}*/
///recursion in c++ t o get alternate plus and minus sign
/*int f(int num){
   // base case
    if(num==0) return 0;
   //Assumption
   return f(num-1)+((num%2==0)?(-num):(num));
}
int main(){
    cout<<f(5);
    return 0;
}*/
///finding the gcd in a number
/*int gcd(int a,int b){
    if(b>a) return gcd(b,a);
    //base case
    if (b==0) return a;
    //assumption
    return gcd(b,a%b);
}
int main(){
    int a,b;
    cin>>a>>b;
    int x=gcd(a,b);
    cout<<x<<"is the highest common factor";
}*/
///Program to check whether a given number is armgstorm or not
/*int pow(int p,int q){
    if(q==0) return 1;
    return p*powr(p,q-1);
}
int dig(int num, int count){
    if(num==0) return count;
    count=count+1;
    return dig(num/10,count);
}
int f(int num,int digit){
     if (num==0) return 0;
     return f(num/10,digit)+ powr(num%10,digit);

}
int main(){
    int num;
    cin>>num;
    int count =0;
    int digit=dig(num,count);
    int ans=f(num,digit);
    if(ans==num) cout<<"true";
    else cout<<"false";
    return 0;
}*/
///frog jump c++ program
/*int f(int *h,int n,int i){
    //Base case
    if(i==n-1) return 0;
    if(i==n-2) return f(h,n,i+1)+abs(h[i]-h[i+1]);

    return min(f(h,n,i+1)+abs(h[i]-h[i+1]),f(h,n,i+2)+abs(h[i]-h[i+2]));
}
int main(){
    int arr[]={10,20,30,90};
    int n=4;
    cout<<f(arr,n,0);
    return 0;
}*/
///to check whether atarget element is present in a given array or not
///M-1 by my method facing problem
/*int f(int *arr,int x,int i,int n){
        if (i==n){
           //cout <<"not found";
            return 0;
        }
        else if(arr[i]==x) cout<<"oh yeah yeah";
        //else cout<<"not found";
        f(arr,x,i+1,n);

}
int main(){
    int arr[]={1,2,3,4,5,-6};
    int n=sizeof(arr)/sizeof(arr[0]);
    int x=-8;
    int i=0;
    f(arr,x,i,n);
    return 0;
}*/
///m-2 Sir method
/*bool f(int *arr,int n,int idx,int x){
    //base case
    if(idx==n) return false;
    return arr[idx]==x || f(arr,n,idx+1,x);
}
int main(){
    int arr[]={1,2,9,8,10};
    bool result=f(arr,5,0,9);
    if(result==true){
        cout<<"yes present";
    }
    else{
        cout<<"not present";
    }
}*/
///to get the array of sum of subsets of a given array
/*void f(int *arr,int n,int idx,int sum,vector <int>&result){
    if(idx==n){
        result.push_back(sum);
         return;
    }
    f(arr,n,idx+1,sum+arr[idx],result);//picking the ith element
    f(arr,n,idx+1,sum,result);//not picking the ith element
}
int main(){
    int arr[]={2,4};
    int n=2;
    vector <int> result;
    f(arr,n,0,0,result);
    for(int i=0;i<result.size();i++){
        cout<<result[i]<<" ";
    }
    return 0;
}
*/
///No of path to reach from i=0,j=0 to i=m-1,n-1;
/*int f(int i,int j,int m,int n){
    //base case
    if(i==m-1&&j==n-1) return 1;
    if(i>=m||j>=n) return 0;
    return f(i+1,j,m,n)+f(i,j+1,m,n);
}
int main(){
    int i=0;
    int j=0;
    int m=2;
    int n=3;
    int ans=f(i,j,m,n);
    cout<<ans;

    return 0;

}*/
///phone number question
void f(string &str,int i,string result,vector <string> &li,vector <string> &v){
    if(i==str.size()){
        li.push_back(result);
        return;
    }
    int digit=str[i]-'0';
    if(digit<=1){
        f(str,i+1,result,li,v);
    }
    for(int j=0;j<v[digit].size();j++)
        f(str,i+1,result+v[digit][j],li,v);
}
int main(){
    string result="";
    string str="23";
    vector <string> v(10);
    v={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    vector <string> li;
    f(str,0,result,li,v);
    for(int idx=0;idx<li.size();idx++){
        cout<<li[idx];
    }
    return 0;

}
