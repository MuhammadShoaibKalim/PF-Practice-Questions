#include <iostream>
using namespace std;
int main()
{
 int n = 4, k = 2;

 cout << ++n << endl;    //5
 cout << n << endl;     //5
 cout << n++ << endl; //5
 cout << n << endl;   //6 q k increment ho gai h aur ab ye print hi kar dy ga.
 cout << -n << endl;  // -(6)=-6
 cout << n << endl; //6

 cout << --n << endl; //minus aur print bhe dono aik sath kar dy ga. //5
 cout << n << endl;  //5

 cout << n-- << endl;  // minus hi kar ga // 5
 cout << n << endl;  //4

 cout << n + k << endl; // 4 + 2 =6
 cout << n << endl;    //4
 cout << k << endl; //   6
 cout << n << k << endl; // 4  //6
 cout << n << endl; //4
 cout << " " << n << endl; // " "  new line 4
 cout << " n" << endl; // " n "
 cout << "\n" << endl; // new line
 cout << " n * n = "; //CAREFUL! " n * n = "
 cout << n * n << endl;  //16
 cout << 'n' << endl; // ' n  '

 return 0;
}