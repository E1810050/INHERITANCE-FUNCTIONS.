#include<iostream.h>
#include<conio.h>
class prime
{
  public:
  void check(int x);
};
void prime::check(int x)
{
  int i;
  for(i=2;i<=x;i++)
  {
    if(i==x)
    {
      cout<<"PRIME";
      break;
    }
    if(x%i==0)
    {
      cout<<"NOT PRIME";
      break;
    }
  }
}
class factor
{
  public:
  void find_fac(int x);
};
void factor::find_fac(int x)
{
  int i;
  for(i=1;i<=x;i++)
  {
    if(x%i==0)
    {
      cout<<i<<" ";
    }
  }
}
class factorial
{
  public:
  void facto(int x);
};
void factorial::facto(int x)
{
  int i,f=1;
  for(i=1;i<=x;i++)
  {
    f=f*i;
  }
  cout<<"The factorial is "<<f;
}
class Menu:public prime,public factorial,public factor
{
  private:
  int n,ch;
  public:
  void get_num();
  void enter();
  void choice();
};
void Menu::get_num()
{
  cout<<"Enter the Number: ";
  cin>>n;
}
void Menu::enter()
{
  cout<<"Choose the operation \n 1:Factors of number \n 2:Factorial of number \n 3:Checking of Prime Number \n 4:Get another Number \n 5:Quit \n";
  cin>>ch;
}
void Menu::choice()
{
  switch(ch)
  {
    case 1:
    find_fac(n);
    break;
    case 2:
    facto(n);
    break;
    case 3:
    check(n);
    break;
    case 4:
    get_num();
    enter();
    choice();
    break;
    case 5:
    break;
    default:
    cout<<"Invalid Selection. Enter again: ";
    cin>>ch;
    choice();
  }
}
void main()
{
  clrscr();
  Menu s;
  s.get_num();
  s.enter();
  s.choice();
  getch();
}