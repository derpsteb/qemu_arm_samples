
//-------------------------------------------------------------------
//-------------------------------------------------------------------
void PUT32 ( unsigned int*, unsigned int );
//-------------------------------------------------------------------
void notmain ( void )
{
    unsigned int ra;

    for(ra=0;ra<8;ra++)
    {
        ra&=7;
        PUT32((unsigned int*) 0x09000000,0x30+ra);
    }

    while(1){}
}
//-------------------------------------------------------------------
//-------------------------------------------------------------------
