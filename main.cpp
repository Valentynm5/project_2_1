#include <iostream>
using namespace std;

int main()
{
    char cRate;
    cout << "Input your char-rate\n";
    cin >> cRate;
    switch (cRate)
    {
        case 'A' :
        case 'a' :
             cout << "Your rate is 5\n";
             break;
        case 'B' :
        case 'b' :
            cout << "Your rate is 4\n";
            break;
        case 'C' :
        case 'c' :
            cout << "Your rate is 3\n";
            break;
        case 'D' :
        case 'd' :
            cout << "Your rate is 2\n";

            break;
        default:
            cout << "This rate isn't correct\n";
    }
}