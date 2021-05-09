#include<iostream>
#include<fstream>
#include <windows.h>
using namespace std;
typedef long long int64;
double test;
char name[50],comm[50],testname[22][7],testna[22][7];
ifstream fin("HPPTTtest.dll",ios::in),fin1("data.txt",ios::in),//时间误差.
			fin3,fin32,fin33,fin34,fin35,fin36,fin37,fin38,fin39,fin310,
			fin41,fin42,fin43,fin44,fin45,fin46,fin47,fin48,fin49,fin410,
			f21,f22,f23,f24,f25,f26,f27,f28,f29,f210;
ofstream fout;
int fs=0,tot=0;
bool wa=false,tle=false;
bool check(int k)
{
	char b1,b2;
	switch(k)
	{
		case(1):
			fin3.open("test.out");
			fin41.open(testna[1]);
			if (fin3.eof()||fin41.eof()) return false;
			while((!fin3.eof())&&(!fin41.eof()))
			{
				b1=fin3.get();
				b2=fin41.get();
				if (b1!=b2) return false;
				if (fin3.eof()||fin41.eof())
				if(!(fin3.eof()&&fin41.eof())) return false;
			}
			fin3.close();
			fin41.close();
			return true;
		break;
		case(2):
			fin32.open("test.out");
			fin42.open(testna[2]);
			if (fin32.eof()||fin42.eof()) return false;
			while((!fin32.eof())&&(!fin42.eof()))
			{
				b1=fin32.get();
				b2=fin42.get();
				if (b1!=b2) return false;
				if (fin32.eof()||fin42.eof())
				if(!(fin32.eof()&&fin42.eof())) return false;
			}
			fin42.close();
			fin32.close();
			return true;
		break;
		case(3):
			fin33.open("test.out");
			fin43.open(testna[3]);
			if (fin33.eof()||fin43.eof()) return false;
			while((!fin33.eof())&&(!fin43.eof()))
			{
				b1=fin33.get();
				b2=fin43.get();
				if (b1!=b2) return false;
				if (fin33.eof()||fin43.eof())
				if(!(fin33.eof()&&fin43.eof())) return false;
			}
			fin33.close();
			fin43.close();
			return true;
		break;
		case(4):
			fin34.open("test.out");
			fin44.open(testna[4]);
			if (fin34.eof()||fin44.eof()) return false;
			while((!fin34.eof())&&(!fin44.eof()))
			{
				b1=fin34.get();
				b2=fin44.get();
				if (b1!=b2) return false;
				if (fin34.eof()||fin44.eof())
				if(!(fin34.eof()&&fin44.eof())) return false;
			}
			fin34.close();
			fin44.close();
			return true;
		break;
		case(5):
			fin35.open("test.out");
			fin45.open(testna[5]);
			if (fin35.eof()||fin45.eof()) return false;
			while((!fin35.eof())&&(!fin45.eof()))
			{
				b1=fin35.get();
				b2=fin45.get();
				if (b1!=b2) return false;
				if (fin35.eof()||fin45.eof())
				if(!(fin35.eof()&&fin45.eof())) return false;
			}
			fin35.close();
			fin45.close();
			return true;
		break;
		case(6):
			fin36.open("test.out");
			fin46.open(testna[6]);
			if (fin36.eof()||fin46.eof()) return false;
			while((!fin36.eof())&&(!fin46.eof()))
			{
				b1=fin36.get();
				b2=fin46.get();
				if (b1!=b2) return false;
				if (fin36.eof()||fin46.eof())
				if(!(fin36.eof()&&fin46.eof())) return false;
			}
			fin36.close();
			fin46.close();
			return true;
		break;
		case(7):
			fin37.open("test.out");
			fin47.open(testna[7]);
			if (fin37.eof()||fin47.eof()) return false;
			while((!fin37.eof())&&(!fin47.eof()))
			{
				b1=fin37.get();
				b2=fin47.get();
				if (b1!=b2) return false;
				if (fin37.eof()||fin47.eof())
				if(!(fin37.eof()&&fin47.eof())) return false;
			}
			fin37.close();
			fin47.close();
			return true;
		break;
		case(8):
			fin38.open("test.out");
			fin48.open(testna[8]);
			if (fin38.eof()||fin48.eof()) return false;
			while((!fin38.eof())&&(!fin48.eof()))
			{
				b1=fin38.get();
				b2=fin48.get();
				if (b1!=b2) return false;
				if (fin38.eof()||fin48.eof())
				if(!(fin38.eof()&&fin48.eof())) return false;
			}
			fin38.close();
			fin48.close();
			return true;
		break;
		case(9):
			fin39.open("test.out");
			fin49.open(testna[9]);
			if (fin39.eof()||fin49.eof()) return false;
			while((!fin39.eof())&&(!fin49.eof()))
			{
				b1=fin39.get();
				b2=fin49.get();
				if (b1!=b2) return false;
				if (fin39.eof()||fin49.eof())
				if(!(fin39.eof()&&fin49.eof())) return false;
			}
			fin39.close();
			fin49.close();
			return true;
		break;
		case(10):
			fin310.open("test.out");
			fin410.open(testna[10]);
			if (fin310.eof()||fin410.eof()) return false;
			while((!fin310.eof())&&(!fin410.eof()))
			{
				b1=fin310.get();
				b2=fin410.get();
				if (b1!=b2) return false;
				if (fin310.eof()||fin410.eof())
				if(!(fin310.eof()&&fin410.eof())) return false;
			}
			fin310.close();
			fin410.close();
			return true;
		break;
	}
	
}
double runtime(char *mz)
{
	LARGE_INTEGER sta,end,CPU;
	double endtime;
	QueryPerformanceFrequency(&CPU);//先测试CPU的频率.
	QueryPerformanceCounter(&sta);
	system(mz);
	QueryPerformanceCounter(&end);
	endtime=(double)((double)(end.QuadPart-(double)sta.QuadPart)/(double)CPU.QuadPart);
	return endtime;
}
void print1(int msa) //process print
{
	switch(msa)
	{
		case(1):
			cout<<"++>==>Please input the address or the name:"<<endl;
		break;
		case(2):
			cout<<"------>Version 0.1 Beta."<<endl;
			cout<<"------>Time CORE 0.1."<<endl;
			cout<<"------>Check CORE 0.1."<<endl;
			cout<<"------>Memory CORE 0.0.(is coming)."<<endl;
			cout<<"------>English Version."<<endl;
			cout<<"------>For Windows."<<endl;
			cout<<"------>Linux version is coming."<<endl;
			cout<<endl;
		break;
		case(3):
			cout<<"++>==>Please input the name:"<<endl;
		break;
	}
}
void print() //main print
{
	cout<<"++>Zhen Yi High Precision Program Running Time Tester(Beta)<++"<<endl;
	cout<<"++>Please input the command:"<<endl;
	cout<<"++>1.Check any program's running time."<<endl;
	cout<<"++>2.Test OI program."<<endl;
	cout<<"++>3.About this version."<<endl;
	cout<<"++>4.Exit."<<endl;
}

