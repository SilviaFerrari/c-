#include <iostream>
#include "void-rubrica.cpp"
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
		
		if (key == 'a'){
			add_contact();
		}
		else if(key == 's'){
			search();
		}
		else if(key == 'r'){
			remove();
		}
		else if(key == 'e'){
			remove_all();
		}
		else if(key == 'q'){
			quit = true;
		}else{
			cout << "Comando non valido" << endl;
		}
	}while(quit == false); 	
}
