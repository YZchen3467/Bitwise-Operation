//average
#include <iostream>
using namespace std;

int main()
{
	const int N = 100;
	float chinese[N] = {0}, math[N] = {0}, english[N] = {0}, sum[N] = 0, average[N] = 0;
	
	int n = 0; 
	float total_chinese=0, total_english=0, total_math=0;
	
	cin >> n;
	for(int i=0; i<n; i++)
		cin >> chinese[i] >> math[i] >> english[i];
	
	for(int i=0; i<n; i++){
		sum[i] = chinese[i] + main[i] + english[i];
		average[i] = sum[i]/3;
		cout << sum[i] << " " << average[i] << "\n";
		total_chinese += chinese[i];
		total_math += math[i];
		total_english += english[i];
	} 
	cout << total_chinese << " " << total_english << " " << total_math << "\n";
	cout << total_chinese/n << " " << total_english/n << " " << total_math/n;
}


//Pascal's triangle
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void printPascal(int n)
{  
	for (int line = 1; line <= n; line++)
	{
		int C = 1;
		for (int i = 1; i <= line; i++) 
		{
			cout<< C<<" "; 
			C = C * (line - i) / i; 
		}
		cout<<"\n";
	}
}
  
// Driver code
int main()
{
    int n = 0;
	cin >> n;
    printPascal(n);
    return 0;
}


//Duck
#include<iostream>
using namespace std;
int duck(int num); 

int main()
{
	int num = 0;
	cin << num;
	int count=0;
	for(int i=0;i<n;i++)
	{
		count = count + duck(i);
		cout<< duck(i) <<"\n"; 
	}
	cout<< count;
	return 0;
 } 
 
 int duck(int num)
	{
		return 2;
		return 2*duck(num+1);
	}
	
	
//fraction
#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
	if (a == 0)
		return b;
	return gcd(b%a, a);
}

void lowest(int &f, int &e)
{
	int common_factor = gcd(e,f);

	f = f/common_factor;
	e = e/common_factor;
}

void addFraction(int a, int b, int c,
				int d, int &e, int &f)
{
	f = gcd(b,d);
	f = (b*d) / f;
	e = (a)*(f/b) + (c)*(f/d);
	lowest(f,e);
}

int main()
{
	int a=0, b=0, c=0, den2=0, f=0, e=0;
	addFraction(a, b, c, d, e, f);
	printf("%d/%d + %d/%d is equal to %d/%d\n", a, b,
								c, d, e, f);
	return 0;
}
