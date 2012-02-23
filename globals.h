#ifndef GLOBALS_INC
#define GLOBALS_INC

// Chunk size, in bytes
static size_t CHUNK_SIZE = 1024;
static size_t PACKET_SIZE = 1492;
static size_t HEADER_SIZE = 468;

struct header_t
{
	size_t chunk_index;
	char md5_hash[16];
};

struct payload_t;

struct Packet
{
	char buffer[PACKET_SIZE];
	header_t* header;
	Packet ();
};

#endif