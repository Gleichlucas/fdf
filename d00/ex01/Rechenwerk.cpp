#include <iostream>

using namespace std;
int main(void)
{
    cout << "gib op" << endl;
    char op;
    cin >> op;

while (op != 'x')
{
    int a;
    int b;
    cout << "gib zahl" << endl;
    cin >> a;
    cout << "gib zahl" << endl;
    cin >> b;
    int c;
  switch(op)
  {
    case '+' : c = a + b; cout << c; break;
    case '-' : c = a - b; cout << c; break;
    case '*' : c = a * b; cout << c; break;
    case '/' : if (b != 0) c = a / b; else cout << "ungluetig" << endl; break;
    case 'x' : return (0);
    default : cout << "ungluetig" << endl;
  }
  cout << "gib op" << endl;
  cin >> op;
}
    return (0);
}
