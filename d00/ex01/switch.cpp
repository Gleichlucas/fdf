#include <iostream>

using namespace std;

int main()
{
    int tag = 2;

  switch(tag)
  {
     case 0 :
        cout << "Montag" << endl;
        break;
    case 1 :
        cout << "Dienstag" << endl;
         break;
         case 2 :
        cout << "Mittwoch" << endl;
        break;
     default :
        cout << "Ungueltiger Wert fuer Tag" << endl;
  }

return (0);
}
