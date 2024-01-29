#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
void main()
{
clrscr();
int rows,columns,enter_no;
cout<<"Enter Number:";
cin>>enter_no;
for(rows=0;rows<20;rows++)   
{
for(columns=0;columns<10;columns++)
cout<<setw(7)<<(enter_no*(10*rows+columns+1));
cout<<endl;
getche();
}}










