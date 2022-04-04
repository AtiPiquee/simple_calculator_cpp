#include <iostream>

using namespace std;

void addition();
void soustraction();
void multiplication();
void division();

int main()
{
    int choice(0);

    system("CLS");

    cout << R"(        
  _____     __         __     __          
 / ___/__ _/ /_____ __/ /__ _/ /____  ____
/ /__/ _ `/ / __/ // / / _ `/ __/ _ \/ __/
\___/\_,_/_/\__/\_,_/_/\_,_/\__/\___/_/   
                                                                                   
1/ Addition | 2/ Soustraction | 3/ Multiplication | 4/ Division
)"; 
    cout << "> ";
    cin >> choice;

    switch (choice)
    {
      case 0:
        main();
        break;
      
      case 1:
        addition();
        break;

      case 2:
      soustraction();
      break;

      case 3:
      multiplication();
      break;

      case 4:
      division();
      break;

      default:
      main();
      break;
    }

    system("pause");
    return 0;
}

void addition() 
{
  int choice(0);
  double numone(0), numtwo(0), result(0);
  cout << endl << "Enter a first number > ";
  cin >> numone;
  cout << endl << "Enter a second number > ";
  cin >> numtwo;
  result = numone + numtwo;
  cout << endl << "The result is : " << result << endl; 
  system("pause");
  main();
}

void soustraction() 
{
  double numone(0), numtwo(0), result(0);
  cout << endl << "Enter a first number > ";
  cin >> numone;
  cout << endl << "Enter a second number > ";
  cin >> numtwo;
  result = numone - numtwo;
  cout << endl << "The result is : " << result << endl; 
  system("pause");
  main();
}

void multiplication() 
{
  double numone(0), numtwo(0), result(0);
  cout << endl << "Enter a first number > ";
  cin >> numone;
  cout << endl << "Enter a second number > ";
  cin >> numtwo;
  result = numone * numtwo;
  cout << endl << "The result is : " << result << endl; 
  system("pause");
  main();
}

void division() 
{
  double numone(0), numtwo(0), result(0);
  cout << endl << "Enter a first number > ";
  cin >> numone;
  cout << endl << "Enter a second number > ";
  cin >> numtwo;
  result = numone / numtwo;
  cout << endl << "The result is : " << result << endl;
  system("pause");
  main();
}




