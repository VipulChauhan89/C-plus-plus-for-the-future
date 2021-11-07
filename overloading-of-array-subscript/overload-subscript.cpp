#include <iostream>
using namespace std;
const int SIZE = 10;
class array
{
   private:
      int arr[SIZE];
   public:
      array() 
      {
         register int i;
         for(i=0;i<SIZE;i++) 
         {
           arr[i]=i;
         }
      }
      int &operator[](int i) 
      {
         if(i>SIZE) 
         {
            cout<<"Index out of bounds"<<endl; 
            // return first element.
            return arr[0];
         }
         return arr[i];
      }
};
int main() 
{
   array A;
   cout<<"Value of A[3] : "<<A[3]<<endl;
   cout<<"Value of A[6] : "<<A[6]<<endl;
   cout<<"Value of A[14] : "<<A[14]<<endl;
   return 0;
}
