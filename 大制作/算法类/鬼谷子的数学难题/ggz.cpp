#include<iostream>
#include<fstream>
#include<cmath>
using namespace std;

bool    nn[198];
int     okay[198],tot=0;
short   del[9703];

bool isprime(int num){
    for(int i=2;i<=sqrt(num);i++)
        if(num%i==0) return 0;
    return 1;
}

int main(){
    freopen("output.txt","w",stdout);
    int num[29]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,51,53,57,59,61,67,71,73,79,83,87,89,91,97};
    for(int i=0;i<29;i++)
        for(int j=i+1;j<29;j++)
            if(num[i]+num[j]<198)
                nn[num[j]+num[i]]=1;
    for(int i=7;i<198;i++)
        if(!nn[i]){
            for(int j=16;j<29;j++)
                if((i-num[j]<=99) && (!isprime(i-num[j])) && (i-num[j]>3)){
                    nn[i]=1;
                    break;
                }
        }
    for(int i=7;i<198;i++){
        if(!nn[i]){
            cout<<i<<' ';
            okay[++tot]=i;
        }
    }
    //step2
    cout<<endl<<endl;
    tot-=2;//ÊÖ¶¯É¾³ý194,197;

    for(int i=1;i<=tot;i++)
        for(int j=2;j<=okay[i]/2;j++)
            if(del[j*(okay[i]-j)]==0)
                del[j*(okay[i]-j)]=1;
            else if(del[j*(okay[i]-j)]==1)
                del[j*(okay[i]-j)]=-1;
    for(int i=1;i<=tot;i++){
        cout<<okay[i]<<':';
        for(int j=2;j<okay[i]/2;j++)
            if(del[j*(okay[i]-j)]==1){
                cout<<' '<<j<<'+'<<okay[i]-j;
            }
        cout<<endl;
    }
    return 0;
}
