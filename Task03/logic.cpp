﻿//	[The Odd Count of Digits]
//	Нечётное количество цифр
//
//	Необходимо разработать рекурсивную функцию, которая проверяет,
//	состоит ли заданное пользователем число только из нечётного 
//	количества цифр или нет. 
//	
//	У числа 1234 – количество цифр чётное (even), 
//	а у числа 12345 – количество цифр нечётное (odd). 
// 
//	Число может быть как положительным, так и отрицательным.

#include "logic.h"

bool is_digits_count_odd(long long number) {
	//number = number < 0 ? number : -number;

	if (number < 10 && number > -10) {
		return true;
	}

	if (number < 100 && number > -100) {
		return false;
	}
	

	return is_digits_count_odd(number / 100);
}
