//add
#define __DEBUG

#ifdef __DEBUG
#define debug(format,...) printf("FILE: "__FILE__", LINE: %d: "format"\n", __LINE__, ##__VA_ARGS__)
#define debugs(...) debug("%s",##__VA_ARGS__)
#else
#define debug(format,...) 
#define debugs(...)
#endif