#pragma once
#include "Bucket.h"
#include <random>

class LSH {
private:
	Bucket ** _bucket;
	int _K;
	int _L;
	int *rand1;
//	std::random_device rd;
	

public:
	LSH(int K, int L);
	int _rangePow;
	int* add(int *indices, int id);
	int add(int indices, int tableId, int id);
	int * hashesToIndex(int * hashes);
	int** retrieveRaw(int *indices);
	int retrieve(int table, int indices, int bucket);
	void count();
	~LSH();
};
