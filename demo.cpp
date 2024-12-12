#include <iostream>
#include <string>
using namespace std;

// basic
// int main()
// {
//     float lenght=2;
//     float breadth=3;
//     string s="Area of the ";
//     float area= lenght*breadth;
//     cout<< s<< "rectangle is "<< area<< endl;
//     return 0;
// }

// contant reference
// int main() {
//
//     // initialize a constant PI
//     const double PI = 3.14;
//
//     // create a read-only reference to PI
//     const double &PI_REF = PI;
//
//     cout << "PI: " << PI;
//     cout << "\nPI_REF: " << PI_REF;
//
//     return 0;
// }

//sum of the given elements in the array
// int sum(int arr[],int n)
// {
//     int Total =0;
//     for ( int i=0;i<n;i++)
//     {
//         Total+= arr[i];
//     }
//     return Total;
// }
//
// int main()
// {
//     int arr[]={1,3,4,5};
//     int n= sizeof(arr)/sizeof(arr[0]);
//     cout<< "Sum :" << sum(arr,n);
// }

// Area of rectangle :
// int main(){
//     int lenght;
//     int breadth;
//     cout<< "Enter the lenght of rectangle: " ;
//     cin>>lenght;
//     cout<<"Enter the breadth of rectangle: ";
//     cin>> breadth;
//     int area = lenght* breadth;
//     cout<<"Area of the rectangle is : "<< area<<endl;
//     return 0;
// }

// int main() {
//     int a, b;
//     cout<<"Enter the value of a & b :" ;
//     cin>>a>>b;
//     cout<<"Given Value of a = "<<a << " and b = "<<b<<endl;
//
//
//     cout << "a + b = " << (a + b) << endl;
//     cout << "a - b = " << (a - b) << endl;
//     cout << "a * b = " << (a * b) << endl;
//     cout << "a / b = " << (a / b) << endl;
//     cout << "a % b = " << (a % b) << endl;
//
//     return 0;
// }
//Practise
// int sum(int arr[],int  n)
// {
//     int Total= 0;
//     for(int i=0;i<n;i++)
//     {
//         Total += arr[i];
//     }
//     return Total;
// }
// int main()
// {
//     int arr[]= {1,4,5,6};
//     int n= sizeof(arr)/sizeof(arr[0]);
//     cout<< "sum: "<<sum(arr,n)<< endl;
//     return 0;
// }

// && operator truth table
// int main() {
//     int a = 5;
//     int b = 9;
//     cout << ((a == 0) && (a > b)) << endl;
//     cout << ((a == 0) && (a < b)) << endl;
//     cout << ((a == 5) && (a > b)) << endl;
//     cout << ((a == 5) && (a < b)) << endl;
//     return 0;
//

//|| operator Truth table
// int main()
// {
//     int a;
//     int b;
//     cout<<" Enter the value of a : ";
//     cin>> a;
//     cout<<" Enter the value of b : ";
//     cin>>b;
//     cout<< ((a==0)||(a<b))<<endl;
//     cout<<((a==0) || (a>b))<<endl;
//     return 0;
// }

// ! operator table
// int main()
// {
//     int a;
//     int b;;
//     cout << " Enter the value of a : ";
//     cin>> a;
//     cout<<"Enter the value of b : ";
//     cin>> b;
//     cout << !(a!=0)<< endl;
//     cout << !(a==b)<< endl;
//     return 0;
// }

// Basic if statements
// int main()
// {
//     int maths;
//     cout<< "Enter the grade for maths : " ;
//     cin>> maths;
//     if (maths>90)
//     {
//         cout<< "Given grade is A";
//     }
//     else if ((75<maths) && (maths<=90))
//     {
//         cout<<"Given grade is B";
//     }
//     else{
//         cout<< "Given grade is C";
//     }
// }


// program to skip the block of code if the number entered is negative
// int main()
// {
//     int number;
//     cout<<"Enter a positive number : ";
//     cin>> number;
//     if (number >=0)
//     {
//         cout<<"Entered number is positive."<< number << endl;
//     }
//     cout<<"Enter a positive number" <<endl;
//     return 0;
// }

//nested if statements
// int main()
// {
//     int number;
//     cout<<"Enter an integer: ";
//     cin>>number;
//     if (number != 0)
//     {
//         if(number>0)
//         {
//             cout<<"Entered number is positve :"<<number<<endl;
//         }
//         else if(number<0){
//             {
//                 cout<<"Entered number is negative :"<< number <<endl;
//             }
//         }
//     }
//     else
//     {
//         cout<<"Entered number is zero."<<endl;
//     }
//     cout<<"End of program"<<endl;
//     return 0;
// }

