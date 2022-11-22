	
	/*		Naame:		Azeem Siddique
	 * 		Roll No:	i19-1952
	 * 		Section:	PF-D
	 * 		PF-Lab Task # 09
	 */
	
#include <iostream>
using namespace std;

int main()
{
	int size=31;				/* Making variable "SIZE" to make program generic */
	
	int array_A[size]= {13, 99, 6, 76, 11, 83, 27, 84, 28, 67, 66, 22, 96, 46, 63, 21, 65, 48, 8, 14 , 84, 22, 28, 11, 83, 87, 11, 76,6,83,27};
	
	cout << "\n Reversed Entries of Array = ";
	
	for ( int i=(size-1); i>=0; i--)			/* loop for displaying reverse entries of Array */
	{
		cout << "  ";
		cout << array_A[i];
	}
	
	cout << endl;
	
	return 0;
}
