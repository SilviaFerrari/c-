#include <bits/stdc++.h> 
#include <vector> 
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
using namespace std;
 
string first_name;
string last_name;
int number;

vector<int>phone; 
vector<string>name;
vector<string>surname;

char key;
int choise;
int control;
int quit = false;

void random_name()
{
	int i = 0;
	string random_name[10] = {"Bianca", "Alice", "Marco", "Simone", "Mauro", "Giovanni", "Andrea", "Federica", "Max", "Licia"};
	while(i++ < 40) 
	{
		int r = (rand() % 10);
		string element = random_name[r];
		name.push_back(element);
	}
}

void random_surname()
{
	int i = 0;
	string random_surname[10] = {"Greco", "Conti", "Ricci", "Ferri", "Costa", "Galli", "Serra", "Parisi", "Villa", "Riva"};
	while(i++ < 40) 
	{
		int r = (rand() % 10);
		string element = random_surname[r];
		surname.push_back(element);
	} 
}

void random_number(){
	int i = 0;
	while(i++ < 40) 
	{
		int r = (rand() % 32000) + 35897389;
		phone.push_back(r);
	}
}

void print_vector()
{
	cout << "I TUOI CONTATTI" << endl << endl; 
    for (int i = 0; i < name.size(); i++)
	{
		cout << name[i] << " "
		<< surname[i] << " "
		<< phone[i] << " " 
    	<< endl;
	}          
}

void check()
{
	control = 0;
	for (int i = 0; i < name.size(); i++)
		{
	    	for (int e = 0; e < surname.size(); e++)
			{
	    		if(name[i] == first_name and surname[e] == last_name and i == e)
				{
	    			control = 1;
				}else if(phone[e] == number and i == e)
				{
					control = 2;
				}
			}
		}
}

void random_check()
{
	for(int j = 0; j < name.size(); j++)
	{
		first_name = name[j];
		last_name = surname[j];
		number = phone[j];
		
		for (int i = 0; i < name.size(); i++)
		{
	    	for (int e = 0; e < surname.size(); e++)
			{
	    		if(name[i] == first_name and surname[e] == last_name and i == e)
				{
	    			name.erase(name.begin() + i);
	    			surname.erase(surname.begin() + e);
	    			phone.erase(phone.begin() + e);
				}else if(phone[e] == number and i == e)
				{
					name.erase(name.begin() + i);
	    			surname.erase(surname.begin() + e);
	    			phone.erase(phone.begin() + e);
				}
			}
		}
	}
}

void main_page()
{
	cout << endl;
	print_vector();
	cout << endl
	<< "A - aggiungi contatto" << endl
	<< endl
	<< "S - cerca contatto" << endl
	<<endl
	<< "R - elimina contatto" << endl 
	<< endl
	<< "E - elimina rubrica" << endl 
	<< endl
	<< "Q - esci" << endl 
	<< endl;
}

void add_contact()
{
	cout << "Inserisci il nome del contatto" << endl;
    cin >> first_name;
    cout << "Inserisci il cognome" << endl;
    cin >> last_name;
    cout << "Inserisci il numero" << endl;
    cin >> number;
    
    check();
    if(control == 1)
    {
    	cout << endl;
    	cout << "Impossibile salvare il contatto, nome e cognome esistenti." << endl
    	<< "Premere A per riprovare o M per tornare alla rubrica." << endl;
    	cin >> key;
    	if(key == 'a')
    	{
    		add_contact();
		}else if(key == 'm')
		{
			main_page();
		}
	}else if(control == 2)
	{
		cout << endl;
    	cout << "Impossibile salvare il contatto, numero esistente." << endl
    	<< "Premere A per riprovare o M per tornare alla pagina principale." << endl;
    	cin >> key;
    	if(key == 'a')
    	{
    		add_contact();
		}else if(key == 'm')
		{
			main_page();
		}
	}else if(control == 0)
	{
		name.push_back(first_name);
    	surname.push_back(last_name);
    	phone.push_back(number);
		cout << endl;
		main_page();
	}
}

//funzione ancora da fare per ultimare il programma
void change(){
	cout << "Inserisci il nome del contatto" << endl;
    cin >> first_name;
    cout << "Inserisci il cognome" << endl;
    cin >> last_name;
    cout << "Inserisci il numero" << endl;
    cin >> number;
}

void search()
{
	cout << "1 - ricerca tramite nome" << endl
	<< "2 - ricerca tramite cognome" << endl
	<< "3 - ricerac tramite numero" << endl;
	cin >> choise;
	cout << endl;
	
	if(choise == 1)
	{
		cout << "Digita il nome del contatto da cercare:" << endl;
		cin >> first_name;
		cout << endl << "Risultato della ricerca:"<< endl << endl;
		for (int i = 0; i < name.size(); i++)
		{
		    if(name[i] == first_name)
			{
				cout << name[i] << " "
				<< surname[i] << " "
				<< phone[i] << " "
	    		<< endl;
	    	}
		}
	}else if(choise == 2)
	{
		cout << "Digita il cognome del contatto da cercare:" << endl;
		cin >> last_name;
		cout << endl << "Risultato della ricerca:"<< endl << endl;
		for (int i = 0; i < surname.size(); i++)
		{
		    if(surname[i] == last_name)
			{
				cout << name[i] << " "
				<< surname[i] << " "
				<< phone[i] << " "
	    		<< endl;
	    	}
		}
	}else if(choise == 3)
	{
		cout << "Digita il numero del contatto da cercare:" << endl;
		cin >> number;
		cout << endl << "Risultato della ricerca:"<< endl << endl;
		for (int i = 0; i < phone.size(); i++)
		{
		    if(phone[i] == number)
			{
				cout << name[i] << " "
				<< surname[i] << " "
				<< phone[i] << " "
	    		<< endl;
	    	}
		}
	}
	cout << endl
	<< "S - ripeti la ricerca"<< endl
	<< "M - torna alla rubrica" << endl;
	cin >> key;
	
	if(key == 's'){
    	search();
	}else if(key == 'm'){
		main_page();
	}
}

void remove()
{
	cout << "Inserisci il nome del contatto" << endl;
    cin >> first_name;
    cout << "Inserisci il cognome del contatto" << endl;
    cin >> last_name;
    
    for (int i = 0; i < name.size(); i++)
		{
	    	for (int e = 0; e < surname.size(); e++)
			{
	    		if(name[i] == first_name and surname[e] == last_name and i == e)
				{
	    			name.erase(name.begin() + i);
	    			surname.erase(surname.begin() + e);
	    			phone.erase(phone.begin() + e);
				}
			}
		}
}

void remove_all()
{
	name.clear();
	surname.clear();
	phone.clear();
}
