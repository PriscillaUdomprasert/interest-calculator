#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    cout << "Interest Calculator" << endl << endl;

    const int size = 10;
    double loan_amount[size];
    double int_rate[size];
    double interest_amt[size];

    int i = 0;
    double loan = 0.0;
    double interest_rate = 0.0;
    
    char choice = 'y';

    do
    {
       
            cout << "Enter loan amount: ";
            cin >> loan;
            loan_amount[i] = loan;


            cout << "Enter interest rate: ";
            cin >> interest_rate;
            int_rate[i] = interest_rate;
        
        

        double total = loan * (interest_rate / 100);
        interest_amt[i] = total;
        i++;

        cout << "Interest amount: "  << setprecision (2) << fixed  << total << endl;

        cout << "\nPress y to continue or another letter to quit: ";
        cin >> choice;

        if (choice != 'y')
        {
            break;
        }     
       
    }
    while (choice == 'y');

    cout << setw(12) << "AMOUNT" << setw(12) << "RATE" << setw(12) << "INTEREST" << endl;

    for (int j = 0; j < i; j++)
    {
        cout << setprecision (2) << fixed << setw(12) << loan_amount[j] << setw(12) << setprecision (3) << fixed << int_rate[j] << setprecision (2) << fixed << setw(12) << interest_amt[j]
            << endl;
    }

    cout << "\nBye!" << endl;
}

