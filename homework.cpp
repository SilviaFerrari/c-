#include <iostream>
#include <math.h>
#include <algorithm>
#include <bits/stdc++.h> 
#include <vector>
using namespace std;

//ES 1
/*int a,b;
int main(){
	cout << "inserisci due numeri interi" << endl;
	cin >> a;
	cin >> b;
	cout << a + b << endl;
}*/

//ES 2
/*int a,b;
char c;
int main(){
	cout << "inserisci due numeri interi" << endl;
	cin >> a;
	cin >> b;
	cout << "inserisci l'operazione da eseguire tra: + - * / ^" << endl;
	cin >> c;
	if(c == '+')cout << a + b << endl;
	if(c == '-')cout << a - b << endl;
	if(c == '*')cout << a * b << endl;
	if(c == '/')cout << a / b << endl;
	if(c == '^')cout << pow(a,b) << endl;
}*/

//ES 3
/*int a,b;
int main(){
	cout << "inserisci due numeri" << endl;
	cin >> a;
	cin >> b;
	if(b%a == 0){cout << b << " e' multiplo di " << a << endl;}
	else{cout << "B non e' multiplo di A" << endl;}
}*/

//ES 4
/*int q = true;
char choice;
void menu(){
	cout << endl << "1 - calcolo del fattoriale di un numero intero positivo" << endl
	<< "2 - calcolo della potenza N-esima di un numero intero positivo" << endl
	<< "3 - esci" << endl;
	cin >> choice;
}
void fattoriale(){
	int n;
	double fat = 1;
	cout << "inserire un numero intero positivo per calcolarne il fattoriale: ";
	cin >> n;
	if(n > 0){
		while(n > 0){
			fat *= n; 
			n--;
		}
		cout << "il fattoriale del numero vale: " << fat << endl;
	}
	else {cout << "non è possibile calcolare il fattoriale di un numero negativo" << endl;
	}
}
void potenza(){
	int a,b;
	cout << "inserisci due numeri" << endl;
	cin >> a;
	cin >> b;
	cout << "la potenza e': " << pow(a,b) << endl;
}
int main(){	
	while(q){
		menu();
		switch(choice){
			case '1':
				fattoriale();
				break;
			case '2':
				potenza();
				break;
			case '3':
				q = false;
		}
	}	
}*/

//ES 5
/*int x,y;
double fat = 1, pot;
void calc1(){
	int n = x;
	if(n > 0){
		while(n > 0){
			fat *= n; 
			n--;
		}
		cout << "il il prodotto dei primi " << x << " numeri vale: " << fat << endl;
	}
}
void calc2(){
	pot = pow(3,y);
	cout << "il risultato di 3^" << y << " e': " << pot << endl;
}
void rapp(){
	cout << "il rapporto fra i due numeri e': "<< fat / pot << endl;
}
int main(){
	cout << "inserisci due numeri X e Y" << endl;
	cin >> x;
	cin >> y;
	calc1();
	calc2();
	rapp();
}*/

//ES 6
/*vector<int>number;
int position, average, over_average, first, max_num = 0;
int main(){
	for(int i = 1; i <= 20; i++){number.push_back(i);}
	for(int i = 0; i < number.size(); i++){
		cout << " " << number[i];
	}
	cout << endl;
	for(int i = 0; i < number.size(); i++){
		if(i%2 == 0){cout << " " << number[i];}
	}
	cout << endl;
	for(int i = 0; i < number.size(); i++){
		if(number[i] >= 0){number[i]++;}
		else{number[i]--;}	
	}
	for(int i = 0; i < number.size(); i++){
		cout << " " << number[i];
	}
	cout << endl << "digita la posizione dell'elemento da visualizzare: ";
	cin >> position;
	if(position < 20){cout << number[position];}
	else{cout << "non è presente questa posizione" << endl;}
	cout << endl;
	cout << "i numeri superiori alla media sono: ";
	for(int i = 0; i < number.size(); i++){average += number[i];}
	average = average / 20;
	for(int i = 0; i < number.size(); i++){
		if(number[i] > average){
			over_average++;
			cout << " "<< number[i];
		}
	}
	cout << endl << "in totale sono: " << over_average << endl << endl;
	first = number[0];
	number[0] = number[19];
	number[19] = first;
	for(int i = 0; i < number.size(); i++){
		cout << " " << number[i];
	}
	for(int i = 0; i < number.size(); i++){
		if(number[i] > max_num){
			max_num = number[i];
		}
	}
	cout << endl << "il numero maggiore e': " << max_num << " in posizione ";
	for(int i = 0; i < number.size(); i++){
		if(number[i] == max_num){
			cout << " " << i;
		}
	}
}*/








#include<assert.h>
#include<cstdlib>
#include<iostream>
using namespace std;
//ES 12
/*int a, b, prod;
int main(){
	freopen("input1","r",stdin);
	freopen("output1", "w", stdout);
	assert(2 == scanf("%d %d", &a, &b));
	if(a > 0 && b > 0){
		for(int i = 0; i < b; i++ ){
			prod += a;
		}
	}
		
  printf("%d", prod);
  return 0;
}*/
//ES 13
/*int l = 12;
int d = 4;
for(int i = 0; i < l; i++){
	if(i == 0 || i == l-1){
		for(int e = 0; e < l; e++){
			cout >> "*";
		}
	}else if(i)
	 
}
*/

//ES 14
/*const int dim=30;
typedef int matrice[dim][dim];

int main(){
	matrice m1;
	int i,j,n;
	//dimensione matrice
	do{
		cout<<"Inserisci la dimensione delle matrici"<<endl;
		cin>>n;
	}
	while(n>dim);
	cout<<endl;
	//inizializzazione prima riga
	m1[0][0]=1;
	for(j=1;j<n;j++)
		m1[0][j]=0;
	//calcolo le righe successive
	for(i=1;i<n;i++)
	{
		m1[i][0]=1;
		for(j=1;j<n;j++)
			m1[i][j]=m1[i-1][j-1]+m1[i-1][j];
	}
	//lettura
	for(i=0;i<n;i++)
	{
		for(j=1;j<(n);j++) 
			cout<<" ";
		for(j=0;j<=i;j++)
			cout<<m1[i][j]<<" ";
			cout<<endl;
	}
	return 0;
}*/
//ES 15
/*int n = 100;
int g = 0;
int main(){
	for(int i = 1; i < 2*n; i+=2){
		cout << i << " ";
		g++;
		if(g == 5){
			cout << endl; 
			g = 0;
		}		
	}
}*/
//ES 16
/*int n;
int m = 12;
int main(){
	cout << "inserisci un numero" << endl;
	cin >> n;
	for(int i = 1; i <= m; i++){
		cout << n << "*" << i << "=" << n*i << endl;
	}
}*/
