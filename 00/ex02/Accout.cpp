#include "Account.hpp"
#include <iostream>
#include <ctime>

void	timestamp(void)
{
   time_t	now = time(0);
   tm		*ltm = localtime(&now);

   std::cout << "[" << 1900 + ltm->tm_year << 1 + ltm->tm_mon << ltm->tm_mday << "_"
   				<< ltm->tm_hour << ltm->tm_min << ltm->tm_sec << "]" << std::endl;
}

int		Account::getNbAccounts(void)
{

}
int		Account::getTotalAmount( void ) {

}
int		Account::getNbDeposits( void ) {

}
int		Account::getNbWithdrawals( void ) {

}
void	Account::displayAccountsInfos( void ){
}

Account::Account( int initial_deposit ) {
	this->_amount = initial_deposit;
}
Account::~Account( void ) {
	return ;
}

void	Account::makeDeposit( int deposit ) {
	return ;
}
bool	Account::makeWithdrawal( int withdrawal ) {
	return 1 ;
}
int		Account::checkAmount( void ) const {
	return 1 ;
}
void	Account::displayStatus( void ) const {
	return ;
}

int	Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;