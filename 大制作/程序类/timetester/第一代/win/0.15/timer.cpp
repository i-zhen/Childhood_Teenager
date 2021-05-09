#include<fstream>
#include<windows.h>
using namespace std;
ofstream FS("score.dll");
double runtime(char *mz)
{
	LARGE_INTEGER sta,end,CPU;
	double endtime;
	QueryPerformanceFrequency(&CPU);
	QueryPerformanceCounter(&sta);
	system(mz);
	QueryPerformanceCounter(&end);
	endtime=(double)((double)(end.QuadPart-(double)sta.QuadPart)/(double)CPU.QuadPart);
	return endtime;
}
int main()
{
	char name[50];
	double testt;
	int k,lim;
	ifstream fin("temp_time.dll",ios::in);
	ofstream fout("answer.dll",ios::app);
	fin>>name;
	fin>>testt>>k>>lim;
	fout.precision(10);
	fout.setf(ios::fixed);
	testt=runtime(name)-testt;
	fout<<"|   TEST"<<k;
	if(testt-lim<=0){
		fout<<"  |    "<<testt<<"     |";
		FS<<"n"<<endl;
	}
	else{
		fout<<"  |         TLE         |";
		FS<<"t"<<endl;
	}
	return 0;
}
