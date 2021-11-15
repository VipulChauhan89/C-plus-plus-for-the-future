/*
  c++ code to overload cin and cout operators.
*/
#include<iostream>
using namespace std;
class student
{
  private:
    int roll_number;
  public:
    friend void operator >>(istream &in,student &s)
    {
      in>>s.roll_number;
    }
    friend void operator <<(ostream &out,student &s)
    {
        out<<s.roll_number<<endl;
    }
};
int main()
{
  student s;
  cout<<"Enter the rolnumber of the student : ";
  cin>>s;
  cout<<"The rollnumber of the student is = ";
  cout<<s;
  return 0;
}
