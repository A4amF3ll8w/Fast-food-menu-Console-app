#include <iostream>
#include<iomanip>
using namespace std;

int main()

{
	char choice = 0;

	do {

		cout << "Please Choose From The Following (1-4):";
		cout << endl;
		cout << "1. Chick-Fil-A\n";
		cout << "2. Dairy Queen\n";
		cout << "3. Starbucks\n";
		cout << "9. Exit        \n\n";
		cout << "Please Select a Number :";
		cin >> choice;


	} while (choice != '1' && choice != '2' && choice != '3' && choice != '9');

	switch (choice)
	{
	case '1':

		{
			char con = 'y';
			char choice = ' ';
			float  m1 = 6.50, m2 = 3.45, m3 = 1.99, m4 = 3.50, m5 = 2.50, tx = .0825;
			double bill = 0;

			do {


				cout << "Welcome to Chick-Fil-A, how may we serve you Today?";
				cout << endl;
				cout << "1. Chicken Sandwich Combo      $6.50\n";
				cout << "2. Grilled Chicken Wrap	       $3.45\n";
				cout << "3. Large Sweet Tea             $1.99\n";
				cout << "4. Chicken Nugget Combo        $3.50\n";
				cout << "5. Spicy Chicken Sandwich      $2.50\n";
				cout << "9. Exit                  \n\n";
				cout << "Would you like to place an order (y/n)?" << endl;
				cin >> con;

				while (con == 'y')
				{
					cout << " Please choose an item 1-5 (9 to exit)" << endl;
					cin >> choice;

					if (choice == '1')
					{

						cout << "$" << m1 << endl;
						bill = bill + m1;

					}
					else if (choice == '2')
					{
						cout << "$" << m2 << endl;
						bill = bill + m2;

					}
					else if (choice == '3')
					{
						cout << "$" << m3 << endl;
						bill = bill + m3;

					}
					else if (choice == '4')
					{
						cout << "$" << m4 << endl;
						bill = bill + m4;

					}
					else if (choice == '5')
					{

						cout << "$" << m4 << endl;
						bill = bill + m5;

					}
					else if (choice == '9')
					{
						cout << "";

					}
					cout << " Would you like any additional orders (y/n)?" << endl;
					cin >> con;
					if (con == 'n')
					{
						bill == (bill * tx);
						cout << " That will be $" << bill << endl;
					}

				}

			} while (con == 'y');
			return 0;
		}
	break;
	{
	case '2':
	{
		char con = 'y';
		char choice = ' ';
		float  m1 = 4.75, m2 = 5.75, m3 = 4.50, m4 = 5.99, m5 = 6.99, tx = .0825;
		double bill = 0;

		do {


			cout << "Welcome to Dairy Queen, how may we serve you Today?";
			cout << endl;
			cout << "1. Steak Finger Basket    $4.75\n";
			cout << "2. Chicken Finger Basket  $5.75\n";
			cout << "3. Ultimate Chicken Grill $4.50\n";
			cout << "4. Single Mushroom Melt   $5.99\n";
			cout << "5. Shrimp Supreme	  $6.99\n";
			cout << "9. Exit                  \n\n";
			cout << "Would you like to place an order (y/n)?" << endl;
			cin >> con;

			while (con == 'y')
			{
				cout << " Please choose an item 1-5 (9 to exit)" << endl;
				cin >> choice;

				if (choice == '1')
				{

					cout << "$" << m1 << endl;
					bill = bill + m1;

				}
				else if (choice == '2')
				{
					cout << "$" << m2 << endl;
					bill = bill + m2;

				}
				else if (choice == '3')
				{
					cout << "$" << m3 << endl;
					bill = bill + m3;

				}
				else if (choice == '4')
				{
					cout << "$" << m4 << endl;
					bill = bill + m4;

				}
				else if (choice == '5')
				{

					cout << "$" << m4 << endl;
					bill = bill + m5;

				}
				else if (choice == '9')
				{
					cout << "";

				}
				cout << " Would you like any additional orders (y/n)?" << endl;
				cin >> con;
				if (con == 'n')
				{
					bill == (bill * tx);
					cout << " That will be $" << bill << endl;
				}

			}

		} while (con == 'y');
		return 0;
	}
	break;
	{
	case'3':
	{
		char con = 'y';
		char choice = ' ';
		float  m1 = 1.50, m2 = 2.00, m3 = 2.00, m4 = 2.25, m5 = 1.50, tx = .0825;
		double bill = 0;

		do {

			cout << "Welcome to Starbucks, how may we serve you Today?";
			cout << endl;
			cout << "1. Vanilla Latte     $1.50\n";
			cout << "2. Cappuccino        $2.00\n";
			cout << "3. Cinnnamon Latte   $2.00\n";
			cout << "4. Frappuccino       $2.25\n";
			cout << "5. Black Coffee	  $1.50\n";
			cout << "9. Exit                  \n\n";
			cout << "Would you like to place an order (y/n)?" << endl;
			cin >> con;

			while (con == 'y')
			{
				cout << " Please choose an item 1-5 (9 to exit)" << endl;
				cin >> choice;

				if (choice == '1')
				{

					cout << "$" << m1 << endl;
					bill = bill + m1;

				}
				else if (choice == '2')
				{
					cout << "$" << m2 << endl;
					bill = bill + m2;

				}
				else if (choice == '3')
				{
					cout << "$" << m3 << endl;
					bill = bill + m3;

				}
				else if (choice == '4')
				{
					cout << "$" << m4 << endl;
					bill = bill + m4;

				}
				else if (choice == '5')
				{

					cout << "$" << m4 << endl;
					bill = bill + m5;

				}
				else if (choice == '9')
				{
					cout << "";

				}
				cout << " Would you like any additional orders (y/n)?" << endl;
				cin >> con;
				if (con == 'n')
				{
					bill == (bill * tx);
					cout << " That will be $" << bill << endl;
				}

			}

		} while (con == 'y');
		return 0;
	}
	}
	}
	}
}