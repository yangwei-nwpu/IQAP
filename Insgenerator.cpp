#include<iostream> 
#include<fstream>
#include<random>  
#include<time.h>  
#include<string>
using std::cout;
using std::endl;
using std::cin;
using namespace std;
int **A, **B;
int row, col;
string file = "Instances/IQAP/biclique";


void rando() {//Type III : It is named in the form "rand-m", for examplex "rand200"
	int distance;
	const int SEED = 1;
	default_random_engine dre(SEED);
	uniform_int_distribution<int> d(0, 100);

	//path1 = file1 + to_string(N) + ".txt";
	//path2 = file2 + to_string(N) + ".txt";
	//ofstream out2(path2);
	for (int i = 0; i < N; i++)
	{
		if (i == 0) {
			for (int j = 0; j < N; j++)
			{
				if (j == i || j == N - 1) {
					//out2 << "1 ";
					A[i][j] = 1;
				}
				//else out2 << "0 ";
				else A[i][j] = 0;

			}
			//out2 << endl;
		}
		else {
			for (int j = 0; j < N; j++)
			{
				if (j == i - 1 || j == i) {
					//out2 << "1 ";
					A[i][j] = 1;
				}
				//else out2 << "0 ";
				else A[i][j] = 0;
			}
			//out2 << endl;
		}
	}
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			//out2 << d(dre) << " ";
			B[i][j] = d(dre);
		}
		//out2 << endl;
	}
	//out2.close();
}
void biclique() {//Type IV : It is named in the form "biclique-m", for examplex "biclique200"
	std::default_random_engine random(1);
	std::uniform_int_distribution<int> dis1(-50, 150);
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			B[i][j] = dis1(random);
		}
	}
	int  xx = row / 2;
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			A[i][j] = 0;
			if (i < xx && j < xx) {
				A[i][j] = 1;
			}
		}
	}
}
void Large_Random() {//Type VI : It is named in the form "l-m", for examplex "l200"
	srand(1);
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			A[i][j] = rand() % 301 - 100;//[-100,200]
		}
	}

	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			B[i][j] = rand() % 50 + 1;//[1,50]
		}
	}
}
void Random() {//m is not equal to n //Type V: It is named in the form "g-m-x-n", for example "g100x200"
	srand(1);
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			A[i][j] = rand() % 101;//[0,100]
		}
	}

	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			B[i][j] = rand() % 101;//[0,100]
		}
	}
}
int main()
{
	row = 500;
	col = 500;

	//std::uniform_real_distribution<double> dis2(0.0, 1.0);
	A = new int *[row];
	B = new int *[row];
	for (int i = 0; i < row; i++) {
		A[i] = new int[col];
		B[i] = new int[col];
	}
	biclique();
	//Large_Random();
	//Random();
	//file = file + to_string(row) + "x" + to_string(col) + ".txt";//m is not equal to n
	file = file + to_string(row) + ".txt";//m equal to n
	ofstream fp(file);

	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			fp << A[i][j] << " ";
		}
		fp << endl;
	}
	fp << endl;
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			fp << B[i][j] << " ";
		}
		fp << endl;
	}
	fp.close();
	system("pause");
	return 0;
}
