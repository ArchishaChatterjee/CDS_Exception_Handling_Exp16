// EXPERIMENT 16B : Error handling by BMI

#include <iostream>
using namespace std;

int main(){
    float h, w, result;
    cout << "Enter height and weight :" ;
    cin >> h >> w;

    try{
        if (result <= 18.5){
            throw result;
        }
        else{
            result = (h*h)/w;
            cout << "BMI is : " << result << endl;
        }
    }
    catch(float num){
        cout << "\nERROR : BMI is too less. It is "<< num << endl;
    }
}

/*
OUTPUT
Enter height and weight :100 20

ERROR : BMI is too less. It is -1.30461e+10
*/
