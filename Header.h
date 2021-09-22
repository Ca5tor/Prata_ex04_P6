#pragma once
#ifndef _HEADER_EX_4_H_
#define _HEADER_EX_4_H_

#include <iostream>
#include <cctype>

const unsigned int	strsize = 30;
const unsigned int	size_struct = 5;

struct bop {
	char		fullname[strsize];
	char		title[strsize];
	char		bopname[strsize];
	unsigned int	preference; // 0 = fullname, 1 = title, 2 = bopname
};

void Ex4(void);

#endif
