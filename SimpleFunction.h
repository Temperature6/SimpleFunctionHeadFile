#pragma once
#include <iostream>
//����Ԫ�ظ���
int len(int arr[])
{
	return sizeof(arr) / 4;
}

int len(float arr[])
{
	return sizeof(arr) / 4;
}

//�������ֵ
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

//������Сֵ
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

//�������ֵ����
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

//������Сֵ����
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

//����Ԫ�����
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

//Ѱ������Ԫ�ص�һ�γ��ֵ�����
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

//ð������
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
//��������
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

//��ӡ����
void PrintArray(int arr[], int len, bool style = false) 
{
	//style����ֵ��Ĭ��Ϊfalse(�����д�ӡ)����Ϊtrue��Ϊ���д�ӡ
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
	//style����ֵ��Ĭ��Ϊfalse(�����д�ӡ)����Ϊtrue��Ϊ���д�ӡ
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

//����ƽ����
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

//����Ԫ��
/*
arr[]:��Ҫ����Ԫ�ص�����
*len:���鳤��ֵ��ָ��
num:Ҫ�����Ԫ��ֵ
Index:Ҫ����ֵ���±�
*/
void insert(int arr[],int* len, int num, int Index)
{
	//lenΪ��ǰ���鳤�ȣ�������������ĳ���
	for (int i = *len; i >= Index; i--)
	{
		arr[i + 1] = arr[i];
	}
	arr[Index] = num;
	*len += 1;
}

void insert(float arr[], float* len, float num, int Index)
{
	//lenΪ��ǰ���鳤�ȣ�������������ĳ���
	for (int i = *len; i >= Index; i--)
		arr[i + 1] = arr[i];
	arr[Index] = num;
	*len += 1;
}

//ɾ��Ԫ��
	//�����±�
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

	//����Ԫ��ֵ
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
			std::cout << "δ�ҵ�Ԫ��" << std::endl;
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
			std::cout << "δ�ҵ�Ԫ��" << std::endl;
			return;
		}
	}

	for (int i = index; i < *len; i++)
		arr[i] = arr[i + 1];
	*len -= 1;
}