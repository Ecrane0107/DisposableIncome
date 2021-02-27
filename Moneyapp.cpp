// Money App 1 by: Eastland Crane
#include <iostream>
using namespace std;

int main()
{
    float userAnnualsalary;
    float userBillsmonthly;

    cout << "---Disposable Income Calculator---" << endl;
    cout << "Please input your annual salary." << endl;
    cout << "(User tip: Please input numbers only.)" << endl;
    cout << "Annual Salary $";
    cin >> userAnnualsalary;
    cout << "Your annual salary is $" << userAnnualsalary << endl;
    float userMonthlysalary = userAnnualsalary / 12;
    cout << "Your monthly salary is $" << userMonthlysalary << endl;
    cout << "Please input the total amount of money spent on bills monthly." << endl;
    cout << "Monthly bills cost $";
    cin >> userBillsmonthly;
    float userDisposableincome = userMonthlysalary - userBillsmonthly;
    cout << "You spend $" << userBillsmonthly << " on bills monthly." << endl;
    cout << "After neccessary expenses you have $" << userDisposableincome << " disposable income left over each month." << endl;

    system("pause>0");
}
