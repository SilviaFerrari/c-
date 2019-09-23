#include <iostream>
#include <fstream>
#include <string>
#include "void.cpp"
using namespace std;
int main()
{ 	
	random_name();
    random_surname();
    random_number();
    random_check();
    
	cout << "Ti diamo il benvenuto nella tua rubrica personale." << endl
	<< "Premi un tasto qualunque per visualizzare i tuoi contatti." << endl;
	cin >> key;
	do
	{
		main_page();
		cin >> key;
		cout << endl;
		
		switch(key)
		{
			case 'a':
				add_contact();
				break;
			
			case 's':
				search();
				break;
			
			case 'r':
				remove();
				break;
			
			case 'e':
				remove_all();
				break;
			
			case 'q':
				quit = true;
				break;
		}
		
	}while(quit == false); 	
}
