kmain()
{
    char* vidmem=(char*)0xb8000;
    vidmem[0] = 'A';
    vidmem[1] = 0x07;
    vidmem[2] = 'A';
    vidmem[3] = 0x07;
    vidmem[4] = 'A';
    vidmem[5] = 0x07;
    vidmem[6] = 'A';
    vidmem[7] = 0x07;
    vidmem[8] = 'A';
    vidmem[9] = 0x07;
}
