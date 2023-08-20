#include<iostream>
#include<cstring>
using namespace std;

void sprintf_snprintf() {
    
    // SPRINTF ----------------------------------------------------------------
    int X = 11;
    double Y = 1.123;
    char buff_str[100];
    
    printf("X = %d, Y = %lf\n", X, Y); // GETTING THIS STRING IN VARIABLE
    sprintf(buff_str, "X = %d, Y = %lf", X, Y);
    
    // IF YOU DO THIS, IT WILL BE SAME
    int count = sprintf(buff_str, "X = %d, Y = %lf", X, Y);
    cout << "number of characters in buff_str: " << count << endl;
    cout << buff_str << endl;
    
    char intro[100];
    char fname[] = "JAIMIN";
    char lname[] = "CHOKHAWALA";
    int lng = 3;
    int len = sprintf(intro, "%s %s knows %d programming languages", fname, lname, lng);
    cout << intro << endl;
    cout << "length of intro: " << len << endl;
    
    // SNPRINTF ---------------------------------------------------------------
    char introp[10];
    snprintf(introp, 10, "ABCEDCDKSNVSVVKMVSV");
    cout << introp << endl; // ONLY FIRST 10 CHARS
    
}

void using_sscanf() {
    char str[] = "Jaimin 20 C++";
    char name[20];
    int age;
    char lang[5];
    // extracting information
    sscanf(str, "%s %d %s", name, &age, lang);
    cout << name << " at age " << age << " knows " << lang << endl;
    
    char data[] = "Name: Bob Age: 16: weight: 50.12";
    char fn[10];
    int age_;
    double weight;
    sscanf(data, "%*s %s %*s %d %*s %lf", fn, &age_, &weight); // %*s MEANS IGNORE
    printf("Name: %s\n", fn);
    printf("Age: %d\n", age_);
    printf("weight: %lf\n", weight);
}
// main -----------------------------------------------------------
int main(int argc, char **argv) {
    // sprintf_snprintf();
    using_sscanf();
    
    

    return 0;
}
//-----------------------------------------------------------------