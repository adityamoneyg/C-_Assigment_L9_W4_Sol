#include<iostream>
using namespace std;
void square(int n){
    for(int i=1;i<=n;i++){
        cout<<i*i<<" ";
    }
}
int main(){
    square(5);
}

//                           2 Solution

#include<iostream>
using namespace std;
void areaOfCircle(int r){
    cout<< 3.14 * r * r;
}
int main(){
    areaOfCircle(4);
}

//                            3 Solution

#include<iostream>
using namespace std;
void oddsbw(int a, int b){
    for(int i=a;i<=b;i++){
        if(i%2!=0) cout<<i<<" ";
    }
    cout<<endl;
}
int main(){
    oddsbw(1,10);
}

//                            4 Solution

#include <bits/stdc++.h>
using namespace std;
void countAndSquare(int num){
    int count = 0;
    while (num != 0){
        num /= 10;
        count++;
    }
    cout << "Number of digits: " << count << endl;
    int square = pow(count, 2);
    cout << "Square of the number: " << square << endl;
}
int main(){
    countAndSquare(12345);
}

//                               5 Solution

//     There must be always 1 function in the program which is the main() function

//                               6 Solution

//     1.    True
//     2.    False

//                               7 Solution

// Yes, in C++, the same function name can be used for different functions without any conflict through a feature called function overloading. Function overloading allows multiple functions to have the same name but differ in their parameter lists (i.e., the number and/or types of parameters). The correct function to be called is determined by the compiler based on the arguments passed during the function call.