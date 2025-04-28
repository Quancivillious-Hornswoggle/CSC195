#include <iostream>
#include <string>

using namespace std;

void Write(string text, ostream& ostream = cout)
{
	ostream << text;
}

int main()
{
    string text = "Hello World\n";
    cout << text;

	getline(cin, text);
    cout << text << endl;

	Write(text);
}