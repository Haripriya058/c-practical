#include<iostream>
#include<string>
using namespace std;

int main(int argc,char*argv[])
{
	string str = " ";
	static int alphabet[26];
	int x;
	
	cout << "\n Command Line argument\n";
	for(int i=0; i<argc; i++)
	{
		cout << endl << argv[i];
		str += argv[i];
	}
	
	for(int i=0; i<str.length(); i++)
	{
		if(str[i]>='A' && str[i]<='Z')
            {
                x=((int)str[i])-65;
                alphabet[x]++;
            }
        else if(str[i]>='a' && str[i]<='z')
            {
                x=((int)str[i])-97;
                alphabet[x]++;
            }
    }
 


    //Displaying No. of occurrences of each alphabets in the command line argument
    cout<<"\n\n~~~~~\n Alphabet No. of Occurrences\n~~~~~";
    for(int i=0;i<26;i++)
    {
        cout<<"\n  "<<(char)(65+i)<<" "<<alphabet[i];
    }


    system("pause");
    return 0;
}

