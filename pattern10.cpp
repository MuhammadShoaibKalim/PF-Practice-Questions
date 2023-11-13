// 1
// 23
// 456
// 78910    this is the pattern.


#include<iostream>
using namespace std;

int main (){
      
      int n;
      cin>>n;

      int row=1;
      while(row<=n)
      {
        int col=1;    //colum k liy
          while(col<=n)
          {
            char ch='A'+col-1;
            cout<< ch;
            col= col +1;
          }
          cout<< endl;
          row++;
      }

    return 0;
}