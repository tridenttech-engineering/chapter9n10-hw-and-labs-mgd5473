//Lab 9-2.cpp - displays two monthly car payments
//Created/revised by <your name> on <current date>

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

double getPayment (int, double, int);

int main()
{
    int carPrice = 0;
    int rebate = 0;
    double creditUnionRate = 0.0;
    double dealerRate = 0.0;
    int term = 0;
    double creditUnionPayment = 0.0;
    double dealerPayment = 0.0;

    cout << "Car price (after any trade-in): ";
    cin >> carPrice;
    cout << "Rebate: ";
    cin >> rebate;
    cout << "Credit union rate: ";
    cin >> creditUnionRate;
    cout << "Dealer rate: ";
    cin >> dealerRate;
    cout << "Term in years: ";
    cin >> term;

    creditUnionPayment = getPayment(carPrice-rebate, creditUnionRate/12, term*12);
    dealerPayment = getPayment(carPrice-rebate, dealerRate/12, term*12);

    cout << "Credit union payment: $" << fixed << setprecision(2) << creditUnionPayment << endl;

cout << "Dealer Payment: $" << fixed << setprecision(2) << dealerPayment << endl;


}//end of main function    

double getPayment(int prin, double monthRate, int months)
{
    double monthPay = 0.0;
    monthPay = prin * monthRate / (1 - pow(monthRate + 1, -months));
    return monthPay;
}

