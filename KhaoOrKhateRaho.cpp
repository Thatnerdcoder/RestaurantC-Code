#include<iostream>
#include<stdlib.h>
using namespace std;

int mainPage()
{
	int choice;
	cout<<"********************************\n";
	cout<<"\tWELCOME:\t KHAO\t OR\t KHATE\t RAHO\t \n\n";
	cout<<"\t PRESS 1 FOR VEG.\n";
	cout<<"\t PRESS 2 FOR FAST FOOD\n";
	cout<<"\t PRESS 3 FOR DRINKS\n";
	cout<<"********************************\n";
	cout<<"Enter your choice:\n";
	cin>>choice;
	system("cls");
		return choice;
}

int Bill(int amount)
{
	cout<<"Your Bill is:\n"<<amount<<endl;
	if(amount>=2000)
	{
		cout<<"You have got 10% Discount!!\n";
		int discount=(amount*10/100);
		amount= amount-discount;
		cout<<"Amount you have to pay now:"<<amount;
	}
}

int main()
{
	int drinks_amount=0,veg_amount=0,ff_amount=0,amount=0;
	char chh;
  do
  {
	int choice=mainPage();
		if(choice==1)
		{	
			int Dal, MixVg, Roti, Salad;
			cout<<"********************************\n";
			cout<<"\t\t VEG. MENU \t \n\n";
			cout<<"\t DAL:\t\t 150/-\n";
			cout<<"\t MIX VEG.:\t 200/-\n";
			cout<<"\t ROTI:\t\t 15/-\n";
			cout<<"\t SALAD:\t\t 50/-\n";
			cout<<"********************************\n";
			cout<<"Enter the quantity of Dal, MixVeg, Roti, Salad:\n";
			cin>>Dal>>MixVg>>Roti>>Salad;
			veg_amount=(150*Dal)+(200*MixVg)+(15*Roti)+(50*Salad)+veg_amount;
		}
		else if(choice==2)
		{
			int Momos, ChP, Samosa, Choumin;
			cout<<"********************************\n";
			cout<<"\t\t FAST FOOD MENU \t \n\n";
			cout<<"\t MOMOS:\t\t\t 80/-\n";
			cout<<"\t CHILLI POTATO:\t\t 120/-\n";
			cout<<"\t SAMOSA:\t\t 20/-\n";
			cout<<"\t CHOUMIN:\t\t 90/-\n";
			cout<<"********************************\n";
			cout<<"Enter the quantity of Momos, Chilli potato, Samosa, Choumin:\n";
			cin>>Momos>>ChP>>Samosa>>Choumin;
			ff_amount=(80*Momos)+(120*ChP)+(20*Samosa)+(90*Choumin)+ff_amount;
		}
		else if(choice==3)
		{
			int SpriteD,DewD,CokeD,ThumbsD;
			cout<<"********************************\n";
			cout<<"\t\t DRINKS MENU \t \n\n";
			cout<<"\t SPRITE:\t\t 80/-\n";
			cout<<"\t MOUNTAIN DEW:\t\t 80/-\n";
			cout<<"\t COCACOLA:\t\t 80/-\n";
			cout<<"\t THUMBS UP:\t\t 80/-\n";
			cout<<"********************************\n";
			cout<<"Enter the quantity of Sprite, Mountain Dew, Cocacola, ThumbsUp:\n";
			cin>>SpriteD>>DewD>>CokeD>>ThumbsD;
			drinks_amount=(80*SpriteD)+(80*DewD)+(80*CokeD)+(80*ThumbsD)+drinks_amount;
		}
		else
		{
			cout<<"Wrong choice entered!\n Choose from 1-3";
		}
		cout<<"you want to continue??\t type y/n";
		cin>>chh;
    }while(chh=='y');
    		amount=veg_amount+ff_amount+drinks_amount;
			Bill(amount);
	return 0;
}
