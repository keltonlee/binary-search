#include<iostream>
using namespace std;
void bsearch(int a[],int x,int y,int k){
    int n,right,left,mid,i;
    left=x;
    right=y;
    mid=(left+right)/2;
    if(left>right){//重要
        cout<<"False"<<endl;
    }
    else if(a[mid]==k){
        cout<<"True"<<endl;
    }
    else if(a[mid]<k){
        return bsearch(a,mid+1,right,k);
    }
    else if(a[mid]>k){
        return bsearch(a,left,mid-1,k);
    }
}
int main(){
    int n,right,left,mid,i,x;
    cin>>n;
    int bs[n];
    for(i=0;i<n;i++){
        cin>>bs[i];
    }
    while(cin>>x){
        if(x<0){
            break;
        }
        else{
            bsearch(bs,0,n-1,x);
        }
    }
}