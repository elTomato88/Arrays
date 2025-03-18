#include <iostream>
using namespace std;

//#define SHIFT
//#define BINARY

int main()
{
#ifdef SHIFT

	int second_array[10] = {0,1,2,3,4,5,6,7,8,9};
	int shift_number;
	cout << "Please, enter the shift number: " << endl;
	cin >> shift_number;
	int half_result_array[10];
	int result_array[10];
	shift_number %= 10;
	
	for (int i= 0; i < 10; i++)
	{
		half_result_array[(i + shift_number) % 10] = second_array[i];
		result_array[(10+i - shift_number) % 10]= second_array[i];
	}
	for (int i = 0; i < 10; i++)
	{
		cout << second_array[i] << " ";

	}
	cout << endl;
	cout << "-->" << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << half_result_array[i] << " ";

	}
	cout << endl;
	cout << "<--" << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << result_array[i] << " ";

	}
	
#endif
#ifdef BINARY



	int number;
	int binary[32];
	int stop_signal;
	int hexadecimal[32];
	int backup;

	for (int i = 0; i < 32; i++) { binary[i] = 0; }
	cout << "Please, enter the number: ";
	cin >> number;
	backup = number;
	for (int i = 0; i < 32 && number != 0; i++)
	{
		binary[i] = number % 2;

		number /= 2;
		if (!number) stop_signal = i;
	}
	cout << "binary: ";
	for (int i = stop_signal; i >= 0; i--)
	{
		cout << binary[i];
	}
	cout << endl;
	number = backup;
	for (int i = 0; i < 32 && number != 0; i++)
	{
		hexadecimal[i] = number % 16;

		number /= 16;
		if (!number) stop_signal = i;
	}
	cout << "hexadecimal: ";
	for (int i = stop_signal; i >= 0; i--)
	{
		switch (hexadecimal[i])
		{
		case 10:
			cout << "A";
			break;
		case 11:
			cout << "B";
			break;
		case 12:
			cout << "C";
			break;
		case 13:
			cout << "D";
			break;
		case 14:
			cout << "E";
			break;
		case 15:
			cout << "F";
			break;
		default:
			cout << hexadecimal[i];
			break;
		}

	}
#endif 
	return 0;
}