#include <iostream>
using namespace std;

void pattern1(int row){
    for(int i=0; i<row; i++) {

        for(int j=0; j<row-i-1; j++) {
            cout<<" ";
        }
        for(int j=0; j<2*i+1; j++) {
            cout<<"*";
        }
        for(int j=0; j<row-i-1; j++) {
            cout<<" ";
        }
        cout<<endl;
    }
}

void pattern2(int row){
    for(int i=0; i<row; i++) {
        for(int j=0; j<i; j++) {
            cout<<" ";
        }
        for(int j=0; j<(2 *(row-i)) -1; j++) {
            cout<<"*";
        }
        for(int j=0; j<i; j++) {
            cout<<" ";
        }
        cout<<endl;
    }
}

void pattern3 (int row){
    for(int i=0; i<=row/2; i++){
        for(int j=0; j<i+1; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=0; i<row/2; i++){
        for(int j=0; j<row/2-i; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

void patttern4(int row){
    int a = 1;
    for(int i=1; i<=row; i++){
        for(int k=0; k<i; k++){
            if(k%2==0){
                cout<<a;
            }else{
                cout<<!a;
            }
        }
        a=!a;
        cout<<endl;
    }
}

void pattern5(int row){
    for(int i=1; i<=row; i++){
        for(int j=0; j<i; j++){
            cout<<j+1;
        }
        for(int j=0; j<row*2 - i*2; j++){
            cout<<" ";
        }
        for(int j=i; j>0; j--){
            cout<<j;
        }
        cout<<endl;
    }
}

void pattern6(int row){
    int a = 1;
    for(int i=1; i<=row; i++){
        for(int j=0; j<i; j++){
            cout<<a++<<" ";
        }
        cout<<endl;
    }
}

void pattern7(int row){
    char ch = 'A';
    for(int i=1; i<=row; i++){
        for(int j=0; j<i; j++){
            cout<<ch++;
        }
        ch = 'A';
        cout<<endl;
    }
}

void pattern8(int row){
    char ch = 'A';
    for(int i=row; i>0; i--){
        for(char j='A'; j<'A'+i; j++){
            cout<<j;
        }
        ch = 'A';
        cout<<endl;
    }
}

void pattern9(int row){
    char ch = 'A';
    for(int i=1; i<=row; i++){
        for(int j=ch; j<ch+i; j++){
            cout<<ch;
        }
        ch++;
        cout<<endl;
    }
}

void pattern10(int row){
    char ch = 'A';
    for(int i=1; i<=row; i++){
        //space
        for(int j=0; j<row-i; j++){
            cout<<" ";
        }
        //characters
        for(int j=0; j<i; j++){
            cout<<ch++;
        }
        ch--;
        //reverse characters
        for(int j=1; j<i; j++){
            cout<<--ch;
        }
        //spaces
        for(int j=0; j<row-i; j++){
            cout<<" ";
        }
        ch = 'A';
        cout<<endl;
    }
}

void pattern11(int row){
    char ch = 'E';
    for(int i=1; i<=row; i++){
        for(char j=ch; j<ch+i; j++){
            cout<<j<<" ";
        }
        ch--;
        cout<<endl;
    }
}

void pattern12(int row) {
    for(int i=row; i>0; i-=2){
        //stars 
        // cout<<i<<" ";
        for(int j=0; j<i/2; j++){
            cout<<"*";
        }
        //space
        for(int j=0; j<row-i; j++){
            cout<<" ";
        }
        //stars
        for(int j=0; j<i/2; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=1; i<=row/2; i++){
        //stars 
        for(int j=0; j<i; j++){
            cout<<"*";
        }
        //space
        for(int j=0; j<row-i*2; j++){
            cout<<" ";
        }
        //stars
        for(int j=0; j<i; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

void pattern13(int row) {
    for(int i=1; i<=row/2; i++) {
        //stars
        for(int j=0; j<i; j++){
            cout<<"*";
        }
        //space
        for(int j=0; j<row-(2*i); j++){
            cout<<" ";
        }
        //stars
        for(int j=0; j<i; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=row/2-1; i>0; i--) {
        //stars
        for(int j=0; j<i; j++){
            cout<<"*";
        }
        //space
        for(int j=0; j<row-(i*2); j++){
            cout<<" ";
        }
        //stars
        for(int j=0; j<i; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

void pattern14(int row) {
    for(int i=0; i<row; i++) {
        for(int j=0; j<row; j++) {
            if(i==0 || i==row-1 || j==0 || j==row-1) {
                cout<<"*";
            }else {
                cout<<" ";
            }
        }
        cout<<endl;
    }
}

void pattern15(int row) {
    for(int i=0; i<2*row-1; i++) {
        for(int j=0; j<2*row-1; j++) {
            int top = i;
            int left = j;
            int right = (2*row - 2) - j;
            int bottom = (2*row - 2) - i;
            cout<<(row - min(min(top, bottom), min(left, right)));
        }
        cout<<endl;
    }
}

int main() {
    int row;
    cin>>row;
    // pattern1(row);
    // pattern2(row);
    // pattern3(row);
    // patttern4(row);
    // pattern5(row);
    // pattern6(row);
    // pattern7(row);
    // pattern8(row);
    // pattern9(row);
    // pattern10(row);
    // pattern11(row);
    // pattern12(row);
    // pattern13(row);
    // pattern14(row);
    pattern15(row);
}