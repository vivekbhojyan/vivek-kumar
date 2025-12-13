#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter size of both arrays :";
    cin>>a>>b;
    cout<<endl;
    int A[a],B[b];
    cout<<"enter elements of A :"<<endl;
    for(int i=0; i<a; i++)
    cin>>A[i];
    cout<<endl;
    cout<<"enter elements of B :"<<endl;
    for(int i=0; i<b; i++)
    cin>>B[i];
    int C[a+b];
    int x=0,y=0,z=0;
    while(x<=a ||y<=b){
        if(A[x]<=B[y])
          C[z++]=A[x++];
        else
          C[z++]=B[y++];
    }
    cout<<"Merge sorted array : ";
    for(int i=0; i<a+b; i++){
    cout<<C[i]<<" ";
    }
    return 0;
}