// basic for loop
// int main()
// {
//     int n;
//     cout<<"Enter the number :";
//     cin>> n;
//     for (int i=0;i<n; ++i)
//     {
//         cout<< i*i<<endl;
//     }
//     return 0;
// }

// print a string 5 times
// int main()
// {
//     int n=5;
//     for (int i=0;i<n;i++)
//     {
//         cout<<"Hello, world "<<endl;
//     }
// }

//C++ program to find the sum of first n natural numbers
// positive integers such as 1,2,3,...n are known as natural numbers

// sum of n natural numbers
// int main()
// {
//     int n,sum;
//     cout<<"enter the number: ";
//     cin>>n;
//     sum=0;
//     for(int i =0;i<n;i++)
//     {
//         sum+=i;
//     }
//     cout<< sum;
//     return 0;
// }

// range based for loop using auto
// int main()
// {
//     int arr[]={1,45,2,5,5,};
//     for(auto n:arr){
//     cout<< n <<" ";
// }
// }

//while loop
// int main()
// {
//     int i=0;
//     while (i<=5)
//     {
//         cout<<i <<" ";
//         i++;
//     }
// }

// while
// int main()
// {
//     int i= 0;
//     int n;
//     cout<<"Enter the value of n ";
//     cin>> n;
//     while(i<=n)
//     {
//         cout <<i <<" ";
//         i++;
//     }
//     cout<<endl<<"End of the code.";
// }

// program to find the sum of positive numbers
// if the user enters a negative number, the loop ends
// the negative number entered is not added to the sum

// sum of the given positive numbers using while statement
// int main()
// {
//     int n;
//     int sum= 0;
//     while (n>=0)
//     {
//         cout<<"Enter a positive integer :";
//         cin>>n;
//         if (n>=0)
//         {
//             sum += n;
//         }
//     }
//     cout <<"Sum of the given postive integers is : "<< sum;
//     return 0;
// }

//  do-while statement
// int main()
// {
//     int i=0;
//     do
//     {
//         cout<<i<<" ";
//         i++;
//     }while(i<=7);
//     return 0;
// }


// program to find the sum of positive numbers
// If the user enters a negative number, the loop ends
// the negative number entered is not added to the sum
// int main()
// {
//     int sum=0;
//     int n=0;
//     do
//     {
//         sum += n;
//         cout<<"Enter a positive integer: ";
//         cin>>n;
//     }while(n>=0);
//     cout<<"Sum : "<<sum;
//     return 0;
// }

//break & continue statement
// int main()
// {
//     int n;
//     int sum=0;
//     cout<<"Enter the value of n: ";
//     cin>>n;
//     for (int i=0;i<n;i++)
//     {
//         if (i==3)
//         {
//             continue;
//         }
//         cout<<i<<" ";
//     }
//     cout<<"this is the end of the code";
// }

// program to find the sum of positive numbers
// if the user enters a negative numbers, break ends the loop
// the negative number entered is not added to sum
//using while
// int main()
// {
//     int n=0;
//     int sum=0;
//     while(true)
//     {
//         cout<<"Enter a poistive integer : ";
//         cin>>n;
//         if(n<0)
//         {
//             break;
//         }
//         sum+=n;
//     }
//     cout<<"The total sum is : "<<sum;
//     return 0;
// }

// nested for loop + break statement
// int main()
// {
//     int i;
//     for(i=1;i<=3;i++)
//     {
//         for(int j=1;j<=3;j++)
//         {
//             if(i==3)
//             {
//                 break;
//             }
//             cout<<"i = "<<i<<" "<<" j = "<<j<<endl;
//         }
//     }
// }

// program to print the value of i using for loop
// int main()
// {
//     for(int i=0;i<=6;i++)
//     {
//         if(i==3)
//         {
//             continue;
//         }
//         cout<<i<<endl;
//     }
//     return 0;
// }

//using while loop
// program to calculate positive numbers till 50 only
// if the user enters a negative number,
// that number is skipped from the calculation
// negative number -> loop terminate
// numbers above 50 -> skip iteration
//
// int main()
// {
//     int n;
//     int sum=0;
//     while(n>=0)
//     {
//         sum+=n;
//         cout<<"Enter a positive number :";
//         cin>>n;
//         if(n>50)
//         {
//             n=0;
//             continue;
//         }
//         else if(n<0)
//         {
//             break;
//         }
//     }
//     cout<<"sum is : "<<sum;
//     return 0;
// }

