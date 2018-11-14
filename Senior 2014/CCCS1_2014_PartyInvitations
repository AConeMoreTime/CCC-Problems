#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    int m; cin >> m;
    int remove[15], a = 0;
    vector<int> people;
    //memset(people, 1, sizeof(n+1)); people[0] = 0;
    for(int i = 0; i <= n; i++){
        people.push_back(i);
    }
    people[0] = 1;
    for(int i = 0; i < m; i++){
        cin >> remove[i];
    }
    for(int i = 0; i < m; i++){

        for(int j = remove[i]; j < people.size(); j+= remove[i]){
            people[j] = 0;
            
        }
        for(int z = 0; z < people.size(); z++){
            if(people[z] == 0)
                people.erase(people.begin()+z);
        }
        
    }
    for(int i = 1; i < people.size(); i++){
        cout << people[i] << endl;
    }
    return 0;
}
