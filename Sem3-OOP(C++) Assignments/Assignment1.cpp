#include <iostream>
using namespace std;


// class
class Bank {
private:
    int acno;
    char name[30];
    long balance;
    char actype[40];

public:
    void OpenAccount()
    {
	cout << "Enter Account Number:" ;
	cin >> acno;
	cout << "Enter Name:" ;
	cin >> name;
	cout << "Enter Account Type:" ;
	cin >> actype;

	cout << "Enter  Balance:" ;
	cin >> balance;

    }
    void ShowAccount()
    {
	cout << "Account Number:"  << acno << endl;
	cout << "Name: " << name << endl;
	cout << "Account Type : " << actype << endl;
	cout << "Balance:" << balance << endl;
    }
     void Deposit()
    {
	long amt;
	cout << "Enter Amount U want to deposit?" ;
	cin >> amt;
	balance = balance + amt;
	cout << "Balance ="<<balance << endl;
    }
    void Withdrawal()
    {
	long amt;
	cout << "Enter Amount U want to withdraw? ";
	cin >> amt;
	if (amt <= balance)
	{
	    balance = balance-amt;
	    cout<<"Balance ="<<balance;
	}
	else
	{
	    cout << "Less Balance"<< endl;
	}
    }
    int Search(int);
};

int Bank::Search(int a)
{
    if (acno == a) {
	ShowAccount();
	return (1);
    }
    return (0);
}

// main code
int main()
{
    Bank C[20];

    int found = 0, a, ch, i,n;


    do {
	// display options
	cout <<" \n\n1:Open Account\n2:Display All\n3:By Account No\n4:Deposit\n5:Withdraw\n6:Exit"<< endl;

	// user input
	cout << "Please input your choice: ";
	cin >> ch;

	switch (ch) {
	case 1:
	cout<<"Enter total number of customer ";
	cin>>n;
    for (i = 0; i <n; i++) {
	C[i].OpenAccount();
    }
	break;
	case 2: // displating account info
	    for (i= 0; i< n; i++) {
		C[i].ShowAccount();
	    }
	    break;
	case 3: // searching the record
	    cout <<" Account Number?" ;
	    cin >> a;
	    for (i= 0; i < n; i++) {
		found = C[i].Search(a);
		if (found)
		    break;
	    }
	    if (!found)
		cout << "Record Not Found" << endl;
	    break;
	case 4: // deposit operation
	    cout <<" Account Number To Deposit Amount?";
	    cin >> a;
	    for (i = 0; i < n; i++) {
		found = C[i].Search(a);
		if (found) {
		    C[i].Deposit();
		    break;
		}
	    }
	    if (!found)
		cout <<" Record Not Found" << endl;
	    break;
	case 5: // withdraw operation
	    cout << "Account Number To Withdraw Amount? ";
	    cin >> a;
	    for (i= 0; i < n; i++) {
		found = C[i].Search(a);
		if (found) {
		    C[i].Withdrawal();
		    break;
		}
	    }
	    if (!found)
		cout <<" Record Not Found" << endl;
	    break;
	case 6: // exit
	    cout << "Have a nice day " << endl;
	    break;
	default:
	    cout <<" Wrong Option" << endl;
	}
    } while (ch != 6);
    return 0;
}