//Go to label
// This program calculates the average of numbers entered by the user.
// If the user enters a negative number, it ignores the number and
// // calculates the average number entered before it.
// int main()
// {
//     float i,n,avg,sum,number;
//     sum=0;
//     cout<<"Enter the maximum numbers that you want to calculate for : ";
//     cin>>n;
//     for(i=1;i<n;i++)
//     {
//         cout<<"enter a postive number : ";
//         cin>>number;
//         if(number<0.0)
//         {
//             goto skip;
//         }
//         sum+=number;
//     }
//     skip:
//     avg=sum/(i-1);
//     cout<<"Average of the given numbers is : "<< avg;
//     return 0;
// }

//Basic calculator using switch case
// int main()
// {
//     while(true){
//     char oper;
//     float num1,num2;
//         string response;
//     cout<<"Enter the arithimatical operator from (+,-,*,/) :" ;
//     cin>>oper;
//     cout<<"Enter two numbers : ";
//     cin>>num1>>num2;
//     switch(oper)
//     {
//     case '+': cout<<"Sum of the entered number is : "<<num1+num2<<endl;
//         break;
//     case'-': cout<<"Difference between the entetered number is : "<<num1-num2<<endl;
//         break;
//     case '*':cout<<"Product of the entered number is : "<<num1*num2<<endl;
//         break;
//     case '/':
//         if (num2 !=0)
//         {
//             cout<<"Division of the entered number is : "<<num1/num2<<endl;
//         }
//         else
//         {
//             cout<<"Division not possible with 0 as the demnominator!!"<<endl;
//         }
//         break;
//     default: cout<< "Enter a valid operator"<<endl;
//     }
//         cout<<"Do you wish to continue? yes or no?";
//         cin>>response;
//         if (response=="No"||response=="NO"||response=="no"||response=="nO")
//         {
//             break;
//         }
//     }
// }

//terenary operator
// int main()
// {
//     double marks;
//     cout<<"Enter grades for english : ";
//     cin>>marks;
//     string result = (marks>=40)? "Passed" : "Failed";
//     cout<<"You " << result << " your test.";
// }

//nested terenary operator
// int main()
// {
//     double number;
//     cout<<"Enter the number : ";
//     cin>> number;
//     string result = (number == 0)? "Number is zero": ((number>0)? "Number is
//     positive": "number is negative");
//     cout<<result;
// }

//terenary operator
// int main(){
//     int num1, num2;
//     cout<<"Enter two numbers : ";
//     cin>>num1>>num2;
//     int result = (num1>num2) ? num1:num2;
//     cout<<result;
// }

// Functions
// void message()
// {
//     cout<<"Hello , hi first time functions"<<endl;
// }
// int addition(int num1,int num2)
// {
//     cout<<"Addition of the numbers is "<< num1+num2;
// }
// int main()
// {
//     message();
//     addition(3,4);
// }

//right angle triangle
// int main()
// {
//     int n;
//     int i;
//     cout<<"Enter the number of units you want in length :";
//     cin>>n;
//     for (i=0;i<n;i++)
//     {
//         cout<<"|";
//         for(int j=0;j<i;j++){
//             // if(j==(n-1)){
//             //     break;
//             // }
//             cout<<" ";
//         }
//         if(i==(n-1))
//         {
//             for(int k=0;k<n;k++)
//             {
//                 cout<<"_";
//             }
//         }
//         cout<<"\\";
//         cout<<endl;
//     }
// }
// void display(float n1,float n2)
// {
//     cout<<"the first number is " <<n1<<endl;
//     cout<<"the second number is "<<n2;
// }
// int main()
// {
//     display(2,4);
// }

//adding numbers using a function
// int add(int a,int b)
// {
//     return (a+b);
// }
// int main()
// {
//     int sum;
//     sum = add(33,33);
//     cout<<"Sum of 33 and 33 is :"<< sum;
//     return 0;
// }

// float multiply(float n1,float n2)
// {
//     return n1*n2;
// }
// int main()
// {
//     int num1;
//     int num2;
//     cout<< "enter two numbers :";
//     cin>>num1>>num2;
//     cout<<"given product of two numbers is : ";
//     cout<< multiply(num1,num2);
//     return 0;
// }
//

//function prototype
// int what(int , int);
// int main()
// {
//     int n,m;
//     cout<<"Enter two numbers : ";
//     cin>>n>>m;
//     cout<<"sum of two numbers : ";
//     cout<<what(n,m);
// }
// int what(int a,int b)
// {
//     return a+b;
// }

//default arguments
// void display(char ='b', int =7);
// int main()
// {
//     cout<<"default arguments : ";
//     display();
//     cout<<endl<<"first argument : ";
//     display('c');
//     cout<<endl<<"both the arguments : ";
//     display('b',3);
// }
//
// void display(char c, int count)
// {
//     for(int i=0;i<count;i++)
//     {
//         cout<<c;
//     }
// }

