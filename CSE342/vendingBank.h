#ifndef VENDING_BANK_H_
#define VENDING_BANK_H_
#include <string>
#include <iostream>
class VendingBank
{
public:
//constructors
VendingBank();
VendingBank(int id);

int id() const; // returning ID information
int get_total_value() const; // Total value in bank
int get_current_balance() const; // Check customer balance before buying

void insert_coin(int cents);
// Action Functions
bool purchase_item(int cost_total); // Check if 
int cancel_transactions(); // To return credit back to customer
// To display banking information
friend std::ostream& operator <<(std::ostream& os, const VendingBank& bank);
private:
// id_ is a unique identifier for the VendingBank
// much like a serial number
int id_ ;
int total_value_;
int current_balance_;
// Coins & Bills
int dime_;
int nickel_; 
int quarter_;
int dollar_bill_;
};
#endif