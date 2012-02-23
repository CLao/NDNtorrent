#ifndef EXECUTE_INC
#define EXECUTE_INC

class program {
	public:
		execute (int argc, char **argv);
	private:
		Downloader d;
		Uploader u;
		NDNConnector n;
		File_manager f;
};

#endif