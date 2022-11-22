	
	/*		Naame:		Azeem Siddique
	 * 		Roll No:	i19-1952
	 * 		Section:	PF-D
	 * 		PF-Lab Task # 09
	 */
	
#include <iostream>
using namespace std;

int main()
{
	int size=31, num;				/* Making variable "SIZE" to make program generic */
	
	int array_A[size]= {13, 99, 6, 76, 11, 83, 27, 84, 28, 67, 66, 22, 96, 46, 63, 21, 65, 48, 8, 14 , 84, 22, 28, 11, 83, 87, 11, 76,6,83,27};
	
	cout << "\n Enter Number to find element from the Array: ";
	cin >> num;
	
	if( num >= 0 && num < size)			/* Checking the Correct value of input */
	{
		
		cout << "\n The " << num << " Element of Array is: " << array_A[num-1] << endl;
	}
	else
	{
		cout << "\n Invalid Input. Please enter value between 0 to " << size << ". " << endl;
	}
	
	cout << endl;
	
	return 0;
}