int work(char *proce);
int main()
{
	fin1>>tot;
	fin1.close();
	string name=" .in",na=" .out";
	for(int i=0;i<10;i++)
	{
		testname[i][0]=i+'0';
		for(int j=1;j<4;j++)
			testname[i][j]=name[j];
	}
	for(int i=10;i<20;i++)
	{
		testname[i][0]='1';
		testname[i][1]=i%10+'0';
		for(int j=2;j<5;j++)
			testname[i][j]=name[j-1];
	}
	for(int i=0;i<10;i++)
	{
		testna[i][0]=i+'0';
		for(int j=1;j<5;j++)
			testna[i][j]=na[j];
	}
	for(int i=10;i<20;i++)
	{
		testna[i][0]='1';
		testna[i][1]=i%10+'0';
		for(int j=2;j<6;j++)
			testna[i][j]=na[j-1];
	}
	print();
	fin>>test;
	fin.close();
	cin>>comm;
	cout<<endl;
	while(comm[0]!='4')
	{
		work(comm);
		print();
		cin>>comm;
		cout<<endl;
	}
	return 0;
}
int work(char *proce)
{
	switch(proce[0])
		{
			case('1'):
				double total;
				print1(1);
				cin>>name;
				cout<<endl;
				total=runtime(name);
				cout.setf(ios::fixed);
				cout.precision(10);
				cout<<"The program \""<<name<<"\" runs "<<total-test<<" seconds"<<endl;
				cout<<endl;
			break;
			case('2'):
				print1(3);
				char prona[50];
				double runt;
				cin>>prona;
				cout<<endl;
				cout<<"+>Your program:"<<prona<<" Runing:"<<endl;
				cout<<"|   NO.    |        TIME         |   SCORE   |"<<endl;
				for(int i=1;i<=tot;i++)
				{
					fout.open("test.in",ios::out);
					string temp="";
					char tem;
					switch(i)
					{
						case(1):
							f21.open(testname[1]);
							while(!f21.eof())
							{
								tem=f21.get();
								if(!f21.eof()) temp+=tem;
							}
							f21.close();
						break;
						case(2):
							f22.open(testname[2]);
							while(!f22.eof())
							{
								tem=f22.get();
								if(!f22.eof()) temp+=tem;
							}
							f22.close();
						break;
						case(3):
							f23.open(testname[3]);
							while(!f23.eof())
							{
								tem=f23.get();
								if(!f23.eof()) temp+=tem;
							}
							f23.close();
						break;
						case(4):
							f24.open(testname[4]);
							while(!f24.eof())
							{
								tem=f24.get();
								if(!f24.eof()) temp+=tem;
							}
							f24.close();
						break;
						case(5):
							f25.open(testname[5]);
							while(!f25.eof())
							{
								tem=f25.get();
								if(!f25.eof()) temp+=tem;
							}
							f25.close();
						break;
						case(6):
							f26.open(testname[6]);
							while(!f26.eof())
							{
								tem=f26.get();
								if(!f26.eof()) temp+=tem;
							}
							f26.close();
						break;
						case(7):
							f27.open(testname[7]);
							while(!f27.eof())
							{
								tem=f27.get();
								if(!f27.eof()) temp+=tem;
							}
							f27.close();
						break;
						case(8):
							f28.open(testname[8]);
							while(!f28.eof())
							{
								tem=f28.get();
								if(!f28.eof()) temp+=tem;
							}
							f28.close();
						break;
						case(9):
							f29.open(testname[9]);
							while(!f29.eof())
							{
								tem=f29.get();
								if(!f29.eof()) temp+=tem;
							}
							f29.close();
						break;
						case(10):
							f210.open(testname[10]);
							while(!f210.eof())
							{
								tem=f210.get();
								if(!f210.eof()) temp+=tem;
							}
							f210.close();
						break;
					}
					fout<<temp;
					fout.close();
					runt=runtime(prona);
					cout.setf(ios::fixed);
					cout.precision(10);
					cout<<"|   test"<<i<<"  |  runs:"<<runt-test<<"S |";
					if((runt-test)>1) {cout<<"     0    |"<<endl;tle=true;}
					else
					{
						if (check(i)) {cout<<"    10    |"<<endl;fs+=10;}
							else {cout<<"    0    |"<<endl;wa=true;}
					}
				}
				if(fs==100) cout<<"Congratulation!Accept!"<<endl;
				if(wa) cout<<"Wrong Answer!"<<endl;
				if(tle) cout<<"TLE!"<<endl;
				cout<<endl;
			break;
			case('3'):
				print1(2);
			break;
			case('4'):exit(0);
		}
	return 0;
}
