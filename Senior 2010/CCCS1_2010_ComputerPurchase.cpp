#include<bits/stdc++.h>
using namespace std;

struct Computer{
    string name;
    int ram, cpu, dds, arr;
};

int cal(int a, int b, int c){
    return a*2+3*b+c;
}

int main(){
    struct Computer com[10005], t;
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> com[i].name >> com[i].ram >> com[i].cpu >> com[i].dds;
    }
    for(int i = 1; i <= n; i++){
        com[i].arr = cal(com[i].ram,com[i].cpu,com[i].dds);
    }
    for(int i =1; i <= n-1; i++){
        for(int j = 1; j <= n-i; j++){
            if(com[j].arr<com[j+1].arr)
            { t=com[j];com[j]=com[j+1];com[j+1]=t;}
        }
    }
    if(com[1].arr == com[2].arr){
        if(com[1].name > com[2].name)
            cout << com[2].name << endl << com[1].name << endl;
        else 
            cout << com[1].name << endl << com[2].name << endl;
    }else 
            cout << com[1].name << endl << com[2].name << endl;
    return 0;
}
