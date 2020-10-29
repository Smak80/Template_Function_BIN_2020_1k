#pragma once
template <typename T>
int bin(T x, int*& res)
{
	int sz = sizeof(x);
	res = new int[sz * 8];								   
	for (int i = 0; i < sz * 8; i++) {
		res[i] = (1LL << (sz * 8 - 1 - i) & x) != 0 ? 1 : 0;
	}
	return sz * 8;
}
