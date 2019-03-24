#include <iostream>

#ifndef MPC_VER
# define MPC_VER 0
#endif

#define TM_MPC_VER \
    do { std::cout << "MPC_VER: " << MPC_VER << std::endl; } while (0)

int main(int, char *[])
{
#if   (MPC_VER == 0)
    TM_MPC_VER;
#elif (MPC_VER == 1)
    TM_MPC_VER;
#elif (MPC_VER == 2)
    TM_MPC_VER;
#elif (MPC_VER == 3)
    TM_MPC_VER;
#endif
    return 0;
}
