#include <iostream>
using namespace std;
class banking{
	protected:
		int acNo;
		float bal;
		string name;
		public:
			banking()
			{
				acNo=12345;
				name="sowmi";
				bal=20000.5;
			}
			void input()
			{
				cout<<"Enter the Account Number :";
				cin>>acNo;
				cout<<"Enter the Account Holder Name :";
				cin>>name;
			}
};
class depo: public banking

{
	protected:
		float deposit,deposit_amt;
		public:

			void deposi()
			{

	if (acNo==12345 && name=="sowmi")
	{
		cout<<"Enter the deposit amt :";
		cin>>deposit;
		deposit_amt=bal+deposit;
		cout<<"The total amount after addition = Rs. "<<deposit_amt<<endl;

	}
	else
		cout<<"Invalid password or user number";
	}

};
class withd: public banking

{
	private:
		float withdraw;
		public:

			void draw()
			{

	if (acNo==12345 && name=="sowmi")
	{
		cout<<"Enter the Withdraw amt :";
		cin>>withdraw;
		withdraw=bal-withdraw;
		cout<<"The total amount after deduction = Rs. "<<withdraw<<endl;

	}
	else
		cout<<"Invalid password or user number";
	}

};
class interest:public depo
{
	private:
	int intAmt;
	public:


		void cal()
		{

			if(deposit==10000)
				cout<<deposit_amt*(10/100);
			else if (deposit>10000 && deposit<=20000)
				cout<<deposit_amt*(20/100);
			else if (deposit>20000)
				cout<<deposit_amt*(50/100);
			else
				cout<<"Interest is provided for only depositing amount of above 10000"<<endl;

					}


};

int main()
{
	depo d;

	withd w;
	interest i;

	int choice;

		do{
		cout<<endl<<"1. Deposit";
		cout<<endl<<"2. Withdraw";
		cout<<endl<<"3. close"<<endl;
	//cout<<endl<<"";
	//cout<<endl<<"";

		cout<<"Enter the operation to perform"<<endl;
		cin>>choice;
			switch(choice)
			{
				case 1:
						d.input();
						d.deposi();
						i.cal();
						break;
				case 2:
					w.input();
					w.draw();
					break;


				case 3:
					cout<<"End...";
					break;
				default:
					cout<<"INVALID OPTION. PLEASE CHOOSE CORRECT ONE";


			}

		}while(choice!=3);




return 0;
}
