//NAME:BONFACE KYAMBI
//SCHOOL:SPAS
//COURSE:COMPUTER SCIENCE
//UNIT:OOP1
#include<iostream>//cout,cin
using namespace std;

int main()
{
string customername,mobilemodel;
int quantity;
float price,totalsales;
cout<<"Enter customername:"<<endl;
cin >>customername;
cout<<"Enter mobilemodel:"<<endl;
cin >>mobilemodel;
cout<<"Enter quantity purchased:"<<endl;
cin >>quantity;
cout<<"Enter price per phone:"<<endl;
cin >>price;
totalsales=quantity*price;

cout<<"SALES RECIEPT"<<endl;
cout<<"customername"<<customername<<endl;
cout<<"mobilemodel"<<mobilemodel<<endl;
cout<<"quantitypurchased:"<<quantity<<endl;
cout<<"priceperphone:"<<price<<endl;

return 0;


	
}