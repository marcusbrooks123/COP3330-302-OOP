/*Amarcus Brooks    COP 3330


This program finds the roots for quadratic equation ax^2+bx+c=0
*/







#include <iostream> //library is use for cout and cin function
#include <math.h> //library is use for mathematical functions
#include <iomanip> //library is use stream manipulator (setw ans setprecision)
using namespace std;

int main()
{
  double a = 1, b=20, c=5;
  double x_sol1 = 0.0, x_sol2 = 0.0;
  double descriminant = 0.0;


  x_sol1 = (-b + sqrt(pow(b,2)-4*a*c))/(2*a);
  x_sol2 = (-b + sqrt(pow(b,2)-4*a*c))/(2*a);

  descriminant = pow(b,2)-4*a*c;

  if(descriminant>=0)
{


}
else
{
cout<<left<<"The given equation does not have real solution, the descriminatn value is: "<<descriminant<<endl;
}


  cout<< "\nThe two real solution for the given quadratic equation are:"<<endl;
  cout <<left<<"first solution --->"<<setw(4)<<right<<setprecision(4)<<x_sol1<<endl;
  cout <<left<<"second solution --->"<<setw(4)<<right<<setprecision(4)<<x_sol2<<endl;
    return 0;
}