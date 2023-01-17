#include <iostream>
#include <string>
using namespace std;

void encrypt(string encode)
{
    int  i = 0, count;
    while (i < encode.length())
    {
        count = 0;
        cout << encode[i];
        while (encode[i] == encode[i + count])
        {
            count++;
        }
        i += count;
        cout << count;
    }
    cout << endl;
}
void decrypt(string decode)
{
    int i = 1, count;
    while (i < decode.length())
    {
        string str = string(1, decode[i]);
        count = stoi(str);
        while (count != 0)
        {
            cout << decode[i - 1];
            count--;
        }
        i += 2;
    }
}
int main()
{
    string encode;
    cout << "Input text";
    cin >> encode;
    encrypt(encode);

    string decode;
    cout << "Input text";
    cin >> decode;
    decrypt(decode);
}
