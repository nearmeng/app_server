#include "stdafx.h"
#include "os_user_module.h"

#include "app/server_app.h"
#include "define/shm_def.h"
#include "config/server_config.h"
    
MG_REGISTER_MODULE(CUserModule);

BOOL CUserModule::init(BOOL bResume)
{
    int32_t nRetCode = 0;

    nRetCode = m_UserPool.init(sstdOnlineUser, g_ServerConfig.nUserObjCount, bResume);
    LOG_PROCESS_ERROR(nRetCode);

    nRetCode = _init_msg_handler();
    LOG_PROCESS_ERROR(nRetCode);

    return TRUE;
Exit0:
    return FALSE;
}

BOOL CUserModule::uninit(void)
{
    int32_t nRetCode = 0;

    nRetCode = m_UserPool.uninit();
    LOG_CHECK_ERROR(nRetCode);

    return TRUE;
}
    