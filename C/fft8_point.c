#include <stdio.h>

void InitSystem();


int main()
{
        float x[8],tr[8],ti[8],s1r[8],s1i[8],s2r[8],s2i[8],Xr[8],Xi[8],Yr[8],Yi[8];
        const float W0r = 1,
        W0i = 0,
        W1r = 0.707,
        W1i = -0.707,
        W2r = 0,
        W2i = -1,                       
        W3r = -0.707,
        W3i = -0.707;
        int *Input,*Real_out,*Imag_out;
        int i=0;
        Input = (int *)0x003F9200;
        Real_out = (int *)0x003F9210;
        Imag_out = (int *)0x003F9220;
        InitSystem();
        for(i=0;i<8;i++)
        {              
                        x[i] = 0;
                        x[i] = *(Input + i);
        }
    return 0;        
}