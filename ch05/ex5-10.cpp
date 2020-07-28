#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    unsigned aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0;
    char c;
    while (cin >> c)
    {
        switch (c)
        {
        case 'a':
        case 'A':
            ++aCnt;
            break;
        case 'e':
        case 'E':
            ++eCnt;
            break;
        case 'i':
        case 'I':
            ++iCnt;
            break;
        case 'o':
        case 'O':
            ++oCnt;
            break;
        case 'u':
        case 'U':
            ++uCnt;
            break;
        }
    }
    cout << "a | A: " << aCnt << endl
         << "e | E: " << eCnt << endl
         << "i | I: " << iCnt << endl
         << "o | O: " << oCnt << endl
         << "u | U: " << uCnt << endl;

    return 0;
}
