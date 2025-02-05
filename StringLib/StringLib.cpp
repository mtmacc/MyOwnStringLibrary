#include <iostream>
#include "MyOwnStringLib.h"
using namespace std;
int main()
{

	//cout << MyOwnStringLib::CounterLetter("mahmoud", 'm') << endl;
	//cout << MyOwnStringLib::ReverseWord("mahmoud") << endl;
	//cout << MyOwnStringLib::toUpper("MaHmOuD");
	//cout << MyOwnStringLib::toLower("MaHmOuD");
	//cout << MyOwnStringLib::trim("####mahmoud####", "all", '#');
	//vector <string> str = MyOwnStringLib::split("ahmed,mahmoud,mohamed,ali,taha", ",");
	//cout << MyOwnStringLib::isEmpty("");
	//cout << MyOwnStringLib::findSubstring("mahmoud", "mou");
	//cout << MyOwnStringLib::ReplaceWordInStr("mahmoud taha mohamed", "ahmed", "mahmoud", false);
	//cout << MyOwnStringLib::WordsCounter("mahmoud taha mohamed", ' ');
	//MyOwnStringLib str1("mahmoud taha mohamed ali");
	cout << MyOwnStringLib::UpperFirstLetterOfEachWord("mahmoud taha mohamed ali");
	return 0;
}


