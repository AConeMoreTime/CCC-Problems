#include <bits/stdc++.h>
using namespace std;
int main(){
    string in; int arr[30];
    cin >> in;
    int length = in.length();
    for(int i = 0; i < length; i++){
        switch(in[i]){
            case 'I':
                arr[i] = 1;
                break;
            case 'V':
                arr[i] = 5;
                break;
            case 'X':
                arr[i] = 10;
                break;
            case 'L':
                arr[i] = 50;
                break;
            case 'C':
                arr[i] = 100;
                break;
            case 'D':
                arr[i] = 500;
                break;
            case 'M':
                arr[i] = 1000;
                break;
            default :
                arr[i] = in[i] - '0';
        }
    }
    int sum = 0;
    for(int i = 0; i < length; i++){
        if(i == length - 2){
            sum += arr[i]*arr[i+1];
            i++;
        }else if(arr[i+1] < arr[i+3]){
            sum -= arr[i]*arr[i+1];
            i++;
        }else{
            sum += arr[i]*arr[i+1];
            i++;
        }
    }
    cout << sum << endl;
    return 0;
}
