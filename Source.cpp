#include<iostream>
using namespace std;

int main()
{
	int empolyee_salary, year_count = 0, final_salary = 0, result = 0;
	char perf_rating, choice;
	cout << "Employee Salary System\n\n";
	cout << "Enter your Current Salary : Rs.";
	cin >> empolyee_salary;
	
	if ( 0 < empolyee_salary)
	{
		do
		{
			cout << "\nEnter your Performance Rating ( A - exceptional, B - average ) : ";
			cin >> perf_rating;
			if (perf_rating == 'A' || perf_rating == 'a')
			{
				final_salary = empolyee_salary + (empolyee_salary * (0.05 + 0.02));
			}
			else if (perf_rating == 'B' || perf_rating == 'b')
			{
				final_salary = empolyee_salary + (empolyee_salary * (0.05));
			}
			else
			{
				cout << "\nWrong Rating Entered";
				return 0;
			}
			result = result + final_salary;
			year_count++;
			cout << "\nYour Salary After " << year_count << " years is : Rs. " << result;
			cout << "\n\nDo you want to calculate for another year ( Type Y for Yes ) : ";
			cin >> choice;
		} while (choice == 'Y' || choice == 'y');
	}
	else
	{
		cout << "\nInvalid Input\n";
	}
	cout << "\nProgram is Exiting";
	return 0;
}
