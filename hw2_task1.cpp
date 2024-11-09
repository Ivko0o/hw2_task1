#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;

bool CheckCompatibility(int arrayOne[], int arrayTwo[], int first_Array_Length, int second_Array_Length);

int main()
{
	int first_Array[5] = {1, 2, 2, 4, 6};
	int second_Array[3] = {2, 4, 4};

	int first_Array_Length = sizeof(first_Array) / sizeof(first_Array[0]);			//Checks the length of the array - smetnal sym go tuk zashtoto dava greshen rezultat
	int second_Array_length = sizeof(second_Array) / sizeof(second_Array[0]);		//									ako go smetna v drugata funkciq
																					
	cout << CheckCompatibility(first_Array, second_Array, first_Array_Length, second_Array_length);


}

bool CheckCompatibility(int first_Array[], int second_Array[], int first_Array_Length, int second_Array_Length) {

	int number_Exists = 0;				//Needed to count the number of compatible numbers
	int possition_In_Array = 0;			//Needed 

	int i = 0;

		for (int j = possition_In_Array; j < first_Array_Length; j++) {
			if (second_Array[i] == first_Array[j]) {
				number_Exists++;
				i++;								//Will be used to switch to the 2nd position in the 2nd array
				possition_In_Array = j+1;			//Will be used to switch to the next position in the 1st array
			}
		}

		//Checks if both arrays are compatible
		if (number_Exists == second_Array_Length) {
			return 1;
		}
		else {
			return 0;
		}

}