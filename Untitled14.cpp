#include<iostream>
#include<fstream>
#include<cstdlib>
using namespace std;
int main () {
	ifstream ftxt;
	ofstream ctxt;
	ctxt.open("utxt.txt");
	ftxt.open("book.txt");
	if (! ftxt) {
		cerr<<"Error 100 in opening book.txt\n";
		exit (100);}
	if (! ctxt) {
		cerr<<"Error 100 in opening book.txt\n";
		exit (100);
	}
	char ch;
	int counter=0;
	while(ftxt.get(ch)) {
		ctxt.put(ch);
		counter++;}
	ftxt. close ();
	ctxt. close ();
}



