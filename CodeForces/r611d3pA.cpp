#include <stdio.h>
using namespace std;

int main(){

    int ncases;
    scanf("%d",&ncases);
    while(ncases--){
        int h,m;
        int ans;
        scanf("%d %d",&h,&m);

        ans = (24-h) * 60 - m;
        printf("%d\n",ans%1440);
    }
}