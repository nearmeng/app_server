#ifndef _SHM_DEF_H_
#define _SHM_DEF_H_

#include "define/server_base_shm_def.h"

enum GAME_SERVER_SHM_TYPE_DEF
{
    sstdBegin = stdUserDefined,

    sstdServerSessionDefault,
    sstdUser,
    sstdRole,
    sstdAchieve,
};

#endif