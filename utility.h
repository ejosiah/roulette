#ifndef UTILITY_H
#define UTILITY_H

#include <string>
#include <vector>
using namespace std;

vector<string> split(string& str, char delm){
	vector<string> results;
	int start = 0; 
	int end = str.length();
	for (int i = start; i < end; i++){
		if (str[i] == delm){
			results.push_back(str.substr(start, i - start));
			start = i+1;
		}else if (i == (end - 1)){
			results.push_back(str.substr(start, end));
		}
	}
	return results;
}

#endif // !UTILITY_H