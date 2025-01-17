#pragma once
#include "common.h"

int catalan_number(int n, int mod) {
	assert(factorial.size() > 2 * n);
	return (((factorial[2 * n] * inv_factorial[n + 1]) % mod) * inv_factorial[n]) % mod;
}
