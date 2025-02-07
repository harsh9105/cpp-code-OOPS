// #include<iostream>
// using namespace std;
// template<class G> G sum(G a, G b){
//     G c = a+b;
//     return c;
// }
// int main(){
//     float a,b,c;
//     a=10.6;
//     b=5.8;
//     c =sum(a,b);
//     cout << c;
//     return 0;
// }
#include<iostream>
using namespace std;
template<class G ,class H> void sum(G a, H b){
    // G c = a+b;
    //return c;
    cout<<a;
    cout<<b;

}
int main(){
    float a,c;
    int b;
    a=10.6;
    b=5;
    sum(a,b);
    cout << c;
    return 0;
}
// generic programming 
// # include<iostream>
// using namespace std;
// tempate<class R>
// class abc{
//     public:
//     R a=9;
//     void display(){
//         cout<<a;
//     }
// }
// int main(){
//     abc<int>a;
//     a.display();
//     return 0;

// }