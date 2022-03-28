#include <bits/stdc++.h>
using namespace std;
void encryption()
    {
        int t,key,m,i,j,k,sum=0;
        string text;
        cout<<"Enter the message"<<'\n';
        cin>>text;
        cout<<"Enter key"<<'\n';
        cin>>key;
        vector<vector<char>> a(key,vector<char>(text.size(),' '));
        j=0;
        int flag=0;
        for(i=0;i<text.size();i++){
            a[j][i] = text[i];
             if(j==key-1){
                flag=1;
            }
            else if(j==0)
                flag=0;
            if(flag==0){
                j++;
            }
            else j--;
        }
        cout<<"the encryption is : ";
        for(i=0;i<key;i++){
            for(j=0;j<text.size();j++){
                if(a[i][j]!=' ')
                    cout<<a[i][j];
            }
        }
        cout<<'\n';

}
void decryption(){
    int t,key,m,i,j,k,sum=0;
    string text;
    cout<<"Enter the message"<<'\n';
    cin>>text;
    cout<<"Enter key"<<'\n';
    cin>>key;
    vector<vector<char>> a(key,vector<char>(text.size(),' '));
    j=0;
    int flag=0;
    for(i=0;i<text.size();i++){
        a[j][i] = text[i];
         if(j==key-1){
            flag=1;
        }
        else if(j==0)
            flag=0;
        if(flag==0){
            j++;
        }
        else j--;
    }
    cout<<"the decryption is : ";
    for(i=0;i<key;i++){
        for(j=0;j<text.size();j++){
            if(a[i][j]!=' ')
                cout<<a[i][j];
        }
    }
    cout<<'\n';

}
int main(){
    int choice;
    while (true){
        cout<<"do you want to :"<<"\n";
        cout<<"1-encryption."<<"\n"<<"2-decryption."<<"\n"<<"3-exit.\n";
        cin>>choice;
        if (choice == 1){
            encryption();
            cout<<endl;
        }
        else if(choice == 2){
            decryption();
            cout<<endl;
        }
        else{
            break;
        }
    }

}
