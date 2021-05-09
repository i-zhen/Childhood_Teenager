#include<iostream>
#include<fstream>
#include <windows.h>
#include<cstring>
using namespace std;
typedef long long int64;
double test;
char name[50],comm[50],testname[22][7],testna[22][7];
ifstream fin("HPPTTtest.dll",ios::in),finans,fenshu;//时间误差.
ofstream fout_time,fout_file,fout_write,fout_ans;
double ttt;
int tot=0,Lim;
string tout,FS;
long zonghe=0;
void print1(int msa) //process print
{
	switch(msa)
	{
		case(1):
			cout<<"++>==>Please input the address or the name:"<<endl;
		break;
		case(2):
			cout<<"------>Version 0.15 Beta."<<endl;
			cout<<"------>Timer CORE 0.15."<<endl;
			cout<<"------>Checker CORE 0.15."<<endl;
			cout<<"------>Writer CORE 0.15."<<endl;
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
	print();
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
				print1(1);
				cin>>name;
				cout<<endl;
				fout_time.open("temp_time.dll");
				fout_time<<name<<endl;
				fout_time<<ttt<<endl;
				system("timer.exe");
				cout<<endl;
			break;
			case('2'):
				zonghe=0;
				print1(3);
				char prona[50];
				cin>>prona;
				cout<<endl;
				fin>>ttt;
				fin>>Lim;
				fin>>tot;
				fout_ans.open("answer.dll");
				fout_ans<<"+>Your program:"<<prona<<" Runing:"<<endl;
				fout_ans<<"|   NO.    |        TIME         |   ANSWER   |"<<endl;
				fout_ans.close();
				for(int i=1;i<=tot;i++)
				{
					fin>>testname[i]>>testna[i];
					cout<<"TESTing "<<i<<" :"<<testname[i]<<' '<<testna[i]<<" DONE"<<endl;
					//write
					fout_write.open("temp_write.dll");
					fout_write<<testname[i]<<endl;
					system("write.exe");
					fout_write.close();
					//timer
					fout_time.open("temp_time.dll");
					fout_time<<prona<<endl;
					fout_time<<ttt<<endl;
					fout_time<<i<<endl;
					fout_time<<Lim<<endl;
					system("timer.exe");
					fout_time.close();
					//checker
					fout_file.open("temp_file.dll");
					fout_file<<testna[i]<<endl;
					system("checker.exe");
					fenshu.open("score.dll");
					fenshu>>FS;
					if(FS[0]=='n'){
						fenshu>>FS;
						zonghe+=(FS[0]=='1'?10:0);
					}
					fenshu.close();
					fout_file.close();
				}
				cout<<"ALL DONE!Please check the answer by yourself."<<endl;
				finans.open("answer.dll");
				while(!finans.eof()){
					getline(finans,tout);
					cout<<tout<<endl;
				}
				if(zonghe==tot*10) cout<<"Congratulations!You're AC!"<<endl;
					else cout<<"Wrong Answer!Your score is:"<<zonghe<<endl;
				cout<<endl;
				finans.close();
				fout_ans.close();
			break;
			case('3'):
				print1(2);
			break;
			case('4'):exit(0);
		}
	return 0;
}
