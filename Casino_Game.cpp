//add a place to check for wallet balance
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void maker()
{
	cout << "\t=============================\n"
    	 << "\t    MADE BY ~BLACK-KING"     << endl 
		 << "\t  FOR ALL YOU BORED SHITS"  << endl
    	 << "\t=============================\n";
    sleep(3);
}

int main()
{
	maker();
	char ans;
		string ans1;
		int wallet = 15;
		cout << "\n\tWELCOME TO THE WORLD OF GAMBLING" << endl 
			 << "\n\tARE YOU READY TO START???" << endl
			 <<"\n\tY/N ----> ";
		cin >> ans;
		char crun;	
	
	if (ans == 'y' || ans == 'Y')
	{
		system("cls");
		cout << "\n\tIN THIS GAME THE COMPUTER RANDOMLY GENERATES A NUMBER." << endl 
		 	 << "\n\tYOU ARE TO CORRECTLY GUESS THAT NUMBER.\n" << endl
			 << "\n\tWITH THAT SAID, IF ARE YOU READY TO START" << endl
			 << "\n\tPRESS ENTER TO CONTINUE!!!";
		cin.ignore();
		cin.get();
		
		do
		{
			system("cls");
			
			cout << "\n\tYOU CURRENTLY HAVE $" << wallet << endl 
				 << "\tTHERE ARE THREE DIFFICULTY MODES:" << endl 
			 	 << "\t ---> Easy:   ($1)" << endl 
		 		 << "\t ---> Medium: ($5)" << endl 
				 << "\t ---> Hard:   ($10)" << endl << endl 
				 << "\tWHAT DIFFICULTY WILL YOU BE CHOOSING TODAY: ";
			cin >> ans1;
		
			int cmp; 
			int usr;
		
			if (ans1 == "easy" || ans1 == "Easy" || ans1 == "EASY")
			{
				srand(time(0));
				cmp = (rand() % 10) + 1;
				system("cls");
				
				if (wallet < 1)
				{
					system("cls");
					cout << "\n\n\tYOU HAVE RUN OUT OF LUCK " << endl <<"\tYOUR WALLET BALANCE IS CURRENTLY $" << wallet << endl 
						 << "\n\tTO FUND YOUR ACCOUNT KINDLY WIRE MY AZA" << endl 
						 << "\n\t BANK_NAME: ACCESS BANK NG" << endl
						 << "\t ACCT_NO: 1819949470" << endl
						 << "\t NAME: THE BLACK-KING" << endl
						 <<"\n\t** ALL DONATIONS ARE APPRECIATED **";
					break;
				}
				cout << "\n\tSTARTING EASY I SEE." << endl
					 << "\n\tA WISE CHOICE." << endl
				     << "\n\tYOU ARE TO GUESS A NUMBER BETWEEN 1 - 10" << endl
					 << "\n\tWHAT WILL YOUR CHOICE BE: ";
				cin >> usr;
				
				if (cmp == usr)
				{
					wallet += 1;
					system("cls");
					cout << "COMPUTER CHOSE: " << cmp << endl;
					cout << "YOU CHOSE: " << usr << endl;
					cout << "YOU GUESSED CORRECTLY!!!" << endl 
						 << "YOUR WALLET BALANCE IS CURRENTLY $" << wallet; 
				}
				else 
				{
					wallet -= 1;
					system("cls");
					cout << "COMPUTER CHOSE: " << cmp << endl
						 << "YOU CHOSE: " << usr << endl
						 << "YOU GUESSED WRONGLY!!!" << endl 
						 << "YOUR WALLET BALANCE IS CURRENTLY $" << wallet; 
				}
				cout<<"\n\nDo you want to play again?(y/n) --->";
				cin>> crun;
			}
			
			else if (ans1 == "medium" || ans1 == "Medium" || ans1 == "MEDIUM")
			{
				srand(time(0));
				cmp = (rand() % 50) + 1;
				system("cls");
				if (wallet < 5)
				{
					system("cls");
					cout << "\n\n\tYOU HAVE RUN OUT OF LUCK " << endl <<"\tYOUR WALLET BALANCE IS CURRENTLY $" << wallet << endl 
						 << "\n\tTO FUND YOUR ACCOUNT KINDLY WIRE MY AZA" << endl 
						 << "\n\t BANK_NAME: ACCESS BANK NG" << endl
						 << "\t ACCT_NO: 1819949470" << endl
						 << "\t NAME: THE BLACK-KING" << endl
						 <<"\n\t** ALL DONATIONS ARE APPRECIATED **";
					break;
				}
				cout << "\n\tOHH MEDIUM," << endl 
					 << "\n\tI WONDER HOW THIS WILL PLAY OUT." << endl
				     << "\n\tYOU ARE TO GUESS A NUMBER BETWEEN 1 - 50" << endl
					 << "\n\tWHAT WILL YOUR CHOICE BE: ";
				cin >> usr;
				
				if (cmp == usr)
				{
					wallet +=5;
					system("cls");
					cout << "COMPUTER CHOSE: " << cmp << endl;
					cout << "YOU CHOSE: " << usr << endl;
					cout << "YOU GUESSED CORRECTLY!!!" << endl 
						 << "YOUR WALLET BALANCE IS CURRENTLY $" << wallet; 
				}
				else 
				{
					wallet -= 5;
					system("cls");
					cout << "COMPUTER CHOSE: " << cmp << endl
						 << "YOU CHOSE: " << usr << endl
						 << "YOU GUESSED WRONGLY!!!" << endl 
						 << "YOUR WALLET BALANCE IS CURRENTLY $" << wallet; 
				}
				cout<<"\n\nDo you want to play again?(y/n) --->";
				cin>> crun;
			}
		
		
			else if (ans1 == "hard" || ans1 == "Hard" || ans1 == "HARD")
			{
				srand(time(0));
				cmp = (rand() % 100) + 1;
				system("cls");
				if (wallet < 10)
				{
					system("cls");
					cout << "\n\n\tYOU HAVE RUN OUT OF LUCK " << endl <<"\tYOUR WALLET BALANCE IS CURRENTLY $" << wallet << endl 
						 << "\n\tTO FUND YOUR ACCOUNT KINDLY WIRE MY AZA" << endl 
						 << "\n\t BANK_NAME: ACCESS BANK NG" << endl
						 << "\t ACCT_NO: 1819949470" << endl
						 << "\t NAME: THE BLACK-KING" << endl
						 <<"\n\t** ALL DONATIONS ARE APPRECIATED **";
					break;
				}
				cout << "\n\tWE HAVE A CHALLANGER." << endl 
					 << "\n\tLUCK BE WITH YOU." << endl
				     << "\n\tYOU ARE TO GUESS A NUMBER BETWEEN 1 - 100" << endl
					 << "\n\tWHAT WILL YOUR CHOICE BE: ";
				cin >> usr;
				
				if (cmp == usr)
				{
					wallet += 10;
					system("cls");
					cout << "COMPUTER CHOSE: " << cmp << endl;
					cout << "YOU CHOSE: " << usr << endl;
					cout << "YOU GUESSED CORRECTLY!!!" << endl 
						 << "YOUR WALLET BALANCE IS CURRENTLY $" << wallet; 
				}
				else 
				{
					wallet -= 10;
					system("cls");
					cout << "COMPUTER CHOSE: " << cmp << endl
						 << "YOU CHOSE: " << usr << endl
						 << "YOU GUESSED WRONGLY!!!" << endl 
						 << "YOUR WALLET BALANCE IS CURRENTLY $" << wallet; 
				}
			cout << "\n\nDo you want to play again?(y/n) --->";
			cin >> crun;
		}
		else 
        {
        	system("cls");
            cout << "\n\n\tInvalid choice. Please restart the game.\n";
            sleep(2);
        }
    }
        while (crun == 'y' || crun == 'Y');
        //create end of game cout
	}
	else
	{
		system("cls");
		cout << "\n\n\tYOU WERE NOT BRAVE ENOUGH." << endl << "\tTRY AGAIN LATER!!!";
		sleep(5); 
	}
	return 0;
}