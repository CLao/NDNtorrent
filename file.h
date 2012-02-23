#ifndef FILE_INC
#define FILE_INC

#include <iostream>
#include <fstream>
#include <string>

class File_manager 
{
	public:
		open_file (string s);
		read_chunk (size_t index);
		write_chunk (size_t index, char* buf, size_t numbytes);

	private:
		fstream m_file;
		
};

#endif