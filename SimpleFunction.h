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
void sort(int arr[], int len)
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
}

void sort(float arr[], int len)
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
}
//数组逆序
void ReverseArray(int arr[], int len)
{
	int temp;
	for (int i = 0; i < len / 2; i++)
	{
		temp = arr[i];
		arr[i] = arr[len - 1 - i];
		arr[len - 1 - i] = temp;
	}
}

void ReverseArray(float arr[], int len)
{
	float temp;
	for (int i = 0; i < len / 2; i++)
	{
		temp = arr[i];
		arr[i] = arr[len - 1 - i];
		arr[len - 1 - i] = temp;
	}
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

//插入元素
/*
arr[]:需要插入元素的数组
*len:数组长度值的指针
num:要插入的元素值
Index:要插入值的下标
*/
void insert(int arr[],int* len, int num, int Index)
{
	//len为当前数组长度，不是整个数组的长度
	for (int i = *len; i >= Index; i--)
	{
		arr[i + 1] = arr[i];
	}
	arr[Index] = num;
	*len += 1;
}

void insert(float arr[], float* len, float num, int Index)
{
	//len为当前数组长度，不是整个数组的长度
	for (int i = *len; i >= Index; i--)
		arr[i + 1] = arr[i];
	arr[Index] = num;
	*len += 1;
}

//删除元素
	//传入下标
void deleteIndex(int arr[], int* len, int Index)
{
	for (int i = Index; i < *len; i++)
		arr[i] = arr[i + 1];
	*len -= 1;
}

void deleteIndex(float arr[], float* len, int Index)
{
	for (int i = Index; i < *len; i++)
		arr[i] = arr[i + 1];
	*len -= 1;
}

	//传入元素值
void deleteVar(int arr[], int* len, int var)
{
	int index = 0;
	for (int i = 0; i < *len; i++)
	{
		if (arr[i] == var)
		{
			index = i;
			break;
		}
		else if (i + 1 == *len)
		{
			std::cout << "未找到元素" << std::endl;
			return;
		}
	}

	for (int i = index; i < *len; i++)
		arr[i] = arr[i + 1];
	*len -= 1;
}

void deleteVar(float arr[], float* len, float var)
{
	int index = 0;
	for (int i = 0; i < *len; i++)
	{
		if (arr[i] == var)
		{
			index = i;
			break;
		}
		else if (i + 1 == *len)
		{
			std::cout << "未找到元素" << std::endl;
			return;
		}
	}

	for (int i = index; i < *len; i++)
		arr[i] = arr[i + 1];
	*len -= 1;
}