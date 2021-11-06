#include<iostream>
using namespace std;
class oob{
public:
    string name;
    int Id;
    float CGPA;
    void test(){
        cout <<"Enter Your Name :";
        cin >>name;
        cout <<"Enter Your Id NO :";
        cin >>Id;
        cout<<"Enter Your CGPA :";
        cin >>CGPA;
        cout <<"\n";
        cout <<"MY name is :" <<name<<endl;
        cout <<"My Id is :"<<Id<<endl;
        cout <<"MY CGPA :"<<CGPA<<endl;


    }
};
int main (){
    oob n1;
    n1.test();

  return 0;
}
