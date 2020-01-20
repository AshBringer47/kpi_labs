#include "stringSort.h"

string stringSort(string str) {
	str += " ";
	string result = "";
	int w_begin = 0;
	int w_length = 0;

	for (int j = 1; j <= 20; j++) {
		for (int i = 0; i < str.length(); i++) {
			if (str[i] != ' ') {
				w_length++;
			}
			else {
				if (w_length == 0) {
					w_begin = i + 1;
				}
				else {
					if (w_length == j) {
						result += str.substr(w_begin, w_length) + " ";
					}
					w_length = 0;
					w_begin = i + 1;
				}
			}
		}
		w_begin = 0;
		w_length = 0;
	}
	return result;
}