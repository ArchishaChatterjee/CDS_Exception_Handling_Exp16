// EXPERIMENT 16A : Exception Handling created by divide by 0 error

#include <iostream>
using namespace std;

int main(){
    float a,b, ans;
    cout << "Enter 2 values of a and b :" ;
    cin >> a >> b;

    try{
        if (b==0){
            throw b;
        }
        else{
            ans = a/b;
            cout << "Ans is " << ans << endl;
        }
    }
    catch (float num){
        cout << "\nERROR : Division by " << num << endl;
    }
    return 0;
}

/*
OUTPUT:
Enter 2 values of a and b :2 0

ERROR : Division by 0
*/
