/* Author: Stewart Moon
Class: CSC 223-100
Professor: Jeffrey Howard
Due Date: 10/24/2017
Page & Problem #: Page 324, #5
Description: This program imitates a princess selecting a Prince.  The princess eliminates a 3rd prince every time in the row
untill there is none left.
*/

#include <iostream>
#include <string>
#include <iomanip>
#include <vector>

using namespace std;

class Suitors
{
public:
	void Suitors::ElimnatesSuitors();

	vector<int> SuitorList{ 1,2,3,4,5,6,7,8,9,10 };
};


int main()
{
	Suitors Suitor;

	//cout << "Hello and Welcome to Partner Program from Chapter 7."<<endl;


	Suitor.ElimnatesSuitors();


	return 0;
}


void Suitors::ElimnatesSuitors()
{
	//Declare variables
	int count = 0;

	//Print out initial list of Suitors
	for (int j = 0; j < SuitorList.size(); j++)
	{
		cout << SuitorList[j];
	}
	cout << endl;//Empty Space

	//Logic for Elminiating Suitor
	for (int i = 0; i < SuitorList.size(); i++)
	{
		count++;
		cout << i << endl;

		if (count == 3)
		{
			cout << SuitorList[i] << endl;
			SuitorList.erase(SuitorList.begin() + i);
			count = 0;
			i--;

			for (int j = 0; j < SuitorList.size(); j++)
			{
				cout << SuitorList[j];
			}
			cout << endl;
			
		}
		else if (i == SuitorList.size())
		{
			i = 0;
		}
	}

}
