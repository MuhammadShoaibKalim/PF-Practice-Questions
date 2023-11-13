#include<iostream>
using namespace std;

int main (){
      
      int n;
      cin>>n;

      int row=1;
      while(row<=n)
      {
        int col=1;    //colum k liy
          while(col<=row)
          {
             cout<<"*";
             col++;
          }
          cout<< endl;
          row++;
      }

    return 0;
}