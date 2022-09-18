#include <iostream>
using namespace std;
int R[] = {5,11,65,95,23,2,36,8,55,62,1,35};
void QuickSort(int R[],int low,int high){
	int pivotpos = Partition(R,low,high);
	QuickSort(R,low,pivotpos-1);
	QuickSort(R,pivotpos+1,high);
}
int Partition(int R[],int low,int high){
	int pivot = A[low];
	while(low<high){
		while(low<high && A[high]>=pivot) --high;
		A[low] = A[high];
		while(low<high && A[low]<=pivot) ++low;
		A[high] = A[low];
	}
	A[low] = piovt;
	return low;
}


