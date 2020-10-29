#pragma once
template <typename T>
int bin(T x, int*& res)
{
	int sz = sizeof(T);
	res = new int[sz * 8];
	char* p = reinterpret_cast<char*>(&x);
	for (int sm = 0; sm < sz; sm++) {
		for (int i = 0; i < 8; i++)
		{
			res[((sz - sm - 1) * 8) + i] = (1 << (7 - i) & *p) != 0 ? 1 : 0;
		}
		p++;
	}
	return sz * 8;
}
