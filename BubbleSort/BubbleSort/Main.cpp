#include <iostream>
using namespace std;

/*

*/


int main()
{
	int iArray[10] = {23, 78, 1, 90, 45, 16, 83, 61, 59, 39};
	bool blSwap; //flag to store whether or not a swap occured
	int count = 0;

	//bubble sort routine

	//loop for number of elements
	for (int x = 0; x < +9; x++)
	{
		blSwap = false; //reset the flag to false

		//loop through the array
		for (int y = 0; y <= 8; y++) //loop to last index - 1
		{
			count++;
			
			//compare current element ot next element
			// > for ascending (Least to Greatest)
			// < for descending (Greatest to Least)
			if (iArray[y] > iArray[y + 1])
			{
				int iSwap; //need a swap varaiable, must match array dataType
				
				iSwap = iArray[y]; //do the swap variable first

				iArray[y] = iArray[y + 1]; //1st index is safe, therefore safe to swap
				
				iArray[y + 1] = iSwap; //finally take swap variable and store in 2nd spot
				
				blSwap = true; //a swap happened, set the flag
			}

		}//end of the inner loop

		if (blSwap == false) //if swap never happened, array sorted
			break; //jump out of the outer loop

	} // end of the bubble sort

	//dispay the contents of the array
	for (int x = 0; x <= 9; x++)
		cout << iArray[x] << endl;

	cout << "There were " << count << " iterations" << endl;

	return 0;
}