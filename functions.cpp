#include <iostream>
#include <fstream>
#include "headers.hpp"

int Save(int _key, const char* file){

	std::cout << _key << std::endl;

	//ofstream output_file;
	
	//output_file.open("key_log.txt");


	FILE* OUTPUT_FILE;

	OUTPUT_FILE = fopen(file, "a+"); //add new keys
	fprintf(OUTPUT_FILE, "%s", &_key);
	fclose(OUTPUT_FILE);

	return 0;
}
