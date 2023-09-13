#include<iostream>
using namespace std;
#include<fstream>
//program to read write
//int main(){
//	ofstream fout;
//	fout.open("country.text");
//	fout<<"india\n";
//	fout<<"usa\n";
//	fout<<"uk\n";
//	fout.close();
//	fout.open("capital.text");
//	fout<<"delhi\n";
//	fout<<"wasington\n";
//	fout<<"london\n";
//	fout.close();
//}

//int main(){
//	const int n=80;
//	char s[n];
//	ifstream fin;//it will only read the file ifstream 
//	fin.open("country");
//	while(fin){
//		fin.getline(s,n);
//		cout<<S;
//		
//	}
//	
//	fin.close();
//	fin.open("capital");
//	while(fin){
//		fin.getline(s,n);
//		cout<<s;
//		
//	}
//	fin.close();
//}

//append mode
//int main(){
//	char s[30];
//	ofstream fileout;
//	ifstream filein;
//	fileout.open("data",ios::app);
//	fileout<<"hello world";//it will print hello world on console
//	fileout.close();
//	filein.open("data",ios::in);
//	filein.getline(s,30);
//	cout<<s;
//}

//int main(){
//	char s[30];
//	ofstream fileout;
//	fstream file;
//	fileout.open("hello",ios::out);
//	fileout<<"hello world";
//	fileout.close();
//	file.open("hello",ios::in|ios::out);
//	cout<<file.tellg();
//	cout<<file.tellp();
//	file.seekp(6);
//	file.seekg(6);
//	cout<<file.tellg();
//	cout<<file.tellp();
//	file>>s;
//	cout<<s;
//}
#include<string.h>
//int main(){
//	char s[80];
//	cout<<"enter a string: ";
//	cin>>s;
//	int len=strlen(s);
//	fstream file;
//	file.open("test",ios::in|ios::out);
//	for(int i=0;i<len;i++)
//	file.put(s[i]);
//	file.seekg(0);
//	char ch;
//	while(file){
//		file.get(ch);
//		cout<<ch;
//		
//	}
//	return 0;
//}

//int main(){
//	float height[4]={17.5,15.0,3.8,5.0};
//	ofstream outfile;
//	outfile.open("abc");
//	outfile.write((char *)height,sizeof(height));
//	outfile.close();
//	float p[4];
//	ifstream infile;
//	infile.open("abc");
//	infile.read((char *)p,32);
//	cout<<p[0]<<p[1];
//	return 0;
//	}

class student{
	char name[30];
	int roll;
	float marks;
	public:
		void getdata(){
			cout<<"enter name: ";
			cin>>name;
			cout<<"roll: ";
			cin>>roll;
			cout<<"marks: ";
			cin>>marks;
			
		}
};
