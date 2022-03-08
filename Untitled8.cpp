#include<iostream>
using namespace std;

const int r=2, c=2;
template <class t>
class Matrix1{
       private:
	       t m[r][c];
	       t mm[r][c];
	public:
		void get_value () {
			cout<<"enter "<<r<<"*"<<c<<" values in first matrix: "<<endl;
			for (int i=0; i<r; i++) {
				for (int j=0; j<c; j++) {
					cin>>m[i][j];
				}
			}
			cout<<"\n enter "<<r<<"*"<<c<<" values in second matrix: "<<endl;
			for (int i=0; i<r; i++) {
				for (int j=0; j<c; j++) {
					cin>>mm[i][j];
				}
			}
		}
		void add () {
			t p[r][c];
		cout<<"addition of 2 matrices are: "<<endl;
			for (int i=0; i<r; i++) {
				for (int j=0; j<c; j++) {
					p[i][j] =m[i][j] +mm[i][j];
					cout<<p[i][j] <<" ";
				}
				cout<<endl;
			}
		}
		void sub () {
			t p[r][c];
			cout<<"subtraction of 2 matrices are: "<<endl;
			for (int i=0; i<r; i++) {
				for (int j=0; j<c; j++) {
					p[i][j] =m[i][j]-mm[i][j];
					cout<<p[i][j] <<" ";
				}
				cout<<endl;
			}
		}	
		void mul () {
			t p[r][c];
			cout<<"multiplication of 2 matrices are: "<<endl;
			for (int i=0; i<r; i++) {
				for (int j=0; j<c; j++) {
					p[i][j] =0;
					for (int k=0; k<c; k++) {
					p[i][j] += (m[i][j] *mm[i][j]);
				    }
				}
			}
			for (int i=0; i<r; i++) {
                for (int j=0; j<c; j++) {
                    cout<<" "<<p[i][j] <<" ";
					}
                cout<<endl;
				}	
		}
		void transpose () {
			t p[r][c];
		cout<<"transpose of first matrix: "<<endl;
			for (int i=0; i<r; i++) {
				for (int j=0; j<c; j++) {
					p[j][i] =m[i][j];
				}
			}
			for (int i=0; i<r; i++) {
				for (int j=0; j<c; j++) {
					cout<<p[i][j] <<" ";
				}
				cout<<endl;
			}
		cout<<"\n\n transpose of second matrix: ";
			for (int i=0; i<r; i++) {
				for (int j=0; j<c; j++) {
					p[j][i] =mm[i][j];
				}
			}
			for (int i=0; i<r; i++) {
				for (int j=0; j<c; j++) {
					cout<<p[i][j] <<" ";
				}
				cout<<endl;
			}
		}
};
int main () {
	Matrix1<int>m1;
	m1.get_value ();
	int choice;
	while (1) {
		cout<<"press 1 for sum"<<endl;
		cout<<"press 2 for difference"<<endl;
		cout<<"press 3 for product"<<endl;
		cout<<"press 4 for transpose"<<endl;
		cout<<"press 5 to exit"<<endl;
		cin>>choice;
		switch(choice) {
			case 1:
				m1.add ();
				break;
			case 2:
				m1.sub ();
				break;
			case 3:
				m1.mul ();
				break;
			case 4:
				m1. transpose ();
				break;
			case 5:
			cout<<"program halted by the user";
				exit (0);
			default:
				cout<<"invalid choice"<<endl;
				break;
		}
	}
	return 0;
}

