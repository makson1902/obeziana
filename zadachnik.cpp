#include <iostream>

using namespace std;
int func3(float n, int a1, int d ){
    int s = n/2 * (2 * a1 + d * (n -1));
    return s;
    
}

int main(){
    
    int x;
    cin>>x;
    int value_3 = x / 3;
    int value_5 = x / 5;
    int value_15 = x / 15;
    cout << value_3 << value_5 << value_15 << "\n";
    int s_3 = func3(float(value_3),3,3);
    int s_5 = func3(float(value_5),5,5);
    int s_15 = func3(float(value_15),15,15);
    cout << "s_3 " << s_3 << "\n";
    cout << "s_5 " << s_5 << "\n";
    cout << "s_15 " << s_15 << "\n";
    cout <<  s_3 + s_5 - s_15;

}


// #include <iostream>

// using namespace std;
// int main(){
//     int x;
    
//     int count = 0;
//     cin>>x;
//     for (int i = 1; i < x; i++) {
//         if(i%3 == 0 || i%5 == 0){
//             count+=i;
//             // count+=i;
//         }
//     }
//     cout << count;


// }