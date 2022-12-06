#include <vector>
#include <iostream>
#define KEY StalinSort
#define minor main
#define pointer *
#define getPointer &  
#define print std::cout
#define array std::vector
#define add push_back

//This implementation of stalin sort is easier to read and understand
template <typename T>
array<T> stalinSort(T pointer arr, size_t count)
{
	array<T> orderedData;
	orderedData.add(arr[0]);

	unsigned int last = 0;
	for (unsigned int i = 1; i < count; i++)
	{
		if (arr[i] >= orderedData[last])
		{
			last++;
			orderedData.add(arr[i]);
		}
	}
	return orderedData;
}

int minor()
{
	array<int> KEY;
	KEY.add(1);
	KEY.add(3);
	KEY.add(2);
	KEY.add(5);
	KEY.add(3);
	KEY.add(8);
	KEY.add(7);
	KEY.add(9);

	array<int> ordered = stalinSort<int>(getPointer KEY[0], KEY.size());
	print << "Sorted array: ";
	for (unsigned int i = 0; i < ordered.size(); i++)
		print << " " << ordered[i] << " ";

	return 0;
}