//function overloading
// float absolute(float num)
// {
//     if(num<0.0)
//     {
//         num=-num;
//     }
//     return num;
// }
//
// int absolute(int num)
// {
//     if(num<0)
//     {
//         num=-num;
//     }
//     return num;
// }
// int main()
// {
//     float a;
//     int b;
//     cout<<"Enter a float number to find the absolute : ";
//     cin>>a;
//     cout<<"absolute of the given float number is :";
//     cout<<absolute(a)<<endl;
//     cout<<"Enter an integer to find the absolute : ";
//     cin>>b;
//     cout<<"absolute of the given integer is : ";
//     cout<<absolute(b);
//     return 0;
// }

// // Function overloading
// void display(int a, char b)
// {
//     cout<<"value of integer is :" <<a<<endl;
//     cout<<"value of char is :"<<b<<endl;
// }
// void display(const string& message)
// {
//     cout<<"string is "<<message<<endl;
// }
// void display(float a)
// {
//     cout<<"Given float value :"<<a;
// }
// int main(){
//     // 1st display
//     cout<<"first print :"<<endl;
//     display(9,'c');
//     string message = "2nd print.";
//     cout<<"2nd display :";
//     display(message);
//     cout<<"3rd display :";
//     float a= 4.5;
//     display(a);
// }

// finding the factorial using recursive function
// int factorial(int);
// int main()
// {
//     int n;
//     cout<<"Enter the number to find the factorial :";
//     cin>>n;
//     cout<<"Factorial of the given number is : "<<factorial(n);
//     return 0;
// }
// int factorial(int n)
// {
//     if (n>1)
//     {
//         return n*factorial(n-1);
//     }else{}
//     return 1;
// }
//
// int main()
// {
//     int p[]={2,3,4,4,5};
//     cout<<"size of array : "<< (sizeof(p)/sizeof(p[0]));
//     cout<<"Insert a number into array : ";
//     cin>>p[2];
//     for(auto n:p)
//     {
//         cout<<n<<" ";
//     }
// }

//printing array elements
// int main()
// {
//     int p[4]={9,3,4,2};
//     for(auto n: p)
//     {
//         cout<<n<<" ";
//     }
//     cout<<endl;
//     for (int i=0;i<4;i++)
//     {
//         cout<<p[i]<<" ";
//     }
// }

// create an array and print it
// int main()
// {
//     int n;
//     cout<<"Enter the number of elements you want to enter in the array : ";
//     cin>>n;
//     int p[n];
//     for(int i=0;i<n;i++)
//     {
//         cout<<"Enter the integer you want to add in array : ";
//         cin>>p[i];
//     }
//     cout<<"Elements in array are : ";
//     for(int i=0;i<n;i++)
//     {
//         cout<<p[i]<<" ";
//     }
// }

// // Display Sum and Average of Array Elements Using for Loop
//  int main()
//  {
//      int sum=0;
//      int n;
//      cout<<"Enter the number of elements you want to enter in the array : ";
//      cin>>n;
//      int p[n];
//      for(int i=0;i<n;i++)
//      {
//          cout<<"Enter the integer you want to add in array : ";
//          cin>>p[i];
//      }
//      cout<<"Elements in array are : ";
//      for(int i=0;i<n;i++)
//      {
//          cout<<p[i]<<" ";
//      }
//      for(int i=0;i<n;i++)
//      {
//          sum+=p[i];
//      }
//      float avg=static_cast<float>(sum) / n;;
//      cout<< "Sum of the elements in array : "<<sum<<endl<< "and
//      average of the elements is : "<<avg;
//      return 0;
//  }


//Write a function to find the index of an element in an array.
// int main(){
//     int arrSize,x;
//     cout<<"Enter the number of elements you want in the array : ";
//     cin>>arrSize;
//     int arr[arrSize];
//     for(int i=0;i<arrSize;i++){
//         cout<<"enter into array : ";
//         cin>>arr[i];
//     }
//     cout<<"The elements in the array are : ";
//     for(auto n:arr)
//     {
//         cout<<n<<" ";
//     }
//     cout<<endl<<"Enter the element you want to find : ";
//     cin>>x;
//     int index= -1;
//     for(int i=0;i<arrSize;i++){
//         if(arr[i]==x){
//             index = i;
//             break;
//         }
//     }
//     if (index != -1)
//     {
//         cout<<"Index of the the given element is : "<<index;
//     }else
//     {
//         cout<<"Element not found in the array.";
//     }
// }

