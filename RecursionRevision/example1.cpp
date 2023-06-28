#include<iostream>

using namespace std;
void printRecursively(int integer){
    if(integer==0){
        return ;
    }
    cout<<"heyy"<<endl;
    printRecursively(integer-1);

}
void printNto1(int a){
    if(a==0){
        return;
    }
    cout<<a<<endl;
   a--;
   printNto1(a);
}
void print1toN(int N){
if(N<1){
    return;
}
print1toN(N-1);
cout<<N<<endl;
}
void calculateSumToN(int N){
    if(N)
}
int main(){
printRecursively(5);
printNto1(5);
print1toN(5);
}