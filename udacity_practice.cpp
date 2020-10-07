/*Enum example*/

#include <iostream>

using namespace std;

int main()
{
    //define MONTH as having 12 possible values  -- also, enum variables should be singular by convention
    enum MONTH {Jan, Feb, Mar, Apr,May,Jun,Jul,Aug,Sep,Oct,Nov,Dec};
    
    //define bestMonth as a variable type MONTHS
    MONTH bestMonth;
    
    //assign bestMonth one of the values of MONTHS
    bestMonth = Jan;
    
    //now we can check the value of bestMonths just 
    //like any other variable
    if(bestMonth == Jan)
    {
        cout<<"I'm not so sure January is the best month\n";
    }
    return 0;
}




// Using <iomanip> to set width ( setw() )

 #include <iomanip>

int main() {

std::cout<<"\n\nThe text without any formating\n";
std::cout<<"Ints"<<"Floats"<<"Doubles"<< "\n";
std::cout<<"\nThe text with setw(15)\n";
std::cout<<"Ints"<<std::setw(15)<<"Floats"<<std::setw(15)<<"Doubles"<< "\n";
std::cout<<"\n\nThe text with tabs\n";
std::cout<<"Ints\t"<<"Floats\t"<<"Doubles"<< "\n";

}