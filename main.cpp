 #include <iostream>
void bubbleSort(int arr[], int size)
{
	int tmp = 0;
	for(int i=0; i < size - 1; ++i)
	{
		for(int j=0; j < size - i - 1; ++j)
		{
			if(arr[j] < arr[j + 1]) 
			{
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
}
// 新增排序方法quickSort-快速排序
void quickSort(int arr[], int l, int r)
{
	if(l >= r)
		return;
	int i = l;
	int j = r;
	int idx = l + (rand() % (r - l + 1));
	int temp = arr[idx];
	swap(arr[l], arr[idx]);
	while(i < j)
	{
		while(i < j && arr[j] >= temp) --j;
		while(i < j && arr[i] <= temp) ++i;
		if(i < j) 
			swap(arr[i], arr[j]);
	}
	arr[l] = arr[i];
	arr[i] = temp;
	quickSort(arr, l, i - 1);
	quickSort(arr, i + 1, r);
}

int main()
{
	std::cout << "hello git!\n";
	return 0;
}
