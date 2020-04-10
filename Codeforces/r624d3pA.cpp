#include<bits/stdc++.h>

using namespace std;

int main(){

    int ncase;
    cin >> ncase;
    while( ncase--){
       
        int a,b;
        cin >> a>>b;

        if(a ==b)
            cout << 0<<endl;
        
        if(a%2==0 && b%2 ==1 && a<b ) //2   9
        {
            cout <<1<<endl;
            continue;
        }
        if(a%2==0 && b%2 ==1 && a>b )  //10 3
        {
            cout <<2<<endl;
            continue;
        }
        if(a%2 ==0 && b%2==0 && a<b){
            cout <<2<<endl;  //    2  8
            continue;
        }
        if(a%2 ==0 && b%2==0 && a>b){
            cout <<1 <<endl;  // 8   2
            continue;
        }

        if(a%2 ==1 && b%2==1 && a<b){    //3  11
            cout << 2 <<endl;
            continue;
        }
        if(a%2 ==1 && b%2==1 && a>b){  //   11  3
            cout << 1 <<endl;
            continue;
        }

        if(a%2 ==1 && b%2==0 && a<b){  //3    10
            cout << 1 <<endl;
            continue;
        }
        if(a%2 ==1 && b%2==0 && a>b){  //11  2
            cout << 2 <<endl;
            continue;
        }
    }
    return 0;

}