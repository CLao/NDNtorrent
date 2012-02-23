#include <string>

#ifndef GLOBALS_INC
#define GLOBALS_INC

/*
 *	//////////////////////////////////////////////////////////////////////////
 *	/// User Settings
 *	//////////////////////////////////////////////////////////////////////////
 */
 
// Current directory where files are downloaded to
string dir;
 
 

/*
 *	//////////////////////////////////////////////////////////////////////////
 *	/// Packet Stuffs
 *	//////////////////////////////////////////////////////////////////////////
 */
 
// Chunk size, in bytes
static size_t CHUNK_SIZE = 1024;
static size_t PACKET_SIZE = 1492;
static size_t HEADER_SIZE = 468;

typedef struct header* header_t;

struct header
{
	size_t chunk_index;
	char md5_hash[16];
};

struct Packet
{
	char buffer[PACKET_SIZE];
	char* payload;
	header_t header;
	Packet ();
};

#endif