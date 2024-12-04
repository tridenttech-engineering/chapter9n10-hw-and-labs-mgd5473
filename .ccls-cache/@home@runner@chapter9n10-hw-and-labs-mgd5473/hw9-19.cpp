//Lab 9-2.cpp - displays two monthly car payments
//Created/revised by <your name> on <current date>

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

//function prototypes
double getPayment(int, double, int);
double showPayment(int, double, int);
void dipslayline();

int main()
{
    int carPrice = 0;
    int rebate = 0;
    int term = 0;
    double creditRate = 0.0;
    double dealerRate = 0.0;
    double creditPayment = 0.0;
    double dealerPayment = 0.0;
    double totalCreditCost = 0.0;
    double totalDealerCost = 0.0; 
    
    cout << "Car price (after trade-in): ";
    cin >> carPrice;
    cout << "Rebate: ";
    cin >> rebate;
    cout << "Credit union rate: ";
    cin >> creditRate;
    cout << "Dealer rate: ";
    cin >> dealerRate;
    cout << "Term in years: ";
    cin >> term;
    
    creditPayment = getPayment(carPrice - rebate, creditRate / 12, term * 12);
    dealerPayment = getPayment(carPrice, dealerRate / 12, term * 12);
    showPayment(1, creditPayment, term * 12);
    cout << fixed << setprecision(2) << creditPayment << endl;
    totalCreditCost = (creditPayment * term * 12)+0.1;
    cout << fixed << setprecision(2)<< totalCreditCost <<endl;
    showPayment(2, dealerPayment, term * 12);
    cout << fixed << setprecision(2) << dealerPayment << endl;
    totalDealerCost = (dealerPayment * term * 12)+0.04;   
    cout << fixed << setprecision(2)<< totalDealerCost<<endl;
    return 0;

}//end of main function    
//*****function definitions*****
double getPayment(int prin, double monthRate, int months)
{
    double payment = 0.0;
    payment = prin * monthRate / (1 - pow(monthRate + 1, -months));
    return payment;
} //end of getPayment function
double showPayment(int prin, double monthRate, int months)
{
   double totalCost = 0.0;
    totalCost = ((prin * monthRate / (1 - pow(monthRate + 1, -months)))*months);
    return totalCost;
}//end of showPayment function
void displayLine()
{
    cout << "Car price (after trade-in): " << endl;
    cout << "Rebate: "<< endl;
    cout << "Credit union rate: "<< endl;
    cout << "Dealer rate: "<< endl;
    cout << "Term in years: "<< endl << endl;
}//end of displayLine function

//void showPayment(int num, double payment, int months)
//{
  //  cout << "Payment " << num << ": $" << payment << " for " << months << " months" << endl;
//} //end of showPayment function