//GOP defining(For Graphics)
typedef unsigned long long size_t;

typedef struct{
	void* BaseAddress;
	size_t BufferSize;
	unsigned int Width;
	unsigned int Height;
	unsigned int PixelsPerScanline;
}Framebuffer;

//print some stuff
void _start(Framebuffer* framebuffer){
    unsigned int y = 50;
    unsigned int BBP = 4;
    for (unsigned int x = 0; x < framebuffer->Width * BBP; x+=BBP){
		*(unsigned int*)(x + (y * framebuffer->PixelsPerScanline * BBP) + framebuffer->BaseAddress) = 0xff00ffff;
	}
    return;
}
