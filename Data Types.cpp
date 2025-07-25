//NAME: Ratnesh Kumar
//PRN: 24070123083
//Experiment-2

#include<iostream>
#include<string>
using namespace std;

int main() {
    int a;
    cout<<"Enter any integer: ";
    cin>>a;
    cout<<"Integer = "<<a<<" and size is "<<sizeof(a)<<" bytes"<<endl;

    float b;
    cout<<"Enter any number with decimal: ";
    cin>>b;
    cout<<"Float = "<<b<<" and size is "<<sizeof(b)<<" bytes"<<endl;

    string c;
    cout<<"Enter any word: ";
    cin>>c;
    cout<<"Srting = "<<c<<" and size is "<<sizeof(c)<<" bytes"<<endl;

    double d;
    cout<<"Enter any number with bigger decimal: ";
    cin>>b;
    cout<<"Double = "<<d<<" and size is "<<sizeof(d)<<" bytes"<<endl;

    char e;
    cout<<"Enter any character: ";
    cin>>e;
    cout<<"Character = "<<e<<" and size is "<<sizeof(e)<<" bytes"<<endl;

    bool f;
    cout<<"Enter True/False: ";
    cin>>boolalpha;
    cin>>f;
    cout<<"Boolean = "<<f<<" and size is "<<sizeof(f)<<" bytes"<<endl;
    
    return 0;
}

OUTPUT
Enter any integer: 111
Integer = 111 and size is 4 bytes
Enter any number with decimal: 11.12
Float = 11.12 and size is 4 bytes
Enter any word: hello
Srting = hello and size is 32 bytes
Enter any number with bigger decimal: 3.1415926
Double = 7.87263e-85 and size is 8 bytes
Enter any character: #
Character = # and size is 1 bytes
Enter True/False: True
Boolean = 0 and size is 1 bytes

=== Code Execution Successful ===
