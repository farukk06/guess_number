#include <iostream>
#include <ctime>

using namespace std;

int main()
{
	while(true)
	{
		srand(time(NULL));

		int number, enumber;
		char decision;
		number = rand() % 100 + 1;

		cout << "********************  GUESS NUMBER  ********************\n\n\n";

		cout << "Do you want to play (Y/N) ? : ";
		cin >> decision;
		cout << endl;

		while (true)
		{
			if (decision == 'Y')
			{
				break;
			}
			else if (decision == 'N')
			{
				cout << endl << "Goodbye..." << endl;
				return 0;
			}
			else
			{
				cout << "Please choose Y/N!!!!" << endl << endl;
				cout << "Do you want to play (Y/N) ? : ";
				cin >> decision;
				cout << endl;
			}

		}
		
		cout << "Please enter a number: " ;
		cin >> enumber;

		while (true)
		{
			if (enumber == number)
			{
				cout << "Congratualtions...";
				cout << endl << endl;
				break;
			}
			else if (enumber < number)
			{
				cout << "Please choose a number bigger than this!!!" << endl << endl;
				cout << "Please enter a number: ";
				cin >> enumber;
			}
			else
			{
				cout << "Please choose a number smaller than this!!!" << endl << endl;
				cout << "Please enter a number: ";
				cin >> enumber;
			}

		}
		
		cout << "Do you want to play again (Y/N) ? : ";
		cin >> decision;
		cout << endl;
		
		while (true)
		{
			if (decision == 'Y')
			{
				break;
			}
			else if (decision == 'N')
			{
				cout << endl << "Goodbye..." << endl;
				return 0;
			}
			else
			{
				cout << "Please choose Y/N!!!!" << endl << endl;
				cout << "Do you want to play again (Y/N) ? : ";
				cin >> decision;
				cout << endl;
			}

		}

	}

}