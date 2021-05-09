#include<fstream>
#include<cstring>
using namespace std;
ofstream fout("test.in");
ifstream ftemp,fin;
char name[50],k;
string ans="";
int main()
{
	ftemp.open("temp_write.dll");
	ftemp>>name;
	ftemp.close();
	fin.open(name);
	while(!fin.eof())
	{
		k=fin.get();
		if(!fin.eof()) ans+=k;
	}
	fout<<ans;
	return 0;
}
