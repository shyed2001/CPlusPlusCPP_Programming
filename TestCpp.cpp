/*author/owner :== Shyed Shahriar Housaini
License :== MIT + terms and conditions of author/owner
Copyright :== author/owner*/

#include <iostream>

using namespace std;

int main(void)

{

    int num1, num2, num3;
    int sum;

    cout<<"Please enter three numbers for sum."; /// Line not ended.

    cout<<"Please enter three numbers separated by space:"<<endl; /// Line ends.

    cin>>num1>>num2;
    cin>>num3;
    sum = num1 + num2 + num3;

    cout<<"num1 + num2 + num3 = sum"<<endl;

    cout<<num1<<" + "<<num2<<" + " << num3<< " = "<<sum<<endl;

    return 0;

}
/// Shortcut in Code::Blocks
/// SourceCode Formatter -  Ctrl+Alt+i
/// line comment  Ctrl+Shift+C
/// Abbreviations Ctrl+j
/// open new file  Ctrl+Shift+n
