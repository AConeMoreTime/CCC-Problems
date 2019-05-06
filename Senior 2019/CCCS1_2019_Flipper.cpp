//
//  main.cpp
//
//  Created by Xiang Gao on 2019/2/20.
//  Copyright © 2019 Xiang Gao. All rights reserved.
//

#include <bits/stdc++.h>
using namespace std;
int matrix[2][2];

int main() {
    int temp = 0;
    int counter = 1;
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            matrix[i][j] = counter;
            counter++;
        }
    }
    string in;
    char inn[1000005];
    cin >> in;
    for(int i = 0; i < in.size(); i++){
        inn[i] = in[i];
    }
    for(int i = 0; i < in.size(); i++){
        if(inn[i] == 'H'){
            temp = matrix[0][0]; matrix[0][0] = matrix[1][0]; matrix[1][0] = temp;
            temp = matrix[0][1]; matrix[0][1] = matrix[1][1]; matrix[1][1] = temp;
        }else if(inn[i] == 'V'){
            temp = matrix[0][0]; matrix[0][0] = matrix[0][1]; matrix[0][1] = temp;
            temp = matrix[1][0]; matrix[1][0] = matrix[1][1]; matrix[1][1] = temp;
        }
    }
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}