// Program to display the grades of students:
// void Grades(float marks[], int arrsize)
// {
//     cout<<"Grades of students"<<endl;
//     for(int i=0;i<arrsize;i++)
//     {
//         cout<<"Student "<<i+1<<" "<<marks[i]<<endl;
//     }
// }
// int main()
// {
//     float marks[]={55,77,33,66,99};
//     int arrsize=5;
//     Grades(marks,arrsize);
// }

//same as above but the arrsize is declared outside the functions
// const int arrsize=5;
// void display(int arr[])
// {
//     cout<<"Grades of students :"<<endl;
//     for(int i=0;i<arrsize;i++)
//     {
//         cout<<"Student number "<<i+1<<" : "<<arr[i]<<endl;
//     }
// }
// int main()
// {
//     int arr[5]={45,23,55,22,55};
//     display(arr);
// }

//2-D array
// int arrsize=4;
// void display(int arr[][2])
// {
//     for(int i=0;i<arrsize;i++)
//     {
//         for(int j=0;j<2;j++)
//         {
//             cout<<"{"<<i<<"}"<<"{"<<j<<"}"<<"="<<arr[i][j]<<endl;
//         }
//     }
// }
// int main()
// {
//     int arr[4][2]={{1,3},{2,5},{5,6},{2,5}};
//     display(arr);
// }

// 3*2 rows matrix
// int main()
// {
//     int arr[2][3];
//     cout<<"Enter 6 number :";
//     for(int i=0;i<2;i++){
//         for(int j=0;j<3;j++)
//         {
//             cin>>arr[i][j];
//         }
//     }
//     for(int i=0;i<2;i++){
//         for(int j=0;j<3;j++)
//         {
//             cout<<"{"<<i<<"}"<<"{"<<j<<"}"<<"="<<arr[i][j]<<endl;
//         }
//     }
// }

// 2*3 rows matrix
// int main()
// {
//     int arr[2][3];
//     cout<<"Enter 6 number :";
//     for(int i=0;i<2;i++){
//         for(int j=0;j<3;j++)
//         {
//             cin>>arr[i][j];
//         }
//     }
//     for(int i=0;i<2;i++){
//         for(int j=0;j<3;j++)
//         {
//             // cout<<"{"<<i<<"}"<<"{"<<j<<"}"<<"="<<arr[i][j]<<endl;
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<"\n";
//     }
// }

// dealing with string which takes only first word because in C space is considered as
// terminating the flow
// int main()
// {
//     char str[10];
//     cout<<"Enter a string : ";
//     cin>>str;
//     cout<<"3rd character of string: "<<str[2];
// }

// print the sentence by using the get function for string which consists of two v
// ariables , the first one
// takes the str variable and the second one takes the count of the characters
// int main()
// {
//     char str[100];
//     cout<<"Enter a sentence : ";
//     // cin.get(str,100);
//     cout<<str;
// }

// int main()
// {
//     char str[20];
//     cout<<"Give a sentence : ";
//     // cin>>str;
//     cin.get(str,20);
//     cout<<str;
// }

// int main()
// {
//     string str;
//     cout<<"enter the string :";
//     getline(cin,str);
//     // cin>>str;
//     cout<<"Entered in string : "<<str;
// }

// void display(string);
// void display (char);
// int main()
// {
//     string str1;
//     char s[20];
//     cout<<"Enter a string : ";
//     getline(cin,str1);
//     cout<<"Enter a char : ";
//     cin.get(s,20);
// }
// getline(cin,str)
// cin.get(str,20)

//find the position of substring
// int main()
// {
//     string str;
//     cout<<"Enter a string ";
//     cin>>str;
//     size_t first_occur=str.find("p");
//     size_t second_occur=str.rfind("p");
//     cout<<"First occurance of p in "<<str<<" : "<<first_occur<< " & "<<second_occur;
//
// }

//append method of c++
// int main()
// {
//     string str1,str2,str3,str4;
//     cout<<"Enter string :";
//     getline(cin,str1);
//     str2= " this is the 2nd string :";
//     str3= str1.append(str2);
//     cout<<"New string : "<<str3;
//     str4=str3.insert(0,"Hello ");
//     cout<<endl<<str4;
//     cout<<endl<<str4.erase(7,3);
//     return 0;
// }

// int main()
// {
//     string str1,str2;
//     cout<<"Enter a string : ";
//     cin>>str1;
//     str2= str1.replace(3,4," Nooo");
//     cout<<str2;
// }

// int main()
// {
//     int var;
//     cout<<"Enter an integer: ";
//     cin>>var;
//     int *var_add = &var;
//     cout<<var_add;
// }

