#include "stdafx.h"

#include "user/os_user_module.h"
#include "app/server_app.h"

int main(int argc, char* argv[])
{ 
    int32_t nRetCode = 0;
    CMGApp* pServer = &CMGApp::instance();

    MG_CONFIG config;
    pServer->set_config(config);
    
    nRetCode = pServer->init("online_server", argc, argv);
    LOG_PROCESS_ERROR(nRetCode);

    pServer->run_mainloop();

    pServer->fini();

Exit0:
	return 0;
}
