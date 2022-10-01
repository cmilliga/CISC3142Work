#include <iostream>
using namespace std;

int main(){
    cout << "Bool size: " << sizeof(bool) << " byte" << endl;
    cout << "Char size: " << sizeof(char) << " byte" << endl;
    cout << "Int size: " << sizeof(int) << " bytes" << endl;
    cout << "Wide character size: " << sizeof(wchar_t) << " bytes" << endl;
    cout << "Unicode character size: " << sizeof(char16_t) << " bytes" << endl;
    cout << "Unicode character (32 bit) size: " << sizeof(char32_t) << " bytes" << endl;
    cout << "Short size: " << sizeof(short) << " bytes" << endl;
    cout << "Long size: " << sizeof(long) << " bytes" << endl;
    cout << "Long Long size: " << sizeof(long long) << " bytes" << endl;
    cout << "Float size: " << sizeof(float) << " bytes" << endl;
    cout << "Double size: " << sizeof(double) << " bytes" << endl;
    cout << "Long Double size: " << sizeof(long double) << " bytes" << endl;

}
