#include <iostream>
#include "MyUtils.h"

using namespace std;

int main()
{

    WorkClass<A> a;
    a.func();

    WorkClass<B> b;
    b.func();

    cout << "Finished." << endl;

    // Don't change the following
    system("pause");
    return 0;
}
