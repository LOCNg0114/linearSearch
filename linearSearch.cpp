#include <iostream>
#include <fstream>
using namespace std;
int linearSearch(int *a, int key, int sizeofArray)
{
/* ITERATION METHOD
    int i;
    for ( i = 0; i < sizeofArray; i++) 
        if (a[i] == key) 
            return i; 
    return -1; 
	*/
// RECURSIVE METHOD
	if(a[sizeofArray] = -1) return -1;
	if(a[sizeofArray] = key) return sizeofArray;
	else linearSearch(a, key, sizeofArray--);

}

// you should remove element in array
// function return array
int* removeElement(int *a, int &n, int position){
/* ITERATION METHOD
    int i;  
    for (i = position; i < n - 1; i++) {
        a[i] = a[i + 1];  
		
	}
	n = n - 1;
    return a;  
*/
// RECURSIVE METHOD
	if(position >= n - 1){ // shift from position and delete the left over number 
		n = n - 1;
		return a;
	}
	a[position] = a[position + 1];
	removeElement(a, n, position + 1);// increase the index as iteration way
}
 

int main(int narg, char** argv)
{
	ifstream ifs;
	ifs.open("testcase.txt");

	int N, M, position;
	ifs >> N;
	ifs >> M;
	ifs >> position;
    int i = 0;
	int *a = new int[N];
	try {

		while (ifs >> a[i])
		{
			i++;
		}
		cout << linearSearch(a, M, N) << endl;
		int* newA = removeElement(a, N, position);
		for(int i = 0; i < N; i++) {
			cout << newA[i] << " ";
		}
		cout << endl;
	}
	catch (char const* s)
	{
		printf("An exception occurred. Exception type: %s\n", s);
	}

	ifs.close();
	return 0;
}
