#include<iostream>
#include<string>
#include<fstream>

using namespace std;


class Dovidnik
{
public:
	void Save(string name, string company_name, string number, string adress, string RidDialnosti, string filename)
	{
		this->name = name;
		this->company_name = company_name;

		this->number = number;
		this->number = number;

		this->adress = adress;
		this->RidDialnosti = RidDialnosti;

		this->filename = filename;
		
		ofstream file(filename);
		file << "1:" << name << "\n" << "2:" << company_name << "\n" << "3:" << number << "\n" << "4:" << adress << "\n" << "5:" << RidDialnosti;
		file.close();
	}
	void Find(string filename)
	{
		this->filename = filename;
		ifstream file(filename);

		string l;
		int n;
		cout << "Input 1 to find by name, 2 to find by comapany name, 3 to find by phone number ,4 to find by adress or 5 to find by rid dialnosti:\t"; cin >> n;
		//rid dialnosti -- рід діяльності 
		if (n == 1) 
		{
			this->filename = filename;
			ifstream file(filename);

			string l;
			while (getline(file, l))
			{
				cout << l<<endl;
			}

			file.close();
		};
		if (n == 2) 
		{
			this->filename = filename;
			ifstream file(filename);

			string l;
			while (getline(file, l))
			{
				cout << l << endl;
			}

			file.close();
		};
		if (n == 3) 
		{
			this->filename = filename;
			ifstream file(filename);

			string l;
			while (getline(file, l))
			{
				cout << l << endl;
			}

			file.close();
		};
		if (n == 4) 
		{
			this->filename = filename;
			ifstream file(filename);

			string l;
			while (getline(file, l))
			{
				cout << l << endl;
			}

			file.close();
		};
		if (n == 5) 
		{
			this->filename = filename;
			ifstream file(filename);

			string l;
			while (getline(file, l))
			{
				cout << l << endl;
			}

			file.close();
		};
		file.close();
		
	}
	void OpenFile(string Newfilename)
	{
		this->Newfilename = Newfilename;
		cout << "Press the title of your file(with '.txt'):"; cin >> Newfilename;
		
		string l;
		
		
			ifstream file(Newfilename);
				while(getline(file,l))
				{
					cout << l << endl;
				}
			file.close();
		
	}
private:
	string name;
	string company_name;
	string number;
	string adress;
	string RidDialnosti;

	string filename;
	string Newfilename;

};
int main()
{
	string name;
	string company_name;
	string number;
	string adress;
	string RidDialnosti;
	string filename;

	string Newfilename;
	string YesNo;

	cout << "Press information here:";  cin >> name >> company_name >> number >> adress >> RidDialnosti;
	cout << "Enter the title of the name(with '.txt'):\t"; cin >> filename;

	Dovidnik dov;
	dov.Save(name,company_name,number,adress,RidDialnosti, filename);
	dov.Find(filename);


	

	cout << "Input 'yes' if you want to open existing file, if no press 'no':"; cin >> YesNo;
	if (YesNo == "yes")
	{
		dov.OpenFile(Newfilename);
	};
	if (YesNo == "no")
	{
		cout << "Goodbye!";
	};
	
}