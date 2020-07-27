#pragma once
#include <iostream>
//数组元素个数
int len(int arr[])
{
	return sizeof(arr) / 4;
}

int len(float arr[])
{
	return sizeof(arr) / 4;
}

//数组最大值
int max(int arr[],int len) 
{
	int max = arr[0];
	for (int i = 0; i < len; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	return max;
}

float max(float arr[], int len)
{
	float max = arr[0];
	for (int i = 0; i < len; i++) 
	{
		if (arr[i] > max) 
		{
			max = arr[i];
		}
	}
	return max;
}

//数组最小值
int min(int arr[], int len) 
{
	int min = arr[0];
	for (int i = 0; i < len; i++)
	{
		if (arr[i] < min) 
		{
			min = arr[i];
		}
	}
	return min;
}

float min(float arr[], int len)
{
	float min = arr[0];
	for (int i = 0; i < len; i++) 
	{
		if (arr[i] < min) 
		{
			min = arr[i];
		}
	}
	return min;
}

//数组最大值索引
int maxIndex(int arr[], int len)
{
	int max = arr[0];
	int maxIndex = 0;
	for (int i = 0; i < len; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
			maxIndex = i;
		}
	}
	return maxIndex;
}

int maxIndex(float arr[], int len) 
{
	float max = arr[0];
	int maxIndex = 0;
	for (int i = 0; i < len; i++)
	{
		if (arr[i] > max) 
		{
			max = arr[i];
			maxIndex = i;
		}
	}
	return maxIndex;
}

//数组最小值索引
int minIndex(int arr[], int len)
{
	int min = arr[0];
	int minIndex = 0;
	for (int i = 0; i < len; i++)
	{
		if (arr[i] < min) 
		{
			min = arr[i];
			minIndex = i;
		}
	}
	return minIndex;
}

int minIndex(float arr[], int len) 
{
	float min = arr[0];
	int minIndex = 0;
	for (int i = 0; i < len; i++)
	{
		if (arr[i] < min)
		{
			min = arr[i];
			minIndex = i;
		}
	}
	return minIndex;
}

//数组元素求和
int sum(int arr[], int len)
{
	int sum = 0;
	for (int i = 0; i < len; i++)
	{
		sum += arr[i];
	}
	return sum;
}

float sum(float arr[], int len)
{
	float sum = 0;
	for (int i = 0; i < len; i++
		) {
		sum += arr[i];
	}
	return sum;
}

//寻找数组元素第一次出现的索引
int findnum(int num, int arr[], int len) 
{
	int Index = -1;
	for (int i = 0; i < len; i++)
	{
		if (arr[i] == num)
		{
			Index = i;
			return Index;
		}
	}
	return -1;
}

int findnum(float num, float arr[], int len) 
{
	int Index = -1;
	for (int i = 0; i < len; i++)
	{
		if (num == arr[i])
		{
			Index = i;
			return Index;
		}
	}
	return -1;
}

//冒泡排序
int* sort(int arr[], int len)
{
	int temp;
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = 0; j < len - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	return arr;
}

float* sort(float arr[], int len)
{
	float temp;
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = 0; j < len - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	return arr;
}
//数组逆序
int* ReverseArray(int arr[], int len)
{
	int temp;
	for (int i = 0; i < len / 2; i++)
	{
		temp = arr[i];
		arr[i] = arr[len - 1 - i];
		arr[len - 1 - i] = temp;
	}
	return arr;
}

float* ReverseArray(float arr[], int len)
{
	float temp;
	for (int i = 0; i < len / 2; i++)
	{
		temp = arr[i];
		arr[i] = arr[len - 1 - i];
		arr[len - 1 - i] = temp;
	}
	return arr;
}

//打印数组
void PrintArray(int arr[], int len, bool style = false) 
{
	//style布尔值，默认为false(不换行打印)，若为true则为换行打印
	if (style == true)
	{
		for (int i = 0; i < len; i++)
		{
			std::cout << arr[i] << std::endl;
		}
	}
	else
	{
		for (int j = 0; j < len; j++)
		{
			if (j == 0)
			{
				std::cout << "[" << arr[j] << ", ";
			}
			else if (j == len - 1)
			{
				std::cout << arr[j] << "]" << std::endl;
			}
			else
			{
				std::cout << arr[j] << ", ";
			}
		}
	}
}

void PrintArray(float arr[], int len, bool style = false)
{
	//style布尔值，默认为false(不换行打印)，若为true则为换行打印
	if (style == true)
	{
		for (int i = 0; i < len; i++)
		{
			std::cout << arr[i] << std::endl;
		}
	}
	else
	{
		for (int j = 0; j < len; j++)
		{
			if (j == 0)
			{
				std::cout << "[" << arr[j] << ", ";
			}
			else if (j == len - 1)
			{
				std::cout << arr[j] << "]" << std::endl;
			}
			else
			{
				std::cout << arr[j] << ", ";
			}
		}
	}
}

//数组平均数
float avg(int arr[], int len)
{
	float sum = 0;
	for (int i = 0; i < len; i++)
	{
		sum += (float)arr[i];
	}
	return sum / len;
}

float avg(float arr[], int len)
{
	return sum(arr, len) / len;
}