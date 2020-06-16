void insert(int* mas, int n)
{
	int val,ind;
	for (int i = 1; i < n; i++)
	{
		val = mas[i];
		ind = i - 1;
		while (ind >= 0 && mas[ind] > val)
		{
			mas[ind + 1] = mas[ind];
			mas[ind] = val;
			ind--;
		}
	}
}
