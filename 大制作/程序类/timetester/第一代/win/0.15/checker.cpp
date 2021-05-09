#include<fstream>
#include<cstring>
using namespace std;
ifstream fin1("test.out"),fin2,ftemp;
ofstream fout("answer.dll",ios::app),FS("score.dll",ios::app);
char name[50],nout[50];
bool check()
{
	char b1,b2;
	fin2.open(name);
	if (fin1.eof()||fin2.eof()) return false;
	while((!fin1.eof())&&(!fin2.eof()))
	{
		b1=fin1.get();
		b2=fin2.get();
		if (b1!=b2) return false;
		if (fin1.eof()||fin2.eof())
		if(!(fin1.eof()&&fin2.eof())) return false;
	}
	fin1.close();
	fin2.close();
	return true;
}
int main()
{
	ftemp.open("temp_file.dll");
	ftemp>>name;
	ftemp.close();
	if (check()){
		fout<<"    Yes     |"; 
		FS<<1<<endl;
		}else{ 
		fout<<"     No     |";
		FS<<0<<endl;
	}
	fout<<endl;
		return 0;
}
