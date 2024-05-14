

#include <iostream>
using namespace std;


int main(){
setlocale(LC_ALL,"RU");
/*
    int a, s, d;
    cin >> a >> s;
    if (s <= 0) {
        cout << "net \n";

    }
    else {
        d = a / s;
        cout << d;
    }

    
    float a, s, d;
    cin >> a >> s;
    d = 3.14 * a - s;
    cout << d;

    float a, s, d, f,g;
    cin >> a >> s >> d;
    if (d == 1) {
        f = a + s;
        cout << f << endl;
    }
    if (d == 2 ) {
        f = 1/ (1 / a + 1 / s);
        cout << f;
    }
    
    float a, s, d;
    cin >> a;
    if (a >= 0) {

        d = (a / 100)*20;
        s = a - d;
        cout << s <<"fdjgdjgdjdr"<< endl;
    }
    else {
        cout << a;
    }
    
    float  d,f;
    int a, s;
    cin >> a >> s;
   // d = a * 1.84;
    if (s <= 5) {
        d = a * 2.30;
        cout << d << endl;
    }
    else {
        d = a * 2.30;
        f = (d / 100) * 20;
        cout << d-f;
    }

    
    
int a, d, f,s;
cin >> a ;
if (a <= 1000) {
    d = (a / 100) * 3;
    s = a - d;
    cout << s << " 3% skidka \n";
}
else if (a >= 1000) {
    f = (a / 100) * 5;
    s = a - f;
    cout << s << " 5% skidka \n";
}


int a;
cin >> a;
if (a == 1703) {
    cout << "pravilno \n"<<a;
}
else {
    cout << "ne pravilno"<<a;
}

int a;
cout << " D.T \n Y.M \n K.R \n";
cin >> a;
if (a == 3) {
    cout << "pravilno \n";
}
else {
    cout << "ne pravilno!";
}

int a, s;
cin >> a >> s;
if (a < s) {
    cout << a << "menshe" << s;
}
if (a == s) {
    cout << a << "ravno" << s;
}
else {
    cout << a << "bolse" << s;
}
int a, s, d, f;
cin >> a >> s >> f;
d = a * s;
if (f == d) {
    cout << "pravilno " << d;
}
else {
    cout << "ne pravilno";

}
int a;
cin >> a;
if (a %2== 0) {
    cout << "chetnoe chislo";
}
else {
    cout << "nechetnoe chislo";
}

int a;
cin >> a;
if (a % 3 == 0) {
    cout << "chislo delitsa na 3";
}
else {
    cout << "chislo nedelitsa na 3";
}
*/
int a, s, d;
cout << "ves rost \n";
cin >> a >> s;
d = a - 100;
a = d - s;
if (d == s) {
    cout << "vash optimalnii ves" << a;
}
else if (d > s) {
    cout << "ne hvatka vesa " << a;
}
else {
    cout << "lishnii  vesa " << a;
}


    return 0;
}


