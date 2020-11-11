#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>
#include <stdio.h>

using namespace std;

typedef struct {
	float rai;
	float ngan;
	float sqwa;
}Landarea;

Landarea convertarea(float* total)
{
	Landarea area;
	
	area.sqwa = *total / 4;
	area.ngan = *total / 400 ;
	area.rai = *total / 1600;
	 
 	return area;
}

int main()
{
	float Width;
	float Long;
	cout << " Enter width of Area : ";
	cin >> Width;
	cout << " Enter long of area : ";
	cin >> Long;

	float squareMeter;
	squareMeter = Width * Long;

	Landarea area = convertarea(&squareMeter);

	float Area[] = { area.rai,area.ngan,area.sqwa };

	

	if (Area[0] >= 0 && Area[1] >= 0 && Area[2] >= 0)
		{
			cout << " Rai = " << Area[0] << endl;
			cout << " Ngan = " << Area[1] << endl;
			cout << " Square Wa = " << Area[2] << endl;
		}

	else 
	{

		cout << " No space in this area. " << endl;
	}


	return 0;
}