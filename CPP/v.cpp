/*#include<iostream>
using namespace std;
void insertion(int a[],int n, int key, int pos){
    
    for(int i=0; i<n+1; i++){
        cout<<a[i]<<" ";
    }

}
int main(){
    int n;
    int pos,key;
    cin>>n>>pos>>key;
    int a[n+1];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=n;i>=pos;i--){
        a[i]=a[i-1];
    }
    a[pos]=key;
    insertion(a,n,key,pos);
    return 0;
}
*/
/*#include <iostream>
using namespace std;
int main(){
    int n,key;
    cout<<"enter size of array :";
    cin>>n;
    int a[n+1];
    cout<<"enter array elements :";
    for(int i=0; i<=n-1; i++){
    cin>>a[i];
    }
    cout<<"enter the new element :";
    cin>>key;
    for(int i=0; i<=n-1; i++){
        if(a[i]<key)
        continue;
        else{
            for(int j=n; j>=i;j--){
                a[j]=a[j-1];
            
            }
            a[i]=key;
            break;
        }
    }
    for(int i=0; i<=n; i++)
    cout<<a[i]<<" ";
    return 0;
}
    */
   /*#include<iostream>
   using namespace std;
   int main(){
    int n;
    cout<<"enter the size of array :";
    int a[n+1];
    cin>>n;
    cout<<"enter array elements :";
    for(int i=0; i<=n-1; i++){
        cin>>a[i];
    } 

    for(int i=0; i<=n-1;i++){
        if(a[i+1]=a[i]+1)
        continue;
        else{
            for(int j=n;j>=i+1;j--){
                a[j]=a[j-1];
            }
            a[i+1]=i+2;
        }
    }
    for(int i=0;i<=n;i++)
    cout<<a[i]<<" ";
   }*/
  /*#include<iostream>
  using namespace std;
  int  main(){
    int n,a;
    cout<<"enter the size :";
    cin>>n;
    for(int i=1; i<=1; i++){
        for(int j=1; j<=n;j++){
            if(j<=(n+1)/2){
            cout<<j;
            a=j;
            }
            else{
                if(n%2==0){
                    cout<<a;
                    a--;
                }else{
                  cout<<a-1;
                  a--;
                }
            }
        }
    }
    cout<<endl;
    for(int i=2;i<=n-1;i++){
        for(int j=1;j<=1;j++){
           if(i<=(n+1)/2){
            cout<<i;
            a=i;
            }
            else{
                if(n%2==0){
                    cout<<a;
                    a--;
                }else{
                  cout<<a-1;
                  a--;
                }
            }
        }
        for(int j=2;j<=n-1;j++){
            cout<<"0";
        }
        for(int j=n;j<=n;j++){
            if(i<=(n+1)/2){
            cout<<i;
            a=i;
            }
            else{
                if(n%2==0){
                    cout<<a;
                    a--;
                }else{
                  cout<<a-1;
                  a--;
                }
            }
        }
        cout<<endl;
    }
    for(int i=n; i<=n; i++){
        for(int j=1; j<=n;j++){
            if(j<=(n+1)/2){
            cout<<j;
            a=j;
            }
            else{
                if(n%2==0){
                    cout<<a;
                    a--;
                }else{
                  cout<<a-1;
                  a--;
                }
            }
        }
    }
    return 0;
  }
    



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
    */



#include<iostream>
using namespace std;

struct node{
    int data;
    node* next;
    node(int val):data(val),next(nullptr){};

};
void insertatbeg(node* &head, int item){
    node* newnode=new node(item);
    newnode->next=head;
    head=newnode;
}

void traverse(node* head){
    node* temp=head;
    while(temp!=nullptr){
    cout<<temp->data<<" ";
    temp=temp->next;
    }
}
    
int main(){
    node* head=nullptr;
    insertatbeg(head,100);
    insertatbeg(head,200);
    traverse(head);
    return 0;
} 
    
   