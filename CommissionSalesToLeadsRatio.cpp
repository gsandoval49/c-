// Giles Sandoval 
// Leads to sales calculation program
// Based on the amount of commission you would like this month
// This program only calculates the max payout of the commission tier
// Program specific for work at a health club for memberships


#include <iostream> // for cout and cin
using namespace std;

int main ()
{
  float commissionNeeded, avgDues, decimalPayout; //variables
  int nSales, nLeads;

  //cout << "Hello World Test" << endl; // Test Worked.

  cout << "\n\nProgram to produce how many leads needed for the commission you want" <<endl;

  //Asking user to input data
  cout << "\nWhat's the amount of commission you want?" << endl;
  cin >> commissionNeeded;

  cout << "\nWhat is your max commission payout?"
    << " Express in decimal (ex. if 110 percent then enter 1.1)" << endl; //find out how to use % in string
  cin >> decimalPayout;

  cout << "\nWhat is your current average sale? (ex. 96.52)" << endl;
  cin >> avgDues;

  cout << "\nHow many sales do you have this month?" << endl;
  cin >> nSales;

  cout << "\nHow many leads needed to get those sales?" << endl;
  cin >> nLeads;



  // Calculations for summaries
  float duesNeeded; // calc for dues needed
  duesNeeded = commissionNeeded / decimalPayout;

  int unitsNeeded; //calc for units needed
  unitsNeeded = duesNeeded / avgDues;

  // calculation #1 for leads needed - algebra expression
  int calcLead1;
  calcLead1 = nLeads * unitsNeeded;

  // calculation #2 for leads needed
  int calcLead2; // this will be final number for leads
  calcLead2 = calcLead1 / nSales;

  // calc for appointments set based on 40%
  float setAppts;
  setAppts = calcLead2 * .4;

  float showAppts;
  showAppts = setAppts * .5;




  //Write summary totals on screen
  cout << "\n\n\nSummary:" << endl;
  cout << "\nDesired Commission: " << commissionNeeded;
  cout << "\nAverage Sale: " << avgDues;
  cout << "\nSales This Month: " << nSales;
  cout << "\nCurrent Leads to Bring Those Sales: " << nLeads;
  cout << "\nDues Needed: " << duesNeeded;
  cout << "\nUnits needed for Desired Commission: " << unitsNeeded;
  cout << "\nLeads needed for Desired Commission: " << calcLead2 << endl;
  cout << "\nApprox Appointments SET based on 40 percent of leads: " << setAppts;
  cout << "\nApprox Appointments SHOWS based on 50 percent of leads: " << showAppts << endl;


    //<< endl; // Just showing me where the summary ends. delete this note after program is finished.



  return 0;
}
