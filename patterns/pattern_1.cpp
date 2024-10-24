#include<bits/stdc++.h>
using namespace std;

void pattern_one(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout << " * ";
        }
        cout << endl;
    }
}

void pattern_two(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<i+1; j++){
            cout << " * ";
        }
        cout << endl;
    }
}

void pattern_three(int n){
    for(int i=0; i<n; i++){
        for(int j=1; j<=i+1; j++){
            cout << j << " ";
        }
        cout << endl;
    }
}

void pattern_four(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<i+1; j++){
            cout << i << " ";
        }
        cout << endl;
    }
}

void pattern_five(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i; j++){
            cout << " * ";
        }
        cout << endl;
    }
}

void pattern_six(int n){
    for(int i=0; i<n; i++){
        for(int j=1; j<=n-i; j++){
            cout << j << " ";
        }
        cout << endl;
    }
}

void pattern_seven(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i-1; j++){
            cout << " ";
        }
        for(int k=0; k<((2*i) + 1); k++){
            cout << "*";
        }

        for(int l=0; l<n-i-1; l++){
            cout << " ";
        }

        cout << endl;
    }
}

void pattern_eight(int n){
    for(int i=0; i<n; i++){

        for(int j=0; j<i; j++){
            cout << " ";
        }

        for(int j=0; j<(2*n - ((2*i) + 1)); j++){
            cout << "*";
        }

        for(int j=0; j<i; j++){
            cout << " ";
        }


        cout << endl;
    }
}

void pattern_nine(int n){
        
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i-1; j++){
            cout << " ";
        }
        for(int k=0; k<((2*i) + 1); k++){
            cout << "*";
        }

        for(int l=0; l<n-i-1; l++){
            cout << " ";
        }

        cout << endl;
    }

    for(int i=0; i<n; i++){

        for(int j=0; j<i; j++){
            cout << " ";
        }

        for(int j=0; j<(2*n - ((2*i) + 1)); j++){
            cout << "*";
        }

        for(int j=0; j<i; j++){
            cout << " ";
        }


        cout << endl;
    }
}



int main(void){
    int a;
    cin >> a;
    // pattern_one(a);
    // pattern_two(a);
    // pattern_three(a);
    // pattern_four(a);
    // pattern_five(a);
    // pattern_six(a);
    // pattern_seven(a);
    // pattern_eight(a);
    pattern_nine(a);
}